using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using System;
using LitJson;

//一回引いた線を元に戻すロジック

//5,線の描画ロジックの再考
//2,新規のオブジェクトの追加を破綻せないようにする
//3,なぞったオブジェクトを消す。
//4,オブジェクトから離れたらラインを消す
//1,選択されたオブジェクトが光るかして、選択しているのがわかる

//key, value の連想配列でオブジェクト管理しないとだめかも

//※タイマー機能
//※選択したオブジェクトを戻す機能
//*オブジェクトを追加するタイミング


//台を叩いてオブジェクトをシャッフルする機能。

public class Main : MonoBehaviour {

	//ゲームのデータ管理
	private GameModel _game_model;

	//ゲームオブジェクト管理
	public GameObjectManager _game_object_manager;

	//キャンバスオブジェクト管理
	public CanvasObjectManager _canvas_object_manager;

	//パーティクル管理
	public ParticleManager _particle_manager;

	//ユーザーインプット管理
	private GameModel.SimpleTouch ActiveTouch;

	// Use this for initialization
	void Start () {
		//init all managers
		InitManager ();
		Init ();
	}

	//スワイプかタッチか判別
	private void CaluculateTouchInput(GameModel.SimpleTouch CurrentTouch){
		Vector2 touchDirection  = (CurrentTouch.CurrentTouchLocation - CurrentTouch.StartTouchLocation).normalized;
		float touchDistance     = (CurrentTouch.StartTouchLocation - CurrentTouch.CurrentTouchLocation).magnitude;
		TimeSpan timeGap        = System.DateTime.Now - CurrentTouch.StartTime;
		double touchTimeSpan    = timeGap.TotalSeconds;
		string touchType        = ( touchDistance > _game_model.SwipeDistance && touchTimeSpan > _game_model.SwipeTime ) ? "Swipe" : "Tap";
	}

	//各マネージャー、モデル初期化
	private void InitManager(){
		_game_model = GameModel.Instance;

		_game_object_manager = GameObjectManager.Instance;

		_canvas_object_manager = CanvasObjectManager.Instance;

		_particle_manager = ParticleManager.Instance;
		_particle_manager._game_model = _game_model;

		_game_model.ParticleDataList = new List<List<GameObject>> ();

		_game_model.Init ();
	}
		
	//初期化
	private void Init(){
		LoadFile ();
	}

	//外部ファイルのロード
	private void LoadFile(){
		StartCoroutine("LoadFileCorutine",_game_model.Json_Path);
	}

	IEnumerator LoadFileCorutine(string _file_path){

		WWW file = new WWW (_file_path);

		yield return file;

		JsonData data = LitJson.JsonMapper.ToObject(file.text);

		//ローカルにオリジナルjsonデータ保存
		_game_model.OriginalJsonData = data;

		//オブジェクト初期化
		InitObjects(data);

		//タイマー初期化
		InitTimer ();

		//インフォの初期化
		InitCanvasTextInfo ();

		//プラットフォーム表示
		Util.UpdateTextStringUtil (_base_url_text, Util.GetBaseURL ().ToString ()); //base url
		Util.UpdateTextStringUtil (_url_text,_game_model.Json_Path.ToString()); //url text

	}

	//base url text
	private Text _base_url_text;

	//url text
	private Text _url_text;

	//point text
	private Text _point_text;

	//obj count text;
	private Text _obj_count_text;

	private  void InitCanvasTextInfo(){
		_base_url_text = Util.FindTextComponentUtil("/GameInfo/Canvas/BaseURL_Text");
		_url_text = Util.FindTextComponentUtil ("/GameInfo/Canvas/URL_Text");
		_point_text = Util.FindTextComponentUtil ("/GameInfo/Canvas/Point_Text");
		_obj_count_text = Util.FindTextComponentUtil ("/GameInfo/Canvas/Count_Text");
	}
		
	private Timer _timer;
	private bool time_up = false;

	private void InitTimer(){
		_timer = new Timer ();
		_timer.LimitTime = _game_model.GameTime;
		//_timer.FireDelegate = TimerTcick;
	}

	//タイマーの表示の更新
	private void TimerTcick(){
		Text timer_text = Util.FindTextComponentUtil ("/GameInfo/Canvas/Timer_Text");
		string base_time = Mathf.Round (_timer.LimitTime).ToString ();
		//時間終了判定
		if (Mathf.Round (_timer.CurrentTime) == Mathf.Round (_timer.LimitTime)) {

			//print ("タイムアップ");
			time_up = true;

			timer_text.text = "0" + "/" + base_time;

		} else {
			string current_time = Mathf.Round (_timer.LimitTime - _timer.CurrentTime).ToString ();
			timer_text.text = current_time + "/" + base_time;
		}

	}

	//ゲームオブジェクトのデータの初期化
	private void InitObjects(JsonData data){
		_game_model.ObjectDataDict = new Dictionary<String,ObjectData> ();
		_game_model.RowCount = 7;
		_game_model.ColumnCount = 7;
		_game_model.IsInteractive = !_game_model.IsInteractive;

		_particle_manager.InitParticleList (_game_model.VanishParticleList, _game_model);
		_particle_manager.InitParticleList (_game_model.GetPointParticleList, _game_model);

		AddObjectsData (data, _game_model.RowCount, _game_model.ColumnCount);
	}
		
	//オブジェクトを追加
	private void AddObjectsData(JsonData data,int row_count, int column_count,Vector3 offset = new Vector3()){

		Util.Shuffle (data);

		//ゲームオブジェクト描画するゲームオブジェクト
		GameObject game_object_container = GameObject.Find ("GameObjectContainer");

		for (int i = 0; i < row_count; i++) {

			for (int j = 0; j < column_count; j++) {

				GameObject obj = Util.InstantiateUtil (_game_model, "Object", new Vector3 (0.6f * i, 0.6f * j, 0), Quaternion.identity);
				obj.transform.Translate (new Vector3 (0.3f, 0.3f, 0));//位置微調整後で消したい。
				obj.transform.Translate (offset);

				//親のゲームオブジェクトの指定
				obj.transform.parent = game_object_container.transform;
		
				//オブジェクトにデータを追加
				ObjectData obj_data = obj.GetComponent<ObjectData> ();
				obj_data.Point = (int)data ["object_data"][i]["point"];
				obj_data.Category = (int)data ["object_data"][j]["category"];

				string _key = i + "_" + j + "_" + GameModel.GetUniqueIndex ();
				_game_model.ObjectDataDict.Add (_key, obj_data);

				obj_data.Key = _key;
				obj_data.Obj = obj;

				//print (i + "_" + j + "_" + GameModel.GetUniqueIndex ());
				SetColor(obj_data.Category,obj);

			}
		}
			
	}
		
	//現在のオブジェクトの数がいくつかカウント一定数以下になっていたらオブジェクトの追加
	private bool CheckObjectsDataCount(){

		//print (_game_model.ObjectDataDict.Count + "現在のオブジェクトの数");

		if (_game_model.ObjectDataDict.Count <= _game_model.MinimumNumberOfObjectData) {
			return true;
		}

		return false;
	}

	//オブジェクトを消した際に新規でオブジェクトを追加
	private void AddRandomObjectData(){
		AddObjectsData (_game_model.OriginalJsonData, 6, 3,new Vector3(0.55f,7,0));
	}

	//カラーチェンジ
	private void SetColor(int _category_id,GameObject obj){

		//カラーチェンジ
		switch (_category_id) {

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
		
	// Update is called once per frame
	void Update () {

		//タイマーの更新
		if (_timer != null) {
			if (_timer.Update ()) {

			}

			//タイムアップしていないなら時間の経過
			if (!time_up) {
				TimerTcick ();
			} else {
				Time.timeScale = 0;
			}
			//print (_timer.RemainingTime + "残り時間");
			//print (_timer.CurrentTime + "経過時間");
		}

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

					//二つ以上選択していたら消す
					//ポイントとか追加
					if(CheckLineObjectData ()){
						RemoveSelectedLineObjectData ();
						//オブジェクトの数が一定数以下になっていたらランダムで新規のオブジェクト追加
						if (CheckObjectsDataCount()) {
							AddRandomObjectData ();
						}
					}
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
					_game_model.IsButtonDown = true;
				} else {
					ActiveTouch.CurrentTouchLocation = _game_model.DeviceTouch.position;
				}

			} else {
				if(ActiveTouch.Phase != TouchPhase.Canceled){
					CaluculateTouchInput (ActiveTouch);
					ActiveTouch.Phase = TouchPhase.Canceled;
					_game_model.IsButtonDown = false;
					//二つ以上選択していたら消す
					//ポイントとか追加
					if(CheckLineObjectData ()){
						RemoveSelectedLineObjectData ();
						//オブジェクトの数が一定数以下になっていたらランダムで新規のオブジェクト追加
						if (CheckObjectsDataCount()) {
							AddRandomObjectData ();
						}
					}

				}
			}
		}

		//ボタンをダウンしていたら、していなかったら
		if (_game_model.IsButtonDown) {

			//オブジェクト上にラインの描画
			SetLineObjetsData ();

			SetLineObjectDataReverse ();

			HighLightSelectedData (_game_model.SelectedObjectDataDict);

			DrawLine (_game_model.SelectedObjectDataDict);

		} else {

			if(_game_model.SelectedObjectDataDict != null){

				ResetHighLightSelectedData (_game_model.SelectedObjectDataDict);

			}

			ResetLineObjectData ();

			DrawLine (_game_model.SelectedObjectDataDict);

		}

		//再生終了したパーティクルデータを削除
		if(_particle_manager != null)_particle_manager.RemoveParticleData ();	

	}

	//ボタンをダウンしている間つねにどのオブジェクト間にラインを引きどのオブジェクト間にラインを
	//引かないか判定している。
	private void SetLineObjetsData(){
			//近くのオブジェクト同士を線でつなぐ
			//マウスの位置を常に取得しマウスとオブジェクトが十分近ければライン描画用お配列に追加
			//同じオブジェクトを配列に追加しない。
			//マウスダウンされた位置のスクリーン座標をゲームのワールド座標で取得
			Vector2 world_mouse_pos = Camera.main.ScreenToWorldPoint (Input.mousePosition);
			//マウスとオブジェクトとの距離を判定
			//マウスから一番近いオブジェクトの取得
			//一番近いオブジェクトでなおかつ種類の同じものをなぞっていくと線がつながる

		foreach (KeyValuePair<string,ObjectData> pair in _game_model.ObjectDataDict) {

			ObjectData now_data = (ObjectData)pair.Value;

			string now_key = pair.Key;

			float now_distance = Vector3.Distance (world_mouse_pos, now_data.Obj.transform.position);

			//最後に選択されたオブジェクトがある場合はそれとの距離とともに判定
			if (_game_model.LastObjectSelected != null) {
			
				float now_distance_from_last_selected = Vector3.Distance (world_mouse_pos, _game_model.LastObjectSelected.Obj.transform.position);

				//マウスと十分近いかどうか
				//既に選択済みのオブジェクトがある場合は最後に選択済みのオブジェクトと十分近いかどうか
				if (now_distance <= _game_model.TouchDistance && now_distance_from_last_selected <= _game_model.TouchDistance) {

					//一番最初に選択したオブジェクトと同じ種類かどうか
					//おなじなら選択済み配列に追加
					if (_game_model.FirstObjectSelectedCategory == _game_model.ObjectDataDict[now_key].Category && !checkAlreadySetObjectsData (_game_model.ObjectDataDict[now_key])) {

						_game_model.SelectedObjectDataDict.Add (now_key,now_data);

						//最後から二番目に選択されていたオブジェクトへの参照(ここの代入の順番変えちゃだめ)
						_game_model.LastButOneObjectSelected = _game_model.LastObjectSelected;

						//最後に選択されたオブジェクトに代入
						_game_model.LastObjectSelected = now_data;

					}
						
				}
					
			}else {
				//最初に選択したオブジェクトの場合
				//マウスと十分近いかどうか
				if (now_distance <= _game_model.TouchDistance) {

					//一番最初に選択したオブジェクトの種類がnullなら現在のオブジェクトの種類を代入
					if (_game_model.FirstObjectSelectedCategory == ObjectData.NullCategory) {
						_game_model.FirstObjectSelectedCategory = _game_model.ObjectDataDict[now_key].Category;
					}

					//一番最初に選択したオブジェクトと同じ種類かどうか
					//おなじなら選択済み配列に追加
					if (_game_model.FirstObjectSelectedCategory == _game_model.ObjectDataDict[now_key].Category && !checkAlreadySetObjectsData (_game_model.ObjectDataDict [now_key])) {
					
						_game_model.SelectedObjectDataDict.Add (now_key,now_data);
						//最後に選択されたオブジェクトに代入
						_game_model.LastObjectSelected = now_data;
						//print ("最初");
					}

				}
					
			}
				
		}

	}
		
	private void SetLineObjectDataReverse(){

		//マウスダウンされた位置のスクリーン座標をゲームのワールド座標で取得
		Vector2 world_mouse_pos = Camera.main.ScreenToWorldPoint (Input.mousePosition);

		//オブジェクトを逆になぞりなおす処理
		//前回なぞったオブジェクトをさかのぼると線をけしていける
		//前回なぞったオブジェクトと十分マウスが近づいたらライン配列への登録解除
		if(_game_model.LastObjectSelected != null && _game_model.LastButOneObjectSelected != null  ){
		
			float now_distance_from_last_object_selected = Vector3.Distance (world_mouse_pos,_game_model.LastObjectSelected.transform.position);

			float now_distance_from_last_but_one_object_selected = Vector3.Distance (world_mouse_pos, _game_model.LastButOneObjectSelected.transform.position);

			if(now_distance_from_last_but_one_object_selected <= _game_model.TouchDistance && now_distance_from_last_object_selected >= _game_model.TouchDistance){
			
				//一番最後のオブジェクトをとりあえず元の色に戻す
				SetColor (_game_model.LastObjectSelected.Category,_game_model.LastObjectSelected.Obj);

				//一番最後のオブジェクトの参照の削除
				_game_model.SelectedObjectDataDict.Remove (_game_model.LastObjectSelected.Key);

				int tmp_count = 0;
				//一番最後のオブジェクトの参照のセット

				//ライン上に選択しているオブジェクトが二つ以上ある場合は
				//最後に選択したオブジェクトと最後から二番目に選択したオブジェクトの参照を設定し直す。
				if (_game_model.SelectedObjectDataDict.Count >= 1) {
				
					foreach (KeyValuePair<string,ObjectData> pair in _game_model.SelectedObjectDataDict) {

						ObjectData now_data = (ObjectData)pair.Value;
						string now_key = pair.Key;

						tmp_count += 1;

						if (tmp_count == _game_model.SelectedObjectDataDict.Count) {
							_game_model.LastObjectSelected = now_data;
							//print ("一番最後のオブジェクトの参照のセット");
						} else if (tmp_count == _game_model.SelectedObjectDataDict.Count - 1) {
							_game_model.LastButOneObjectSelected = now_data;
							//print ("最後から二番目のオブジェクトの参照のセット");
						}
							
					}
						
				}
					
			}
		
		}
			
	}

	//選択したリストのチェック
	//二つ以上選択しているかどうか 二つ以上選択していたらtrue
	private bool CheckLineObjectData(){
	
		if (_game_model.SelectedObjectDataDict != null) {

			if (_game_model.SelectedObjectDataDict.Count >= _game_model.LineNum) {
				return true;
			}

		}

		return false;
	}

	//選択されたオブジェクトの削除の実行
	private void RemoveSelectedLineObjectData(){

		foreach (KeyValuePair<string,ObjectData> pair in _game_model.SelectedObjectDataDict) {

			string tmp_key = pair.Key;
			ObjectData tmp_data = pair.Value;

			if(_game_model.SelectedObjectDataDict.ContainsKey(tmp_key)){
			
				//オブジェクトが消える時のパーティクルが発生する
				GameObject _vanish_particle_obj = Util.InstantiateUtil (_game_model, "ParticleExplode", new Vector3 (tmp_data.transform.position.x, tmp_data.transform.position.y, tmp_data.transform.position.z), Quaternion.identity);

				//ゲットポイントのパーティクルのが発生する
				GameObject _get_point_particle_obj = Util.InstantiateUtil (_game_model, "GetPointParticle", new Vector3 (tmp_data.transform.position.x, tmp_data.transform.position.y, tmp_data.transform.position.z), Quaternion.identity);

//				float dist_x = _point_text.transform.position.x;
//				float dist_y = _point_text.transform.position.y;
//				float dist_x = _point_text.transform.position.x - tmp_data.transform.position.x;
//				float dist_y = _point_text.transform.position.y - tmp_data.transform.position.y;
				//Debug.Log (_point_text.transform.position.x + ":x");
				//Debug.Log (_point_text.transform.position.y + ":y");

				Vector3 world_pos_of_point_text = Camera.main.ScreenToWorldPoint (_point_text.transform.position);

				iTween.MoveTo (_get_point_particle_obj, 
					iTween.Hash (
						"position", world_pos_of_point_text, 
						"easeType", iTween.EaseType.easeInOutCubic,"time",0.8f,
						"oncomplete", "PointGetComplete",
						"oncompletetarget", this.gameObject
					));

				_vanish_particle_obj.GetComponent<ParticleSystem> ().Play ();

				//現在存在しているパーティクルの参照の保存
				_particle_manager.AddParticleList (_vanish_particle_obj, _game_model.VanishParticleList);
				_particle_manager.AddParticleList (_get_point_particle_obj, _game_model.GetPointParticleList);

				//ゲームオブジェクトの削除
				Destroy (tmp_data.Obj);


				//獲得ポイント追加
				_game_model.TotalPoint += tmp_data.Point;

				//獲得オブジェクト数の追加
				_game_model.TotalObjectCount += 1;

				//元となる配列から参照の削除
				_game_model.ObjectDataDict.Remove (tmp_key);

			}

		}
			

	}
		

	public void PointGetComplete(){
		//ポイント
		Util.UpdateTextStringUtil (_point_text,_game_model.TotalPoint.ToString());
		//オブジェクトカウント
		Util.UpdateTextStringUtil (_obj_count_text, _game_model.TotalObjectCount.ToString());
	}


	/// <summary>
	/// 再生されたパーティクルデータを削除
	/// </summary>

	private void RemoveParticleData(){

		//消えるエフェクト再生終わったら
		if (_game_model.VanishParticleList != null) {
		
			for (int i = 0; i < _game_model.VanishParticleList.Count; i++) {
			
				GameObject obj = (GameObject)_game_model.VanishParticleList [i];

				ParticleSystem particle = obj.GetComponent<ParticleSystem> ();

				if(!particle.IsAlive()){
					particle.Clear ();
					_game_model.VanishParticleList.Remove (particle.gameObject);
					Destroy (particle.gameObject);
					//Debug.Log ("パーティクル削除");
				}
					
			}

		}


		//目的座標に到着したら
		if(_game_model.GetPointParticleList != null){

			for (int j = 0; j < _game_model.GetPointParticleList.Count; j++) {

				GameObject obj = _game_model.GetPointParticleList [j];

				ParticleSystem particle = obj.GetComponent<ParticleSystem> ();

				if(!particle.IsAlive()){
					particle.Clear ();
					_game_model.GetPointParticleList.Remove (particle.gameObject);
					Destroy (particle.gameObject);
				}
					
			}

		}
			
	}
						
	//既に選択済みかそうでないか
	//選択済み true, 未選択 false
	private bool checkAlreadySetObjectsData(ObjectData check_obj){
	
		foreach (KeyValuePair<string,ObjectData> pair in _game_model.SelectedObjectDataDict) {

			GameObject other_obj = (GameObject)pair.Value.Obj;

			if (other_obj.Equals(check_obj.Obj)) {
				//print ("既に選択済み");
				return true;
			}
				
		}

		//print ("既に選択済みでない");
		return false;

	}
		
	//ライン描画のリセット
	private void ResetLineObjectData(){
		_game_model.SelectedObjectDataDict = new Dictionary<string,ObjectData>();
		_game_model.FirstObjectSelectedCategory = ObjectData.NullCategory;
		_game_model.LastObjectSelected = null;
		//print ("reset");
	}

	//選択中のオブジェクトをハイライトする
	private void HighLightSelectedData(Dictionary<string,ObjectData> _selected_dict){

		int i = 0;

		foreach (ObjectData value in _selected_dict.Values) {
			GameObject obj = (GameObject)value.Obj;
			obj.GetComponent<Renderer> ().material.color = Color.white;
			i += 1;
		}
			
	}

	//選択中のオブジェクトをハイライトリセット元の色に戻す
	private void ResetHighLightSelectedData(Dictionary<string, ObjectData> _selected_dict){

		int i = 0;

		foreach (ObjectData value in _selected_dict.Values) {
			GameObject obj = (GameObject)value.Obj;
			SetColor (value.Category, obj);
			i += 1;
		}
			
	}


//	private GameObject line_particle_obj;
//	private ParticleSystem line_particle;

	//マウスをドラッグ中なら近くのオブジェクト同時をつなぐ線の描画処理を継続
	private void DrawLine(Dictionary<string,ObjectData> _selected_dict){

//		if (line_particle == null) {
//			line_particle_obj = (GameObject)Instantiate(Resources.Load("Prefabs/ParticleLine"),new Vector3(),Quaternion.identity);
//			line_particle = line_particle_obj.GetComponent<ParticleSystem> ();
//			line_particle.Stop ();
//		}
	
		LineRenderer line = GameObject.Find ("LineContainer").GetComponent<LineRenderer>();
		line.sortingOrder = 10;
		line.SetWidth (0.1f, 0.1f);
		line.SetVertexCount (_selected_dict.Count);

		//ラインの頂点数のカウント
		int i = 0;
		//順番に配列が代入されると仮定。
		foreach (ObjectData value  in _selected_dict.Values) {
			line.SetPosition (i,value.Obj.transform.position);
			i += 1;
		}


	
	}
		
}
	