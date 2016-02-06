using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;

public class CanvasTopScene : MonoBehaviour {


	private TopSceneModel _top_scene_model;
	private GameModel _game_model;
	private UIManager uiManager;

	void Awake(){

	}

	// Use this for initialization
	void Start () {
		InitModel();
		InitInterface();
	}

	//初期化
	private void InitModel(){
		_game_model = GameModel.Instance;
		_top_scene_model = TopSceneModel.Instance;
		this.uiManager = GameObject.Find ("UIManager").GetComponent<UIManager> ();
	}


	//インターフェイス初期化
	private void InitInterface(){
		_top_scene_model.CanvasTopScene = Util.InstantiateUtil (_game_model, "CanvasTopScene", new Vector3 (183.5f, 326.5f, 0), Quaternion.identity);
		ChangePage(0);
	}
		
	/// <summary>
	/// 画面の切り替え
	/// </summary>
	/// <param name="scene_id">Scene_id.</param>
	public void ChangePage(int page_id){

		switch(page_id){

		case 0:
			initStartPage ();
			break;

		case 1:
			initRulePage ();
			break;

		case 2:
			initMorePage ();
			break;

		}


	}


	private void initStartPage(){

		//タイトルテキスト
		//_top_scene_model.CanvasTopScene.gameObject.
		Text title_text = Util.FindTextComponentUtil ("/CanvasTopScene/TextTitle");
		title_text.enabled = true;

		//ルールテキスト
		Text rule_text = Util.FindTextComponentUtil ("/CanvasTopScene/TextRule");
		rule_text.enabled = false;

		//メニュー
		GameObject menu = Util.FindGameObjectUtil ("/CanvasTopScene/ImageButtonMenu");

		//スタートボタン
		Button start_button = Util.FindButtonComponentUtil ("/CanvasTopScene/ImageButtonMenu/UIStartButton");

		//ルールボタン
		Button rule_button = Util.FindButtonComponentUtil ("/CanvasTopScene/ImageButtonMenu/UIRuleButton");
		this.uiManager.OnClick += ClickRuleButtonHandler;

		//モアボタン
		Button more_button = Util.FindButtonComponentUtil ("/CanvasTopScene/ImageButtonMenu/UIMoreButton");


	}

	public void ClickRuleButtonHandler(object sender,EventArgs args){
		Debug.Log ("click rule button");

	}
	private void initRulePage (){

	}


	private void initMorePage (){

	}


	// Update is called once per frame
	void Update () {



	}


}
