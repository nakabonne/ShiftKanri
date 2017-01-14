using UnityEditor;
using UnityEngine;

public class PlayerPrefsEditor {

	[MenuItem("Tools/PlayerPrefs/DeleteAll")]
	static void DeleteAll(){
		PlayerPrefs.DeleteAll();
		Debug.Log("PlayerPrefsの全データを削除したぜ！！");
	}
}