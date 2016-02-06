using UnityEngine;
using System.Collections;

/**
 * メソッドを呼ぶテスト。
 */
public class CallMethodTest : MonoBehaviour {
	/*	*
	 * UIManager.
	 */
	UIManager uiManager;

	/*	*
	 * Awake.
	 */
	public void Awake() {
		this.uiManager = GameObject.Find("UIManager").GetComponent<UIManager>();
		uiManager.AddCallMethodObject(this);
	}

	/*	*
	 * 回転させ、60度異常になったら削除させる。
	 */
	public void RotateCube() {
		this.transform.Rotate(0, 10, 0);

		if (this.transform.rotation.eulerAngles.y >= 60) {
			this.uiManager.RemoveCallMethodObject(this);
			Destroy(this.gameObject);
		}
	}
}
