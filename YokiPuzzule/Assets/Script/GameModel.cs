﻿using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;
using LitJson;

public class GameModel : MonoBehaviour {


	private static GameModel instance = null;

	private static ulong _uniqe_index = 0;

	//ユニークな整数の取得
	public static ulong GetUniqueIndex(){
		_uniqe_index += 1;
		//print (_uniqe_index);
		return _uniqe_index;
	}


	//オリジナルjson data
	private JsonData original_json_data;

	//トータル得点
	private int total_point = 0;

	//行数
	private int rowCount = 0;

	//列数
	private int columnCount = 0;

	//ゲームオブジェクトデータ
	private Dictionary<string,ObjectData> object_data_dict;

	//今インタラクティブかどうか
	private bool isInteractive = false;

	//今ボタンが押された状態かどうか
	private bool isButtonDown = false;

	//ネイティブデバイスタッチ
	private Touch deviceTouch;

	//スワイプの距離
	private float swipeTime;

	//スワイプ時間
	private float swipeDistance;

	//一番最初にタップしたオブジェクトの種類
	//以後この種類のオブジェクトだったら線がつながる
	private int first_object_selected_category;

	//最後に選択されたオブジェクト
	private ObjectData last_object_selected;

	//一番ポインターから近いデータ
	private ObjectData nearest_obj;

	//一番近いポインターとの距離
	private float nearest_dist;

	//オブジェクトをタッチできる距離
	private float touch_distance = 0.7f;

	//追加のオブジェクトが足される数
	private int minimum_number_of_object_data = 40;

	//線でつなげたマウスの位置から最も近い位置にあるオブジェクトのリスト
	private Dictionary<string,ObjectData> selected_object_data_dict;

	//シンプルタッチストラクト
	public struct SimpleTouch{
		public Vector2 StartTouchLocation;
		public Vector2 CurrentTouchLocation;
		public DateTime StartTime;
		public TouchPhase Phase;
	}

	//ローカルのjsonのパス
	public static string Json_Path = "/Json/data.json";

	public static GameModel Instance {
		get {	
				return GameModel.instance;	
			}
	}
		

	//初期化
	public void Init(){
		total_point = rowCount = columnCount = 0;
		_uniqe_index = 0;
	}

	void Awake()
	{
		if( instance == null)

		{

			instance = this;

		}else{

			Destroy( this );

		}

	}

	[SerializeField]
	public int TotalPoint
	{
		get { return this.total_point; } 
		set { this.total_point = value; }
	}

	[SerializeField]
	public JsonData OriginalJsonData
	{
		get { return this.original_json_data; } 
		set { this.original_json_data = value; }
	}
		
	[SerializeField]
	public int RowCount
	{
		get { return this.rowCount; } 
		set { this.rowCount = value; }
	}
		
	[SerializeField]
	public int ColumnCount
	{
		get { return this.columnCount; } 
		set { this.columnCount = value; }
	}

	[SerializeField]
	public Dictionary<string,ObjectData> ObjectDataDict
	{
		get { return this.object_data_dict;} 
		set { this.object_data_dict = value;}
	}

	[SerializeField]
	public bool IsInteractive
	{
		get { return this.isInteractive; } 
		set { this.isInteractive = value; }
	}

	[SerializeField]
	public Touch DeviceTouch
	{
		get { return this.deviceTouch; } 
		set { this.deviceTouch = value; }
	}

	[SerializeField]
	public float SwipeTime
	{
		get { return this.swipeTime; } 
		set { this.swipeTime = value; }
	}

	[SerializeField]
	public float SwipeDistance
	{
		get { return this.swipeDistance; } 
		set { this.swipeDistance = value; }
	}

	[SerializeField]
	public bool IsButtonDown
	{
		get { return this.isButtonDown; } 
		set { this.isButtonDown = value; }
	}

	[SerializeField]
	public int FirstObjectSelectedCategory
	{
		get { return this.first_object_selected_category; } 
		set { this.first_object_selected_category = value; }
	}


	[SerializeField]
	public float TouchDistance
	{
		get { return this.touch_distance; } 
		set { this.touch_distance = value; }
	}

	[SerializeField]
	public ObjectData LastObjectSelected
	{
		get { return this.last_object_selected; } 
		set { this.last_object_selected = value; }
	}

	[SerializeField]
	public ObjectData NearestObj
	{
		get { return this.nearest_obj; } 
		set { this.nearest_obj = value; }
	}

	[SerializeField]
	public float NearestDist
	{
	    get { return this.NearestDist; } 
	    set { this.NearestDist = value; }
	}

	[SerializeField]
	public Dictionary<string,ObjectData>SelectedObjectDataDict
	{
		get { return this.selected_object_data_dict; } 
		set { this.selected_object_data_dict = value; }
	}

	[SerializeField]
	public int MinimumNumberOfObjectData
	{
		get { return this.minimum_number_of_object_data; } 
		set { this.minimum_number_of_object_data = value; }
	}




}
	