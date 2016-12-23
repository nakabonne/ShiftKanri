using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShiftConfigUIManager : MonoBehaviour {


	// Update is called once per frame
	void Update () {
		
	}
	//カレンダーシーンへ遷移
	public void BackCalendar()
	{
		MySceneManager.Instance.GoCalendar ();
	}
}
