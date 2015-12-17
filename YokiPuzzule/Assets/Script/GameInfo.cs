using UnityEngine;
using System.Collections;

public class GameInfo : MonoBehaviour {


	private static GameInfo instance = null;


	public void Init(){
	

	}

	public static GameInfo Instance {
		get {	
			return GameInfo.instance;	
		}
	}
		
}
