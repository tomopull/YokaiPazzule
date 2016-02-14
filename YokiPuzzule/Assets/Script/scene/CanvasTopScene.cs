using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;

public class CanvasTopScene : MonoBehaviour {


	private TopSceneModel _top_scene_model;
	private GameModel _game_model;
	private UIManager _ui_manager;

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
		_ui_manager = UIManager.Instance.GetComponent<UIManager> ();
	}


	//インターフェイス初期化
	private void InitInterface(){
		_top_scene_model.CanvasTopScene = Util.InstantiateUtil (_game_model, "CanvasTopScene", new Vector3 (183.5f, 326.5f, 0), Quaternion.identity);
		InitPage();
		ChangePage(0);
	}
		
	/// <summary>
	/// 画面の切り替え
	/// </summary>
	/// <param name="scene_id">Scene_id.</param>
	public void ChangePage(int page_id){

		switch(page_id){

		case 0:
			GotoStartPage ();
			break;

		case 1:
			GotoRulePage ();
			break;

		case 2:
			GotoMorePage ();
			break;

		}

	}
		
	//タイトルテキスト
	private Text _title_text;

	//ルールテキスト
	private Text _rule_text;

	//モアーテキスト
	private Text _more_text;

	//メニュー
	private GameObject _menu;

	//スタートボタン
	private Button _start_button;

	//ルールボタン
	private Button _rule_button;

	//モアボタン
	private Button _more_button;

	/// <summary>
	///ページのすべての要素の
	/// </summary>
	private void InitPage(){

		_title_text = Util.FindTextComponentUtil ("/CanvasTopScene/TextTitle");
		_rule_text = Util.FindTextComponentUtil ("/CanvasTopScene/TextRule");
		_more_text = Util.FindTextComponentUtil ("/CanvasTopScene/TextMore");

		_menu = Util.FindGameObjectUtil ("/CanvasTopScene/ImageButtonMenu");

		_start_button = Util.FindButtonComponentUtil ("/CanvasTopScene/ImageButtonMenu/UIStartButton");
		_rule_button = Util.FindButtonComponentUtil ("/CanvasTopScene/ImageButtonMenu/UIRuleButton");
		_more_button = Util.FindButtonComponentUtil ("/CanvasTopScene/ImageButtonMenu/UIMoreButton");

	}

	/// <summary>
	/// ゲーム開始
	/// </summary>
	private void StartGame(){
		Application.LoadLevel ("Main");
	}

	private void GotoStartPage(){
		_title_text.enabled = true;
		_rule_text.enabled = false;
		_more_text.enabled = false;

		_rule_button.onClick.RemoveListener (GotoRulePage);
		_more_button.onClick.RemoveListener (GotoMorePage);
		_start_button.onClick.RemoveListener (StartGame);

		_rule_button.onClick.AddListener (GotoRulePage);
		_more_button.onClick.AddListener (GotoMorePage);
		_start_button.onClick.AddListener (StartGame);
	}
		
	private void GotoRulePage (){
		_rule_text.enabled = true;
		_title_text.enabled = false;
		_more_text.enabled = false;

		_rule_button.onClick.RemoveListener (GotoRulePage);
		_more_button.onClick.RemoveListener (GotoMorePage);
		_start_button.onClick.RemoveListener (StartGame);

		_rule_button.onClick.RemoveListener (GotoRulePage);
		_more_button.onClick.AddListener (GotoMorePage);
		_start_button.onClick.AddListener (StartGame);
	}
		

	private void GotoMorePage (){
		_rule_text.enabled = false;
		_title_text.enabled = false;
		_more_text.enabled = true;

		_rule_button.onClick.RemoveListener (GotoRulePage);
		_more_button.onClick.RemoveListener (GotoMorePage);
		_start_button.onClick.RemoveListener (StartGame);

		_rule_button.onClick.AddListener (GotoRulePage);
		_more_button.onClick.RemoveListener (GotoMorePage);
		_start_button.onClick.AddListener (StartGame);

	}
		
	// Update is called once per frame
	void Update () {



	}


}
