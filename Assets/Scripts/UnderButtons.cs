﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UnderButtons : MySceneManager {

	public static UnderButtons instance =null;

	void Awake(){
		if (instance == null) {
			instance = this;
			DontDestroyOnLoad (this.gameObject);
		} else {
			Destroy (this.gameObject);
		}
	}
}
