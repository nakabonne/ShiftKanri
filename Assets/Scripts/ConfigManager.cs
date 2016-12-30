using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ConfigManager : MonoBehaviour {
	//バイト先設定シーンへ
	public void GoWorkPlace()
	{
		MySceneManager.Instance.GoWorkConfig ();
	}
}
