using UnityEngine;
using System.Collections;

public class TextMeshChange : MonoBehaviour {

	// Use this for initialization
	void Start () {
		GetComponent<TextMesh> ().text = "Lil Jon";
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
