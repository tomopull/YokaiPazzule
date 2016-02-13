using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class ParticleManager : MonoBehaviour {

	private static ParticleManager instance = null;

	public static ParticleManager Instance {
		get {	
			return ParticleManager.instance;	
		}
	}


	/// <summary>
	/// 再生終了して不要になった
	/// パーティクルの削除
	/// </summary>
	public void RemoveParticleData(){

	}

	public void AddParticleList(List<GameObject> _object_list, GameModel _model){

	}

		
}
