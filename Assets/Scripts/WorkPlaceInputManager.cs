using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

//入力された値を一時的に管理するクラス
public class WorkPlaceInputManager : MonoBehaviour {

	//バイト先名を入力するinputfield
	public InputField nameField;
	//時給を入力するinputfield
	public InputField salaryField;
	//入力中のバイト先名前
	public string workPlaceName;
	//入力中の給料の文字列
	public string salaryString;
	//時給
	public int salary;
	//給料日
	public int payDay = 1;
	//締め日
	public int cutOffDate = 1 ;
	//時給、給料日、締め日の配列
	public int[] information = new int[3];

	public GameObject inputForm;
	void Start()
	{
		//uiMana = uiManaObj.GetComponent<WorkPlaceConfigUIManager> ();
	}
	//保存済みの値をデフォルトでセットする（保存済みデータの編集のみ）
	public void Set(string name)
	{
		Debug.Log ("セット開始");
		information = PlayerPrefsX.GetIntArray (name);
		nameField.text = name; //バイト先名のデフォルト値をセット
		salaryField.text = information[0].ToString(); //給料のデフォルト値をセット 
		inputForm.SetActive(true);
	}

	//入力中の名前を代入
	public void WorkPlacename(string name)
	{
		workPlaceName = name;
	}

	//入力中の時給を代入
	public void Salary(string name)
	{
		salaryString = name;
	}

	//給料日を代入
	public void ChangePayDay(Dropdown dropdown)
	{
		payDay = dropdown.value + 1;
	}

	//締め日を代入
	public void ChangeCutOffDate(Dropdown dropdown)
	{
		cutOffDate = dropdown.value + 1;
	}



	//==========ここではバイト先の詳細情報をバイト先の名前である、変数workPlaceNameをキーとして、「時給」「給料日」「締め日」を配列で保存している

	//値をセットにして保存（新規登録時のみ）
	public void Save()
	{
		Debug.Log("バイト先保存");

		salary = int.Parse (salaryString); //string型の給料をint型に
		information = new int []{salary,payDay,cutOffDate}; //給料、給料日、締め日を配列に
		PlayerPrefsX.SetIntArray (workPlaceName, information); //バイト先名をキーにして各情報を保存
		inputForm.SetActive(false);

		WorkPlaceManager.Instance.SaveNames (workPlaceName); //バイト先名をリストに追加
		MySceneManager.Instance.GoWorkConfig();//新たにボタンを追加するためにシーンを更新する
	}




}
