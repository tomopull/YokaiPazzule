using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;

/**
 * UI管理。
 */
public class UIManager : MonoBehaviour {
	/*	*
	 * メソッドを直接コールするオブジェクト。
	 */
	private List<CallMethodTest> callMethodObjects = new List<CallMethodTest>();

	/*	*
	 * SendMessageイベントを呼ぶオブジェクト。
	 */
	private List<GameObject> sendMesssages = new List<GameObject>();

	/*	*
	 * メソッドをコールするオブジェクト。
	 */
	private List<System.Action> methods = new List<System.Action>();

	/*	*
	 * イベントの用意。
	 */
	public event EventHandler OnClick;

	/*	*
	 * OnGUI.
	 */
	public void OnGUI() {
		if (GUI.Button(new Rect(Screen.width / 2 - 50, Screen.height - 60, 100, 30), "Event")) {
			int count = 0;
			// foreach内での配列の変更はNGのためwhileで行う（イベント先で削除される可能性があるので）
			// メソッドのコール
			while (count < this.callMethodObjects.Count) {
				CallMethodTest callMethodTest = this.callMethodObjects[count];
				if (callMethodTest) callMethodTest.RotateCube();
				else this.callMethodObjects.Remove(callMethodTest);
				++count;
			}

			// SendMessage
			count = 0;
			while (count < this.sendMesssages.Count) {
				GameObject go = this.sendMesssages[count];
				if (go) go.SendMessage("RotateCube");
				else this.sendMesssages.Remove(go);
				++count;
			}

			// 登録メソッドの呼び出し
			count = 0;
			while (count < this.methods.Count) {
				System.Action method = this.methods[count];
				if (method != null) method();
				else this.methods.Remove(method);
				++count;
			}

			// イベント実行
			if (this.OnClick != null) this.OnClick(this, EventArgs.Empty);

		}

	}

	// ------------------------------

	/*	*
	 * 直接メソッドを呼び出すオブジェクトの追加。
	 */
	public void AddCallMethodObject(CallMethodTest callMethod) {
		this.callMethodObjects.Add(callMethod);
	}

	/*	*
	 * 直接メソッドを呼び出すオブジェクトの削除。
	 */
	public void RemoveCallMethodObject(CallMethodTest callMethod) {
		this.callMethodObjects.Remove(callMethod);
	}

	// ------------------------------

	/*	*
	 * SendMessage用のオブジェクト追加。
	 */
	public void AddSendMessageObject(GameObject obj) {
		this.sendMesssages.Add(obj);
	}

	/*	*
	 * SendMessage用のオブジェクト削除。
	 */
	public void RemoveSendMessageObject(GameObject obj) {
		this.sendMesssages.Remove(obj);
	}

	// ------------------------------

	/*	*
	 * メソッドを呼ぶ用のオブジェクト追加。
	 */
	public void AddMethod(System.Action method) {
		this.methods.Add(method);
	}

	/*	*
	 * メソッドを呼ぶ用のオブジェクト削除。
	 */
	public void RemoveMethod(System.Action method) {
		this.methods.Remove(method);
	}
}
