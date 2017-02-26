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
	//public int[] information = new int[4];

	List<WorkPlace> workPlaces; //全バイト先

	void Start()
	{
		if (PlayerPrefs.HasKey ("workPlaces")) {
			workPlaces = PlayerPrefsUtility.LoadList<WorkPlace> ("workPlaces");
		} else {
			workPlaces = new List<WorkPlace>{};
		}
	}
	//保存済みの値をデフォルトでセットする（保存済みデータの編集時のみ）
	public void Set(string name)
	{
		Debug.Log ("セット開始");
		//選択したバイト先オブジェクトを取得
		var workPlace = 
			from x in workPlaces
			where x.name == name
			select x;
		foreach (WorkPlace w in workPlace) {
			constNameLabel.text = w.name + "の給料設定";//バイト先の名前を表示
			workPlaceName = w.name;
			salaryFieldUpdate.text = w.salary.ToString(); //給料のデフォルト値をセット 
			payDay = w.payDay; //給料日のデフォルト値をセット
			cutOffDate = w.cutOffDay; //締め日のデフォルト値をセット
			paySystem = w.paySystem; //給与体系のデフォルト値をセット
		}
		payDayLabel.text = payDay.ToString()+"日";
		cutOffLabel.text = cutOffDate.ToString()+"日";

		if (paySystem == 0) {
			paySystemLabel.text = "時給";
		} 
		if(paySystem == 1){
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
		salary = int.Parse (salaryString); //string型の給料をint型に

		//バイト先の追加
		workPlaces.Add (new WorkPlace {
			name = workPlaceName,
			salary = salary,
			payDay = payDay,
			cutOffDay = cutOffDate,
			paySystem = paySystem
		});
		PlayerPrefsUtility.SaveList<WorkPlace> ("workPlaces", workPlaces); //新たにバイト先情報を上書きする

		UpdateScene (inputForm);
	}
	//既存のデータを更新
	public void UpdateSave()
	{
		salary = int.Parse (salaryString); //string型の給料をint型に
		//強引だが要素を更新している--------
		foreach (WorkPlace w in workPlaces) {
			if (w.name == workPlaceName) {
				w.salary = salary;
				w.payDay = payDay;
				w.cutOffDay = cutOffDate;
				w.paySystem = paySystem;
			}
		}
		//---------------------------
		PlayerPrefsUtility.SaveList<WorkPlace> ("workPlaces", workPlaces); //新たにバイト先情報を上書きする
		UpdateScene(updateForm);
	}

	//シーンを更新する
	void UpdateScene(GameObject form)
	{
		form.SetActive (false);
		MySceneManager.Instance.GoWorkConfig();
	}


}
