using UnityEngine;
using System.Collections;

public class ObjectManager : MonoBehaviour {

	private static ObjectManager instance = null;

	public static ObjectManager Instance {
		get {	
			return ObjectManager.instance;	
		}
	}




}
