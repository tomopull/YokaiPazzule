﻿using UnityEngine;
using System.Collections;

public class ObjectData : MonoBehaviour {


	[SerializeField]
	private int _point;


	//カテゴリーヌル
	public static int NullCategory = 99;


	//取得ポイント
	public int Point
	{
	    get { return this._point; } 
	    set { this._point = value; }
	}

	//種類
	[SerializeField]
	private int _category = ObjectData.NullCategory;
	public int Category
	{
		get { return this._category; } 
		set { this._category = value; }
	}

	[SerializeField]
	private GameObject obj;
	public GameObject Obj
	{
	    get { return this.obj; } 
	    set { this.obj = value; }
	}

}
