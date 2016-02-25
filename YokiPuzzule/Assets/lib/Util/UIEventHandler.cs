using UnityEngine;
using UnityEngine.EventSystems;
using System.Collections;

public class UIEventHandler : MonoBehaviour {

	private static UIEventHandler instance = null;

	public void OnPointerClick(BaseEventData eventData){
		Debug.Log (this.ToString ());
	}

	public static UIEventHandler Instance {
		get {	
			return UIEventHandler.instance;	
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