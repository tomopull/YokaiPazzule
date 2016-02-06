using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;

/**
 * UI管理。
 */
public class UIManager : MonoBehaviour {
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
		// イベント実行
		if (this.OnClick != null) this.OnClick(this, EventArgs.Empty);
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
