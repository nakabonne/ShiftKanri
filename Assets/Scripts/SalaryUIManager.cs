using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SalaryUIManager : MonoBehaviour {

	public Text thisYearSalary;
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		ThisYearSalary ();
	}

	void ThisYearSalary()
	{
		thisYearSalary.text = SalaryManager.Instance.this_year_salary.ToString () + "円";
	}
}
