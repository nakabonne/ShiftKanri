using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ManagerRoot : MonoBehaviour {


	public static ManagerRoot instance;
	void Awake(){
		if (instance == null) {
			instance = this;
			DontDestroyOnLoad (this.gameObject);
		} else {
			Destroy (this.gameObject);
		}
	}
}
