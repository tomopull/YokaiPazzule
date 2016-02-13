using UnityEngine;
using System.Collections;

public class GameObjectManager : MonoBehaviour {

	private static GameObjectManager instance = null;

	public static GameObjectManager Instance {
		get {	
			return GameObjectManager.instance;	
		}
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
