using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MySceneManager : SingletonMonoBehaviour<MySceneManager> {

	public void GoSalary()
	{
		SceneManager.LoadScene ("Salary");
	}

	public void GoCalendar()
	{
		SceneManager.LoadScene ("Calendar");
	}
}
