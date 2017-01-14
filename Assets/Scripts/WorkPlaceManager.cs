using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//バイト先情報を格納するクラス
public class WorkPlaceManager : SingletonMonoBehaviour<WorkPlaceManager> {

	//保存したバイト先の名前
	public List<string> workPlaceNames = new List<string>();

	void Start()
	{
		ReadNames ();
		//テスト
		Debug.Log(PlayerPrefsX.GetIntArray("cuebic")[0]);
	}
	//保存された名前を読み込み
	void ReadNames()
	{
		workPlaceNames = PlayerPrefsUtility.LoadList<string> ("name");
	}
	//バイト先名を保存
	public void SaveNames(string name)
	{
		Debug.Log ("バイト先名保存");
		workPlaceNames.Add (name);
		PlayerPrefsUtility.SaveList<string> ("name", workPlaceNames);
	}
}
