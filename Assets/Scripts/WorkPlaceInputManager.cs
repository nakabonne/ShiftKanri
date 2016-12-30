using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//入力された値を一時的に管理するクラス
public class WorkPlaceInputManager : MonoBehaviour {

	//入力中のバイト先名前
	string inputtingName;

	//名前入力中に呼ばれる
	public void WorkPlacename(string name)
	{
		inputtingName = name;
	}

	//時給入力中に呼ばれる




	void Update()
	{
		//Debug.Log (inputting);
		Debug.Log (inputtingName);
	}
}
