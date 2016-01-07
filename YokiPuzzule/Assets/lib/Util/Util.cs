using UnityEngine;
using System.Collections;
using LitJson;

public class Util : MonoBehaviour {

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


		
}
