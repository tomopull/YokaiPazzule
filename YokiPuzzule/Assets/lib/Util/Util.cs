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
		
}
