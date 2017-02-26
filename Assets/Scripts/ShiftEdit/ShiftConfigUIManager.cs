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
		foreach (WorkPlace workPlace in PlayerPrefsUtility.LoadList<WorkPlace>("workPlaces"))
		{
			workChoce.options.Add (new Dropdown.OptionData{text = workPlace.name}); //一つずつボタン生成
			workChoce.RefreshShownValue();
		}
	}
}
