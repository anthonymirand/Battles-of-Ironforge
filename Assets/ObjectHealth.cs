using UnityEngine;
using System.Collections;

public class ObjectHealth : MonoBehaviour {

	public int health;
	public bool healthBoosted;
	public bool attackBoosted;
	// Use this for initialization
	void Start () {
		healthBoosted = false;
		attackBoosted = false;
	}
	
	// Update is called once per frame
	void Update () {

	}

	public void onAttack(int amount){
		health -= amount;
		if (health <= 0)
			Destroy (gameObject);
	}

	public int currentHealth(){
		return health;
	}

}
