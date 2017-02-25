using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using UnityEngine.UI;

/// <summary>
/// [バイト先名、開始日時時間、終了日時時間、発生する給料]をセットで保存するのが目的
/// </summary>

public class ShiftConfigInputManager : MonoBehaviour {
	DateTime day = new DateTime(2017, 1, 1); //カレンダーから渡された日付オブジェクト（仮で2017年1月1日を置いている）
	public string workPlaceName;

	// Use this for initialization
	void Start () {
		
	}

	//バイト先の名前を取得する
	public void ChangeWorkPlaceName(Dropdown dropdown)
	{
		int workPlaceNumber = dropdown.value - 1; //ドロップダウンから受け取る数値を受け取る
		Debug.Log(workPlaceNumber);
		Debug.Log (PlayerPrefsUtility.LoadList<string> ("name") [workPlaceNumber]);
		workPlaceName = PlayerPrefsUtility.LoadList<string> ("name")[workPlaceNumber]; //バイト先名リストから対応するナンバーの名前を取得する
	}
	

}
