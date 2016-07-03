using UnityEngine;
using System.Collections;

public class Bullet : MonoBehaviour {

	public float speed = 10;
	public Transform target;
	public string teamColor;
	public int damage;

	void Update() {
		transform.LookAt (target);
	}
	// Use this for initialization
	void FixedUpdate() {
		if (target) {
			Vector3 dir = target.position - transform.position;
			GetComponent<Rigidbody> ().velocity = dir.normalized * speed;
		} else {
			Destroy (gameObject);
		}
	}
	void OnTriggerEnter(Collider co){
		//Collider entered
		Debug.Log ("Trigger entered");
		bool cannonHit = GameController.onProbability (80);
		bool arrowHit = GameController.onProbability (90);
		string critAnswer = GameController.critHitEval ();
		if (teamColor == "red" && Spawner.blueClones.Contains (co.transform)) {
			Debug.Log(this.gameObject.tag);
			ObjectHealth health = co.GetComponent<ObjectHealth> ();
			if (health) {
				if (this.gameObject.tag == "Cannonball"){
					if (cannonHit){
						if (critAnswer == "ultra"){
							health.onAttack (damage*100);
							StartCoroutine(GameController.displayMessageOver(co.transform, "ULTRA CRITICAL!"));
						} else if (critAnswer == "crit"){
							health.onAttack(damage*2);
							StartCoroutine(GameController.displayMessageOver(co.transform, "Critical Hit!"));
						} else{
							health.onAttack(damage);
							StartCoroutine(GameController.displayMessageOver(co.transform, "Hit!"));
						}
					} else {
						StartCoroutine(GameController.displayMessageOver(co.transform, "Miss!"));
					}
				} else{
					if (arrowHit){
						if (critAnswer == "ultra"){
							health.onAttack (damage*100);
							StartCoroutine(GameController.displayMessageOver(co.transform, "ULTRA CRITICAL!"));
						} else if (critAnswer == "crit"){
							health.onAttack(damage*2);
							StartCoroutine(GameController.displayMessageOver(co.transform, "Critical Hit!"));
						} else{
							health.onAttack(damage);
							StartCoroutine(GameController.displayMessageOver(co.transform, "Hit!"));
						}
					} else {
						StartCoroutine(GameController.displayMessageOver(co.transform, "Miss!"));
					}
				}
				Destroy (gameObject);
				GameController.hitExecuted = true;
			}
		} else if (teamColor == "blue" && Spawner.redClones.Contains (co.transform)) {
			ObjectHealth health = co.GetComponent<ObjectHealth> ();
			if (health) {
				Debug.Log(this.gameObject.tag);
				if (this.gameObject.tag == "Cannonball"){
					if (cannonHit){
						if (critAnswer == "ultra"){
							health.onAttack (damage*100);
							StartCoroutine(GameController.displayMessageOver(co.transform, "ULTRA CRITICAL!"));
						} else if (critAnswer == "crit"){
							health.onAttack(damage*2);
							StartCoroutine(GameController.displayMessageOver(co.transform, "Critical Hit!"));
						} else{
							health.onAttack(damage);
							StartCoroutine(GameController.displayMessageOver(co.transform, "Hit!"));
						}
					} else {
						StartCoroutine(GameController.displayMessageOver(co.transform, "Miss!"));
					}
				}
				else{
					if (arrowHit){
						if (critAnswer == "ultra"){
							health.onAttack (damage*100);
							StartCoroutine(GameController.displayMessageOver(co.transform, "ULTRA CRITICAL!"));
						} else if (critAnswer == "crit"){
							health.onAttack(damage*2);
							StartCoroutine(GameController.displayMessageOver(co.transform, "Critical Hit!"));
						} else{
							health.onAttack(damage);
							StartCoroutine(GameController.displayMessageOver(co.transform, "Hit!"));
						}
					} else {
						StartCoroutine(GameController.displayMessageOver(co.transform, "Miss!"));
					}
				}
				Destroy (gameObject);
				GameController.hitExecuted = true;
			}
		}
	}
}
