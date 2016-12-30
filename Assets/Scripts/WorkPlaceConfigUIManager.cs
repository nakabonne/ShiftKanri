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
		//入力フォームを非表示に
		inputForm.SetActive (false);

		//テスト
		inputmanager = inputManagerObj.GetComponent<WorkPlaceInputManager>();
	}
	void Update()
	{
		testName.text = inputmanager.inputtingName + "がバイト先として保存中";
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
