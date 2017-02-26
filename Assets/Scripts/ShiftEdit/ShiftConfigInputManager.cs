using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using UnityEngine.UI;

/// <summary>
/// [バイト先名、開始日時時間、終了日時時間、発生する給料]をセットで保存するのが目的
/// </summary>

public class ShiftConfigInputManager : MonoBehaviour {
	string day = "2017/01/01 "; //カレンダーから渡された日付オブジェクト（仮で2017年1月1日を置いている）
	string startTimeString; //フォームから受け取る開始時間
	string endTimeString; //フォームから受け取る終了時間
	string breakTimeString; //フォームから受け取る休憩時間

	//ーーーーーーー保存するーーーーーーーーーーーー
	string workPlaceName;//バイト先の名前
	DateTime startTime; //保存する開始時間
	DateTime endTime; //保存する終了時間
	TimeSpan workingHours; //保存する勤務時間
	//ーーーーーーーーーーーーーーーーーーーーーー

	int breakTime; //休憩時間

	// Use this for initialization
	void Start () {
		
	}

	//バイト先の名前を取得する
	public void SetWorkPlaceName(Dropdown dropdown)
	{
		int workPlaceNumber = dropdown.value - 1; //ドロップダウンから受け取る数値を受け取る
		Debug.Log(workPlaceNumber);
		Debug.Log (PlayerPrefsUtility.LoadList<string> ("name") [workPlaceNumber]);
		workPlaceName = PlayerPrefsUtility.LoadList<string> ("name")[workPlaceNumber]; //バイト先名リストから対応するナンバーの名前を取得する
	}

	//入力中の開始時刻を代入
	public void SetStartTime(string time)
	{
		startTimeString = time;
	}

	//入力中の狩猟時刻を代入
	public void SetEndTime(string time)
	{
		endTimeString = time;
	}

	public void SetBreakTime(string time)
	{
		breakTimeString = time;
	}
	//==============ここでシフト情報を保存====================
	public void Save()
	{
		startTime = DateTime.Parse (day + startTimeString); //文字列を日付オブジェクトに変換
		endTime = DateTime.Parse (day + endTimeString); //同上
		breakTime = int.Parse(breakTimeString); //同上
		endTime = endTime.AddMinutes (-breakTime); //実働時間から休憩時間を引く
		workingHours = endTime - startTime; //実働時間を決定
		Debug.Log(workingHours);

	}

}
