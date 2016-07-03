using UnityEngine;
using System.Collections;

public class WeaponBehavior : MonoBehaviour {
	
	public bool cannonisArmed = false;
	public bool catapultisArmed = false;
	public int cannonArmDistance;
	public int catapultArmDistance;
//	public ParticleSystem cannonParticles;
//	public ParticleSystem catapultParticles;
	//Firing objects
	public GameObject catapultAmmo;
	public GameObject cannonAmmo;
	public int cannonDamage;
	public int catapultDamage;

	private ParticleSystem particles;
	public GameObject explosion;
	public int explosionDamageRadius;
	public GameObject soundObject;
	// Use this for initialization
	void Start () {
		particles = GetComponentInChildren<ParticleSystem> ();
		particles.enableEmission = false;
		cannonDamage = 4;
		catapultDamage = 2;
	}

	void onDestroyExplosion(){
		GameObject explosionUp = Instantiate (explosion, this.transform.position, Quaternion.identity) as GameObject;
		explosionUp.transform.parent = this.gameObject.transform;
		GameObject g = Instantiate (soundObject, this.gameObject.transform.position, Quaternion.identity) as GameObject;
		g.GetComponent<AudioSource> ().Play ();
		if (GameController.onProbability (50)) {
			foreach (Transform sObject in Spawner.redClones){
				if (Vector3.Distance(sObject.transform.position, this.transform.position) <= explosionDamageRadius){
					sObject.GetComponent<ObjectHealth>().health -= 3;
					StartCoroutine(GameController.displayMessageOver(sObject, "Damaged!"));
				}
			}
			foreach (Transform sObject in Spawner.blueClones){
				if (Vector3.Distance(sObject.transform.position, this.transform.position) <= explosionDamageRadius){
					sObject.GetComponent<ObjectHealth>().health -= 3;
					StartCoroutine(GameController.displayMessageOver(sObject, "Damaged!"));
				}
			}
		}
		Destroy (explosionUp);
		Destroy (g);
	}

	void OnDestroy(){
		onDestroyExplosion ();
	}
	
	// Update is called once per frame
	void Update () {
		if (GameController.teamColor == "red" && !GameController.inCoroutine) {
			if (this.tag == "Cannon"){
				Debug.Log("red distance check reached");
				float minDistance = Mathf.Infinity;
				foreach (Transform selectedObject in Spawner.redClones){
					if (selectedObject.tag == "Troop" && Vector3.Distance(selectedObject.position, this.transform.position) < minDistance){
						minDistance = Vector3.Distance(selectedObject.position, this.transform.position);
						if (minDistance < cannonArmDistance){
							cannonisArmed = true;
							particles.enableEmission = true;
						}
					}
				}
			} else if (this.tag == "Catapult"){
				float minDistance = Mathf.Infinity;
				foreach (Transform selectedObject in Spawner.redClones){
					if (selectedObject.tag == "Wizard" && Vector3.Distance(selectedObject.position, this.transform.position) < minDistance){
						minDistance = Vector3.Distance(selectedObject.position, this.transform.position);
						if (minDistance < catapultArmDistance){
							catapultisArmed = true;
							particles.enableEmission = true;
						}
					}
				}
			}
		} else if (GameController.teamColor == "blue" && !GameController.inCoroutine) { /*blue*/
			if (this.tag == "Cannon"){
				Debug.Log("reached blue distance check");
				float minDistance = Mathf.Infinity;
				foreach (Transform selectedObject in Spawner.blueClones){
					if (selectedObject.tag == "Troop" && Vector3.Distance(selectedObject.position, this.transform.position) < minDistance){
						minDistance = Vector3.Distance(selectedObject.position, this.transform.position);
						if (minDistance < cannonArmDistance){
							cannonisArmed = true;
							particles.enableEmission = true;
						}
					}
				}
			} else if (this.tag == "Catapult"){
				float minDistance = Mathf.Infinity;
				foreach (Transform selectedObject in Spawner.blueClones){
					if (selectedObject.tag == "Wizard" && Vector3.Distance(selectedObject.position, this.transform.position) < minDistance){
						minDistance = Vector3.Distance(selectedObject.position, this.transform.position);
						if (minDistance < catapultArmDistance){
							catapultisArmed = true;
							particles.enableEmission = true;
						}
					}
				}
			}
		}
	}

	public void fire(Transform enemy){
		if (this.tag == "Cannon") {
			//fire cannonball
			GetComponent<AudioSource>().Play();
			GameObject g = (GameObject)Instantiate(cannonAmmo, transform.position, Quaternion.identity);
			g.GetComponent<Bullet>().target = enemy.transform;
			g.GetComponent<Bullet>().damage = cannonDamage;
			if (GameController.teamColor == "red")
				g.GetComponent<Bullet>().teamColor = "red";
			else
				g.GetComponent<Bullet>().teamColor = "blue";
		} else if (this.tag == "Catapult") {
			//fire arrow
			GetComponent<AudioSource>().Play();
			GameObject g = (GameObject)Instantiate(catapultAmmo, transform.position, Quaternion.identity);
			g.GetComponent<Bullet>().target = enemy.transform;
			g.GetComponent<Bullet>().damage = catapultDamage;
			if (GameController.teamColor == "red")
				g.GetComponent<Bullet>().teamColor = "red";
			else
				g.GetComponent<Bullet>().teamColor = "blue";
		}
	}
}
