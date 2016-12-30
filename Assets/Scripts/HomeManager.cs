using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HomeManager : MonoBehaviour {
	//カレンダーシーンへ
	public void GoCalendar()
	{
		MySceneManager.Instance.GoCalendar ();
	}
	//給与確認シーンへ
	public void GoSalary()
	{
		MySceneManager.Instance.GoSalary ();
	}
	//設定シーンへ
	public void GoConfig()
	{
		MySceneManager.Instance.GoConfig ();
	}
}
