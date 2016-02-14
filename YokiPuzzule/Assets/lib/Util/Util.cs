using UnityEngine;
using System.Collections;
using LitJson;
using UnityEngine.UI;
static public class Util  {

//	public struct ComponentType{
//		public string TEXT = "text_componet";
//		public string IMAGE = "image_component";
//	}

	static public void Shuffle (int[] deck) {
		for (int i = 0; i < deck.Length; i++) {
			int temp = deck[i];
			int randomIndex = Random.Range(0, deck.Length);
			deck[i] = deck[randomIndex];
			deck[randomIndex] = temp;
		}
	}

	static public void Shuffle (JsonData data ) {
		for (int i = 0; i < data["object_data"].Count; i++) {
			JsonData temp = data["object_data"][i];
			int randomIndex = Random.Range(0, data["object_data"].Count);
			data["object_data"][i] = data["object_data"][randomIndex];
			data["object_data"][randomIndex] = temp;
		}
	}


	//ベースのurlの決定
	static public string GetBaseURL(){

		string base_url = "";

		if (Application.platform == RuntimePlatform.OSXEditor) {
			//OSX Editor
			base_url = "file://" + Application.dataPath + "/StreamingAssets";

		} else if (Application.platform == RuntimePlatform.OSXPlayer) {
			//PC Mac & linux StandAlone
			base_url = "file://" + Application.dataPath + "/StreamingAssets";

		}else if(Application.platform == RuntimePlatform.IPhonePlayer){
			//Ipone
			base_url = "file://" + Application.dataPath + "/Raw";

		} else if(Application.platform == RuntimePlatform.OSXWebPlayer){
			//Web Player
			//絶対パス
			base_url = Application.dataPath;
		}

		return base_url;
	}
		
	/// <summary>
	/// リソースのprefabから複製
	/// </summary>
	static public GameObject InstantiateUtil(GameModel _game_model, string resource_path,Vector3 default_position,Quaternion default_quaernion){
		GameObject obj = (GameObject)GameObject.Instantiate(Resources.Load(_game_model.PrefabResourcePath + resource_path),default_position ,default_quaernion);
		//自動的につく(cloneの文字を除去処理 名称をresource_pathのみにする)
		obj.name = resource_path;
		return obj;
	}


	/// <summary>
	/// テキストコンポネーントを取得
	/// </summary>
	/// <returns>The text component.</returns>
	/// <param name="str">String.</param>
	static public Text FindTextComponentUtil(string str){
		Text return_str = GameObject.Find (str).GetComponent<Text> ();
		return return_str;
	}

	/// <summary>
	/// get text component and set the component's string to selected new text
	/// </summary>
	/// <returns>The text to text component util.</returns>
	/// <param name="_str">_str.</param>
	/// <param name="_new_text">_new_text.</param>
	static public Text SetTextToTextComponentUtil(string _str,Text _new_text){
		_new_text = GameObject.Find (_str).GetComponent<Text> ();
		return _new_text;
	}

	/// <summary>
	/// テキストのストリングを更新
	/// </summary>
	/// <returns>The text string util.</returns>
	static public string UpdateTextStringUtil(Text _text, string _string){
		_text.text = _string;
		return _string;
	}

	/// <summary>
	/// ゲームオブジェクトを取得
	/// </summary>
	/// <returns>The game object util.</returns>
	/// <param name="str">String.</param>
	static public GameObject FindGameObjectUtil(string str){
		GameObject obj = (GameObject)GameObject.Find (str);
		return obj;
	}
		
	/// <summary>
	/// ボタンコンポーネントの
	/// </summary>
	/// <returns>The button component util.</returns>
	static public Button FindButtonComponentUtil(string str){
		Button btn = GameObject.Find (str).GetComponent<Button> ();
		return btn;
	}


		
}
