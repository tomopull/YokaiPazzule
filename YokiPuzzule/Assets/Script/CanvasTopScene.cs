using UnityEngine;
using System.Collections;

public class CanvasTopScene : MonoBehaviour {


	private TopSceneModel _top_scene_model;
	private GameModel _game_model;

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

	}

	private void initRulePage (){

	}


	private void initMorePage (){

	}


	// Update is called once per frame
	void Update () {



	}


}
