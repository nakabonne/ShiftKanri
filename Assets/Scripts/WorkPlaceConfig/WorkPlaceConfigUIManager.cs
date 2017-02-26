using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class WorkPlaceConfigUIManager : MonoBehaviour {

	public GameObject inputForm;
	public GameObject updateForm;
	public Text testName;
	public GameObject inputManagerObj;
	WorkPlaceInputManager inputmanager;
	public Transform buttonList; //バイト先のボタンを縦に並べる時に親となるオブジェクト
	public GameObject workNameButton;
	void Start()
	{
		inputForm.SetActive (false); //入力フォームを非表示に
		updateForm.SetActive(false);//更新フォームを非表示に
		inputmanager = inputManagerObj.GetComponent<WorkPlaceInputManager>();//テスト

		WorkPlaceManager.Instance.ReadNames (); //保存されているバイト先の名前を読み込む

		DisplayWorkPlaceButton ();
	}
	//バイト先の設定変更するボタン生成
	public void DisplayWorkPlaceButton()
	{
		Debug.Log ("ボタン生成開始");
		var workplaces = PlayerPrefsUtility.LoadList<WorkPlace> ("workPlaces"); //登録された全バイト先の取得
		foreach (WorkPlace workPlace in workplaces) 
		{
			//Debug.Log (WorkPlaceManager.Instance.workPlaceNames[i]);
			GameObject listButton = Instantiate(workNameButton) as GameObject; //一つずつボタン生成
			listButton.transform.SetParent (buttonList,false); //Listオブジェクトの子にする
			listButton.transform.FindChild ("Text").GetComponent<Text> ().text = workPlace.name; //表示テキストをそれぞれの名前にする
			listButton.GetComponent<Button> ().onClick.AddListener (() => inputmanager.Set (workPlace.name));//ボタンに機能を与える
		
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

	//更新フォームを非表示にする
	public void NotUpdateFormDisplay()
	{
		updateForm.SetActive (false);
	}

	//================以下デバッグ用===================
	//すべてのセーブデータを削除
	public void PlayerPrefsDelete()
	{
		PlayerPrefs.DeleteAll ();
		MySceneManager.Instance.GoWorkConfig ();
	}
}
