using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SalaryUIManager : MonoBehaviour {

	public Text thisYearSalary;


	void Update () {
		ThisYearSalary ();
	}

	//今年の給料を表示する
	void ThisYearSalary()
	{
		thisYearSalary.text = SalaryManager.Instance.this_year_salary.ToString () + "円";
	}

	//バイト先設定画面へ移動
	public void WorkConfig()
	{
		MySceneManager.Instance.GoWorkConfig ();
	}
	//カレンダーシーンへ遷移
	public void GoCalendar()
	{
		MySceneManager.Instance.GoCalendar ();
	}
}
