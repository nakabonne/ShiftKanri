using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class WorkPlaceConfigUIManager : MonoBehaviour {

	public GameObject inputForm;
	public Text testName;
	public GameObject inputManagerObj;
	WorkPlaceInputManager inputmanager;


	void Start()
	{
		inputForm.SetActive (false); //入力フォームを非表示に

		inputmanager = inputManagerObj.GetComponent<WorkPlaceInputManager>();//テスト



		DisplayWorkPlaceButton ();
	}
	//バイト先の設定変更するボタン生成
	void DisplayWorkPlaceButton()
	{
		Debug.Log ("ボタン生成");
		foreach (string a in WorkPlaceManager.Instance.workPlaceNames) 
		{
			Debug.Log (a);
		}
	}
	void Update()
	{
		testName.text = inputmanager.workPlaceName +  "がバイト先として保存中";
	}

	//戻る
	public void Back()
	{
		MySceneManager.Instance.GoConfig ();
	}

	//入力フォームを表示させる
	public void FormDisplay()
	{
		inputForm.SetActive (true);
	}

	//入力フォームを非表示にする
	public void NotFormDisplay()
	{
		inputForm.SetActive (false);
	}
}
