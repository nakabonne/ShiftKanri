using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class WorkPlaceConfigUIManager : MonoBehaviour {

	public GameObject inputForm;
	public Text testName;
	public GameObject inputManagerObj;
	WorkPlaceInputManager inputmanager;

	public Transform buttonList; //バイト先のボタンを縦に並べる時に親となるオブジェクト
	public GameObject workNameButton;
	void Start()
	{
		inputForm.SetActive (false); //入力フォームを非表示に

		inputmanager = inputManagerObj.GetComponent<WorkPlaceInputManager>();//テスト

		WorkPlaceManager.Instance.ReadNames (); //保存されているバイト先の名前を読み込む

		DisplayWorkPlaceButton ();
	}
	//バイト先の設定変更するボタン生成
	public void DisplayWorkPlaceButton()
	{
		Debug.Log ("ボタン生成");
		for (int i = 0; i<WorkPlaceManager.Instance.workPlaceNames.Count; i++) 
		{
			//Debug.Log (WorkPlaceManager.Instance.workPlaceNames[i]);
			GameObject listButton = Instantiate(workNameButton) as GameObject; //一つずつボタン生成
			listButton.transform.SetParent (buttonList,false); //Listオブジェクトの子にする
			listButton.transform.FindChild ("Text").GetComponent<Text> ().text = WorkPlaceManager.Instance.workPlaceNames [i]; //表示テキストをそれぞれの名前にする
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

	//================以下デバッグ用===================
	//すべてのセーブデータを削除
	public void PlayerPrefsDelete()
	{
		PlayerPrefs.DeleteAll ();
		MySceneManager.Instance.GoWorkConfig ();
	}
}
