using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.Linq;

//入力された値を一時的に管理するクラス
public class WorkPlaceInputManager : MonoBehaviour {

	public GameObject inputForm;
	public GameObject updateForm;
	//バイト先名を入力するinputfield
	public InputField nameField;
	//バイト先編集時のバイト名
	public Text constNameLabel;
	//時給を入力するinputfield
	public InputField salaryFieldUpdate;
	//デフォルトの給料日を表示する
	public Text payDayLabel;
	//デフォルトの締め日を表示する
	public Text cutOffLabel;
	//デフォルトの給与体系を表示する
	public Text paySystemLabel;

	//入力中のバイト先名前
	public string workPlaceName;
	//入力中の給料の文字列
	public string salaryString;
	//給料
	public int salary;
	//給料日
	public int payDay = 1;
	//締め日
	public int cutOffDate = 1;
	//給料体系
	public int paySystem = 0;
	//時給、給料日、締め日の配列
	public int[] information = new int[4];

	List<WorkPlace> workPlaces;


	void Start()
	{
		var workPlace = new WorkPlace()
		{
			name = "cue",
			salary = 1000,
			payDay = 20,
			cutOffDay = 10,
			paySystem = 0
		};
		workPlaces = new List<WorkPlace>(){workPlace};
		Debug.Log (workPlaces[0]);
	}
	//保存済みの値をデフォルトでセットする（保存済みデータの編集時のみ）
	public void Set(string name)
	{
		Debug.Log ("セット開始");
		information = PlayerPrefsX.GetIntArray (name);
		constNameLabel.text = name + "の給料設定";//バイト先の名前を表示
		workPlaceName = name;
		salaryFieldUpdate.text = information[0].ToString(); //給料のデフォルト値をセット 
		payDay = information[1]; //給料日のデフォルト値をセット
		payDayLabel.text = payDay.ToString()+"日";
		cutOffDate = information[2]; //締め日のデフォルト値をセット
		cutOffLabel.text = cutOffDate.ToString()+"日";
		paySystem = information [3]; //給与体系のデフォルト値をセット
		if (information [3] == 0) {
			paySystemLabel.text = "時給";
		} 
		if(information [3] == 1){
			paySystemLabel.text = "日給";
		}
		updateForm.SetActive(true);
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
	//時給か日給かを代入（0なら時給、1なら日給）
	public void DailyOrHourlyWage(Dropdown dropdown)
	{
		paySystem = dropdown.value;
	}


	//==========ここではバイト先の詳細情報を、変数workPlaceName（バイト先の名前）をキーとして、「時給」「給料日」「締め日」を配列で保存している

	//値をセットにして保存（新規登録時のみ）
	public void Save()
	{
		Debug.Log("バイト先保存");
	
		salary = int.Parse (salaryString); //string型の給料をint型に
		//---------バイト先オブジェクトの作成--------

		Debug.Log ("インスタンス作成");
		/*
		if (PlayerPrefsUtility.LoadList<WorkPlace> ("workPlaces") != null)
		{
			workPlaces = PlayerPrefsUtility.LoadList<WorkPlace> ("workPlaces"); //バイト先リストの読み込み
			Debug.Log("aaaaaaaaaaa");
		}*/


		Debug.Log("読み込み");
		Debug.Log (workPlaces);
		workPlaces.Add (new WorkPlace {
			name = workPlaceName,
			salary = salary,
			payDay = payDay,
			cutOffDay = cutOffDate,
			paySystem = paySystem
		});//バイト先の追加
		Debug.Log(workPlaces[1].name);
		PlayerPrefsUtility.SaveList<WorkPlace> ("workPlaces", workPlaces); //新たにバイト先情報を上書きする
		Debug.Log("セーブ");
		Debug.Log("保存されたバイト先は" + workPlaces);




		information = new int []{salary,payDay,cutOffDate,paySystem}; //給料、給料日、締め日、給与体系を配列に
		PlayerPrefsX.SetIntArray (workPlaceName, information); //バイト先名をキーにして各情報を保存
		inputForm.SetActive(false);
		WorkPlaceManager.Instance.SaveNames (workPlaceName); //バイト先名をリストに追加
		MySceneManager.Instance.GoWorkConfig();//新たにボタンを追加するためにシーンを更新する
	}
	//既存のデータを更新
	public void UpdateSave()
	{
		salary = int.Parse (salaryString); //string型の給料をint型に
		information = new int []{salary,payDay,cutOffDate,paySystem}; //給料、給料日、締め日を配列に
		PlayerPrefsX.SetIntArray (workPlaceName, information); //バイト先名をキーにして各情報を保存
		updateForm.SetActive(false);
		MySceneManager.Instance.GoWorkConfig();//新たにボタンを追加するためにシーンを更新する
	}


}
