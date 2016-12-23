using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MySceneManager : SingletonMonoBehaviour<MySceneManager> {
	//給料計算シーン
	public void GoSalary()
	{
		SceneManager.LoadScene ("Salary");
	}
	//カレンダーシーン
	public void GoCalendar()
	{
		SceneManager.LoadScene ("Calendar");
	}
	//バイト先設定シーン
	public void GoWorkConfig()
	{
		SceneManager.LoadScene ("WorkPlaceConfig");
	}
	//シフト設定シーン
	public void GoShiftConfig()
	{
		SceneManager.LoadScene ("ShiftConfig");
	}
}
