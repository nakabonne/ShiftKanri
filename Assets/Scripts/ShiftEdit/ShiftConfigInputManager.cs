using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using UnityEngine.UI;
using System.Linq;

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
	float salary; //保存する給料
	//ーーーーーーーーーーーーーーーーーーーーーー

	int breakTime; //休憩時間
	TimeSpan workingHours; //保存する勤務時間


	List<Shift> shifts; //全シフト
	List<WorkPlace> workPlaces = new List<WorkPlace>{}; //全バイト先
	WorkPlace workPlace = new WorkPlace(); //選択したバイト先オブジェクト
	// Use this for initialization
	void Start () {
		if (PlayerPrefs.HasKey ("shifts")) {
			shifts = PlayerPrefsUtility.LoadList<Shift> ("shifts");
		} else {
			shifts = new List<Shift>{};
		}
	}


	//バイト先の名前を取得する
	public void SetWorkPlaceName(Dropdown dropdown)
	{
		workPlaceName = dropdown.captionText.text; //選択したドロップダウンから名前を受け取る
		Debug.Log(workPlaceName);
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

	//受け取った値を整形する
	public void ReadyForSave()
	{
		Format ();

		GetWorkPlace ();

		Calculate ();

		AddShift ();

		Save ();
	}

	//受け取った値を整形する
	void Format()
	{
		startTime = DateTime.Parse (day + startTimeString); //文字列を日付オブジェクトに変換
		endTime = DateTime.Parse (day + endTimeString); //同上
		breakTime = int.Parse(breakTimeString); //同上
		endTime = endTime.AddMinutes (-breakTime); //実働時間から休憩時間を引く
		workingHours = endTime - startTime; //実働時間を決定
		Debug.Log(workingHours.Hours + "時間" + workingHours.Minutes + "分");

	}



	//バイト先オブジェクトの取得
	void GetWorkPlace()
	{
		workPlaces = PlayerPrefsUtility.LoadList<WorkPlace> ("workPlaces");
		//選択したバイト先オブジェクトを取得
		var place = 
			from x in workPlaces
			where x.name == workPlaceName
			select x;
		foreach (WorkPlace w in place) {
			workPlace.name = w.name;
			workPlace.salary = w.salary;
			workPlace.payDay = w.payDay;
			workPlace.cutOffDay = w.cutOffDay;
			workPlace.paySystem = w.paySystem;
		}
	}

	//給与計算
	void Calculate()
	{
		//時給なら
		if (workPlace.paySystem == 0) {
			salary = (float)workingHours.Hours * (float)workPlace.salary + (float)workingHours.Minutes / 60.0f * (float)workPlace.salary;
			Debug.Log (workingHours.Hours + "時間で" + workingHours.Hours * workPlace.salary + "円 " + workingHours.Minutes + "分で" + (float)workingHours.Minutes / 60.0f * (float)workPlace.salary);
		}
		//日給なら
		else if(workPlace.paySystem == 1){
			salary = workPlace.salary;
		}
		Debug.Log("給料は" + (int)salary);

	}

	//シフト追加
	void AddShift()
	{
		shifts.Add (new Shift {
			name = workPlaceName,
			startTime = startTime,
			endTime = endTime,
			breakTime = breakTime,
			salary = (int)salary
		});
	}

	//保存	
	void Save()
	{
		PlayerPrefsUtility.SaveList<Shift> ("shifts", shifts);

		//デバッグ---------------
		foreach (Shift s in shifts) {
			Debug.Log (s.startTime);
		}
		//---------------------
	}

}
