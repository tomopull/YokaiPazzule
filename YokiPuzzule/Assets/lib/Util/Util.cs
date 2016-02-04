using UnityEngine;
using System.Collections;
using LitJson;
using UnityEngine.UI;

public class Util : MonoBehaviour {

//	public struct ComponentType{
//		public string TEXT = "text_componet";
//		public string IMAGE = "image_component";
//	}

	void Shuffle (int[] deck) {
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
	/// テキストコンポネーントを取得
	/// </summary>
	/// <returns>The text component.</returns>
	/// <param name="str">String.</param>
	static public Text FindTextComponent(string str){
		Text return_str = GameObject.Find (str).GetComponent<Text> ();
		return return_str;
	}
		
	/// <summary>
	/// リソースのprefabから複製
	/// </summary>
	static public GameObject InstantiateUtil(GameModel _game_model, string resource_path,Vector3 default_position,Quaternion default_quaernion){
		GameObject obj = (GameObject)Instantiate(Resources.Load(_game_model.PrefabResourcePath + resource_path),default_position ,default_quaernion);
		return obj;
	}


		
}
