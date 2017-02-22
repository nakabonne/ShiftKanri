using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CalendarUIManager : MonoBehaviour {


	
	// Update is called once per frame
	void Update () {
		
	}
	//給料計算シーンへ遷移
	public void GoSalary()
	{
		MySceneManager.Instance.GoSalary ();
	}
	//シフト管理シーンへ遷移
	public void GoShiftConfig()
	{
		MySceneManager.Instance.GoShiftConfig ();
	}
}
