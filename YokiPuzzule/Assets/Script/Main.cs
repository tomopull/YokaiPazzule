﻿using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;
using LitJson;

//線の描画ロジックの再考
//新規のオブジェクトの追加を破綻せないようにする
//なぞったオブジェクトを消す。
//オブジェクトから離れたらラインを消す

public class Main : MonoBehaviour {

	//ゲームのデータ管理
	private GameModel _game_model;

	//ゲームのオブジェクト生成
	public ObjectGenerator _object_generator;

	//ユーザーインプット管理
	private GameModel.SimpleTouch ActiveTouch;


	// Use this for initialization
	void Start () {
		InitManager ();
		Init ();
	}
		
	//初期化
	private void Init(){
		LoadFile ();
	}

	//外部ファイルのロード
	private void LoadFile(){
		StartCoroutine("LoadFileCorutine",Application.dataPath + GameModel.Json_Path);
	}

	IEnumerator LoadFileCorutine(string _file_path){

		WWW file = new WWW ("file://" + _file_path);

		yield return file;

		JsonData data = LitJson.JsonMapper.ToObject (file.text);

		InitObjects(data);
	}
		
	//マネージャー初期化
	private void InitManager(){
		_game_model = GameModel.Instance;            
	}

	//ゲームオブジェクトのデータの初期化
	private void InitObjects(JsonData data){

		_game_model.ObjectDataList = new List<ObjectData> ();
		_game_model.RowCount = 8;
		_game_model.ColumnCount = 7;
		_game_model.IsInteractive = !_game_model.IsInteractive;

		AddObjectsData (data, _game_model.RowCount, _game_model.ColumnCount);
	}
		

	//オブジェクトを追加
	private void AddObjectsData(JsonData data,int row_count, int column_count,Vector3 offset = new Vector3()){
	
		Util.Shuffle (data);

		//ゲームオブジェクト描画するゲームオブジェクト
		GameObject game_object_container = GameObject.Find ("GameObjectContainer");

		for (int i = 0; i < row_count; i++) {

			for (int j = 0; j < column_count; j++) {
				GameObject obj = (GameObject)Instantiate(Resources.Load("Prefabs/Object"),new Vector3(1.2f * i,1.2f * j,0),Quaternion.identity);
				obj.transform.Translate (new Vector3 (-2f, 0, 0));//位置微調整後で消したい。

				//親のゲームオブジェクトの指定
				obj.transform.parent = game_object_container.transform;

				//オブジェクトにデータを追加
				ObjectData obj_data = obj.GetComponent<ObjectData> ();
				obj_data.Point = (int)data ["object_data"][i]["point"];
				obj_data.Category = (int)data ["object_data"][j]["category"];
				obj_data.Obj = obj;


				_game_model.ObjectDataList.Add (obj_data);

				//カラーチェンジ
				switch (obj_data.Category) {

				case 1:
					obj.GetComponent<Renderer> ().material.color = Color.blue;
					break;
				case 2:
					obj.GetComponent<Renderer> ().material.color = Color.red;
					break;
				case 3:
					obj.GetComponent<Renderer> ().material.color = Color.yellow;
					break;
				case 4:
					obj.GetComponent<Renderer> ().material.color = Color.green;
					break;
				case 5:
					obj.GetComponent<Renderer> ().material.color = Color.cyan;
					break;
				}
			}
		}
	}

	//スワイプかタッチか判別
	private void CaluculateTouchInput(GameModel.SimpleTouch CurrentTouch){

		Vector2 touchDirection  = (CurrentTouch.CurrentTouchLocation - CurrentTouch.StartTouchLocation).normalized;
		float touchDistance     = (CurrentTouch.StartTouchLocation - CurrentTouch.CurrentTouchLocation).magnitude;
		TimeSpan timeGap        = System.DateTime.Now - CurrentTouch.StartTime;
		double touchTimeSpan    = timeGap.TotalSeconds;
		string touchType        = ( touchDistance > _game_model.SwipeDistance && touchTimeSpan > _game_model.SwipeTime ) ? "Swipe" : "Tap";
//		if(GameCharacter != null){
//			if(!GameCharacter.isDead){
//				GameCharacter.RecieveInput (touchDistance,touchDirection);
//			}
//		}

	}

	// Update is called once per frame
	void Update () {

		if(Application.isEditor){
			if (Input.GetMouseButton (0)) {
				if (ActiveTouch.Phase == TouchPhase.Canceled) {
					ActiveTouch.CurrentTouchLocation = Input.mousePosition;
					ActiveTouch.StartTouchLocation = Input.mousePosition;
					ActiveTouch.StartTime = System.DateTime.Now;
					ActiveTouch.Phase = TouchPhase.Began;
					_game_model.IsButtonDown = true;

			
				} else {
					ActiveTouch.CurrentTouchLocation = Input.mousePosition;
				}
			} else {
				if (ActiveTouch.Phase == TouchPhase.Began) {
					CaluculateTouchInput (ActiveTouch);
					ActiveTouch.Phase = TouchPhase.Canceled;
					_game_model.IsButtonDown = false;

				} 
			}

		}else{

			if (Input.touches.Length > 0) {

				_game_model.DeviceTouch = Input.GetTouch (0);

				if (ActiveTouch.Phase == TouchPhase.Canceled) {

					ActiveTouch.Phase = _game_model.DeviceTouch.phase;
					ActiveTouch.StartTime = System.DateTime.Now;
					ActiveTouch.StartTouchLocation = _game_model.DeviceTouch.position;
					ActiveTouch.CurrentTouchLocation = _game_model.DeviceTouch.position;

				} else {
					ActiveTouch.CurrentTouchLocation = _game_model.DeviceTouch.position;
				}

			} else {
				if(ActiveTouch.Phase != TouchPhase.Canceled){
					CaluculateTouchInput (ActiveTouch);
					ActiveTouch.Phase = TouchPhase.Canceled;
				}
			}
		}

		if (_game_model.IsButtonDown) {
			SetLineObjetsData ();
			DrawLine (_game_model.SelectedObjectDataList);
		} else {
			ResetLineObjectData ();
			DrawLine (_game_model.SelectedObjectDataList);
		}
						
	}

	private void SetLineObjetsData(){
			//近くのオブジェクト同士を線でつなぐ
			//マウスの位置を常に取得しマウスとオブジェクトが十分近ければライン描画用お配列に追加
			//同じオブジェクトを配列に追加しない。
			//マウスダウンされた位置のスクリーン座標をゲームのワールド座標で取得
			Vector2 world_mouse_pos = Camera.main.ScreenToWorldPoint (Input.mousePosition);
			//マウスとオブジェクトとの距離を判定
			//マウスから一番近いオブジェクトの取得
			//一番近いオブジェクトでなおかつ種類の同じものをなぞっていくと線がつながる
		for (int i = 0; i < _game_model.ObjectDataList.Count; i++) {
			GameObject obj = (GameObject)_game_model.ObjectDataList [i].Obj;
			//オブジェクトのワールド座標とマウスのワールド座標を比較
			float now_distance = Vector3.Distance (world_mouse_pos, obj.transform.position);

			//最後に選択されたオブジェクトがある場合はそれとの距離とともに判定
			if (_game_model.LastObjectSelected != null) {
				float now_distance_from_last_selected = Vector3.Distance (world_mouse_pos, _game_model.LastObjectSelected.Obj.transform.position);

				//マウスと十分近いかどうか
				//既に選択済みのオブジェクトがある場合は最後に選択済みのオブジェクトと十分近いかどうか
				if (now_distance <= _game_model.TouchDistance && now_distance_from_last_selected <= _game_model.TouchDistance) {
					
					//一番最初に選択したオブジェクトの種類がnullなら現在のオブジェクトの種類を代入
					if (_game_model.FirstObjectSelectedCategory == ObjectData.NullCategory) {
						_game_model.FirstObjectSelectedCategory = _game_model.ObjectDataList [i].Category;
					}

					//一番最初に選択したオブジェクトと同じ種類かどうか
					//おなじなら選択済み配列に追加
					if (_game_model.FirstObjectSelectedCategory == _game_model.ObjectDataList [i].Category && !checkAlreadySetObjectsData (_game_model.ObjectDataList [i])) {
						_game_model.SelectedObjectDataList.Add (_game_model.ObjectDataList [i]);
						print ("二つ目移行に選択");
						//最後に選択されたオブジェクトに代入
						_game_model.LastObjectSelected = _game_model.ObjectDataList [i];
					}

				}
					
			} else {
				//最初に選択したオブジェクトの場合
				//マウスと十分近いかどうか
				if (now_distance <= _game_model.TouchDistance) {
				
					//一番最初に選択したオブジェクトの種類がnullなら現在のオブジェクトの種類を代入
					if (_game_model.FirstObjectSelectedCategory == ObjectData.NullCategory) {
						_game_model.FirstObjectSelectedCategory = _game_model.ObjectDataList [i].Category;
					}
					//一番最初に選択したオブジェクトと同じ種類かどうか
					//おなじなら選択済み配列に追加
					if (_game_model.FirstObjectSelectedCategory == _game_model.ObjectDataList [i].Category && !checkAlreadySetObjectsData (_game_model.ObjectDataList [i])) {
						_game_model.SelectedObjectDataList.Add (_game_model.ObjectDataList [i]);
						print ("最初に選択したオブジェクト");
						//最後に選択されたオブジェクトに代入
						_game_model.LastObjectSelected = _game_model.ObjectDataList [i];
					}

				}
					
			}
				
		}

	}


	//既に選択済みかそうでないか
	//選択済み true, 未選択 false
	private bool checkAlreadySetObjectsData(ObjectData object_data){

		for (int i = 0; i < _game_model.SelectedObjectDataList.Count; i++) {
			GameObject obj = (GameObject)_game_model.SelectedObjectDataList[i].Obj;

			if(obj.Equals(object_data.Obj)){
				//print ("既に選択済み");
				return true;
			}

		}
		//print("既に選択済みでない");
		return false;
	}

	private void ResetLineObjectData(){
		_game_model.SelectedObjectDataList = new List<ObjectData>();
		_game_model.FirstObjectSelectedCategory = ObjectData.NullCategory;
		_game_model.LastObjectSelected = null;

		//print ("reset");
	}



	//マウスをドラッグ中なら近くのオブジェクト同時をつなぐ線の描画処理を継続
	private void DrawLine(List<ObjectData> _object_data_list){
	
		LineRenderer line = GameObject.Find ("LineContainer").GetComponent<LineRenderer>();
		line.sortingOrder = 10;
		line.SetWidth (0.1f, 0.1f);
		line.SetVertexCount (_object_data_list.Count);

		for (int i = 0; i < _object_data_list.Count; i++) {
			line.SetPosition (i, _object_data_list [i].Obj.transform.position);
			//_object_data_list [i].gameObject.GetComponent<Renderer> ().material.color = Color.gray;
		}
	
	}
		
}
