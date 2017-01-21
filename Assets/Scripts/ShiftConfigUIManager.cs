using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ShiftConfigUIManager : MonoBehaviour {

	public Dropdown workChoce;
	void Start()
	{
		MakeWorkChoices ();
	}
	// Update is called once per frame
	void Update () {
		
	}
	//カレンダーシーンへ遷移
	public void BackCalendar()
	{
		MySceneManager.Instance.GoCalendar ();
	}

	//バイト先の選択肢を動的に生成
	public void MakeWorkChoices()
	{
		for (int i = 0; i<PlayerPrefsUtility.LoadList<string> ("name").Count; i++) 
		{
			workChoce.options.Add (new Dropdown.OptionData{text = PlayerPrefsUtility.LoadList<string> ("name")[i]}); //一つずつボタン生成
			workChoce.RefreshShownValue();
		}
	}
}
