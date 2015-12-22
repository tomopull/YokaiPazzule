using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;
using LitJson;

public class GameModel : MonoBehaviour {

	private static ulong _uniqe_index = 0;

	//トータルのオブジェクトのカウント
	[SerializeField]
	private int total_object_count = 0;
	public int TotalObjectCount
	{
		get { return this.total_object_count; } 
		set { this.total_object_count = value; }
	}
		
	//ゲームタイム
	[SerializeField]
	private float game_time = 120.0f;
	public float GameTime
	{
	    get { return this.game_time; } 
	    set { this.game_time = value; }
	}

	//トータル得点
	[SerializeField]
	private int total_point = 0;
	public int TotalPoint
	{
		get { return this.total_point; } 
		set { this.total_point = value; }
	}

	//オリジナルjson data
	[SerializeField]
	private JsonData original_json_data;
	public JsonData OriginalJsonData
	{
		get { return this.original_json_data; } 
		set { this.original_json_data = value; }
	}

	//行数
	[SerializeField]
	private int rowCount = 0;
	public int RowCount
	{
		get { return this.rowCount; } 
		set { this.rowCount = value; }
	}

	//列数
	[SerializeField]
	private int columnCount = 0;
	public int ColumnCount
	{
		get { return this.columnCount; } 
		set { this.columnCount = value; }
	}

	//ゲームオブジェクトデータ
	[SerializeField]
	private Dictionary<string,ObjectData> object_data_dict;
	public Dictionary<string,ObjectData> ObjectDataDict
	{
		get { return this.object_data_dict;} 
		set { this.object_data_dict = value;}
	}

	//今インタラクティブかどうか
	[SerializeField]
	private bool isInteractive = false;
	public bool IsInteractive
	{
		get { return this.isInteractive; } 
		set { this.isInteractive = value; }
	}

	//ネイティブデバイスタッチ
	[SerializeField]
	private Touch deviceTouch;
	public Touch DeviceTouch
	{
		get { return this.deviceTouch; } 
		set { this.deviceTouch = value; }
	}

	//スワイプの距離
	[SerializeField]
	private float swipeTime;
	public float SwipeTime
	{
		get { return this.swipeTime; } 
		set { this.swipeTime = value; }
	}

	//スワイプ時間
	[SerializeField]
	private float swipeDistance;
	public float SwipeDistance
	{
		get { return this.swipeDistance; } 
		set { this.swipeDistance = value; }
	}

	//今ボタンが押された状態かどうか
	[SerializeField]
	private bool isButtonDown = false;
	public bool IsButtonDown
	{
		get { return this.isButtonDown; } 
		set { this.isButtonDown = value; }
	}

	//一番最初にタップしたオブジェクトの種類
	//以後この種類のオブジェクトだったら線がつながる
	[SerializeField]
	private int first_object_selected_category;
	public int FirstObjectSelectedCategory
	{
		get { return this.first_object_selected_category; } 
		set { this.first_object_selected_category = value; }
	}


	//オブジェクトをタッチできる距離
	[SerializeField]
	private float touch_distance = 0.7f;
	public float TouchDistance
	{
		get { return this.touch_distance; } 
		set { this.touch_distance = value; }
	}


	//最後の一つ前に選択されたオブジェクト
	[SerializeField]
	private ObjectData last_but_one_object_selected;
	public ObjectData LastButOneObjectSelected
	{
	    get { return this.last_but_one_object_selected; } 
	    set { this.last_but_one_object_selected = value; }
	}

	//最後に選択されたオブジェクト
	[SerializeField]
	private ObjectData last_object_selected;
	public ObjectData LastObjectSelected
	{
		get { return this.last_object_selected; } 
		set { this.last_object_selected = value; }
	}

	//一番ポインターから近いデータ
	[SerializeField]
	private ObjectData nearest_obj;
	public ObjectData NearestObj
	{
		get { return this.nearest_obj; } 
		set { this.nearest_obj = value; }
	}

	//一番近いポインターとの距離
	[SerializeField]
	private float nearest_dist;
	public float NearestDist
	{
		get { return this.NearestDist; } 
		set { this.NearestDist = value; }
	}

	//線でつなげたマウスの位置から最も近い位置にあるオブジェクトのリスト
	[SerializeField]
	private Dictionary<string,ObjectData> selected_object_data_dict;
	public Dictionary<string,ObjectData>SelectedObjectDataDict
	{
		get { return this.selected_object_data_dict; } 
		set { this.selected_object_data_dict = value; }
	}

	//追加のオブジェクトが足される数
	[SerializeField]
	private int minimum_number_of_object_data = 40;
	public int MinimumNumberOfObjectData
	{
		get { return this.minimum_number_of_object_data; } 
		set { this.minimum_number_of_object_data = value; }
	}


	//ユニークな整数の取得
	public static ulong GetUniqueIndex(){
		_uniqe_index += 1;
		//print (_uniqe_index);
		return _uniqe_index;
	}

	//シンプルタッチストラクト
	public struct SimpleTouch{
		public Vector2 StartTouchLocation;
		public Vector2 CurrentTouchLocation;
		public DateTime StartTime;
		public TouchPhase Phase;
	}
		
	//ローカルのjsonのパス
	public static string Json_Path = "/Json/data.json";

	private static GameModel instance = null;
	public static GameModel Instance {
		get {	
				return GameModel.instance;	
			}
	}
		
	//初期化
	public void Init(){
		total_point = rowCount = columnCount = 0;
		_uniqe_index = 0;
		//game_timer = new Timer ();
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






}
	