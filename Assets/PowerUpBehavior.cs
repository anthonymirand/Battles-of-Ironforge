using UnityEngine;
using System.Collections;

public class PowerUpBehavior : MonoBehaviour {

	public int powerUpDistance;
	public GameObject poweredParticle_health;
	public GameObject poweredParticle_attack;
	public string teamColor;
	// Use this for initialization
	void Start () {
	
	}

	void OnDestroy(){
		if (this.tag == "PowerUp") {
			if (teamColor == "red") {
				foreach (Transform spawnedObject in Spawner.redClones){
					ObjectHealth curHealth = spawnedObject.GetComponent<ObjectHealth> ();
					if (curHealth.healthBoosted){
						curHealth.health = curHealth.health / 2;
						GameObject rays = spawnedObject.FindChild ("Lightshafts_Magic_Health(Clone)").gameObject;
						if (rays)
							Destroy (rays);
						curHealth.healthBoosted = false;
					}
				}
			} else {
				foreach (Transform spawnedObject in Spawner.blueClones){
					ObjectHealth curHealth = spawnedObject.GetComponent<ObjectHealth> ();
					if (curHealth.healthBoosted){
						curHealth.health = curHealth.health / 2;
						GameObject rays = spawnedObject.FindChild ("Lightshafts_Magic_Health(Clone)").gameObject;
						if (rays)
							Destroy (rays);
						curHealth.healthBoosted = false;
					}
				}
			}
		} else if (this.tag == "PowerUpAttack") {
			if (teamColor == "red") {
				foreach (Transform spawnedObject in Spawner.redClones){
					ObjectHealth curHealth = spawnedObject.GetComponent<ObjectHealth> ();
					WeaponBehavior curWB = spawnedObject.GetComponent<WeaponBehavior> ();
					if (curHealth.attackBoosted){
						curWB.cannonDamage = curWB.cannonDamage / 2;
						curWB.catapultDamage = curWB.catapultDamage / 2;
						GameObject rays = spawnedObject.FindChild ("Lightshafts_Magic(Clone)").gameObject;
						if (rays)
							Destroy (rays);
						curHealth.attackBoosted = false;
					}
				}
			} else {
				foreach (Transform spawnedObject in Spawner.blueClones){
					ObjectHealth curHealth = spawnedObject.GetComponent<ObjectHealth> ();
					WeaponBehavior curWB = spawnedObject.GetComponent<WeaponBehavior> ();
					if (curHealth.attackBoosted){
						curWB.cannonDamage = curWB.cannonDamage / 2;
						curWB.catapultDamage = curWB.catapultDamage / 2;
						GameObject rays = spawnedObject.FindChild ("Lightshafts_Magic(Clone)").gameObject;
						if (rays)
							Destroy (rays);
						curHealth.attackBoosted = false;
					}
				}
			}
		}
	}
	
	// Update is called once per frame
	void Update () {
		if (!GameController.inCoroutine) {
			if (this.tag == "PowerUp") {
				if (teamColor == "red") {
					foreach (Transform spawnedObject in Spawner.redClones) {
						ObjectHealth curHealth = spawnedObject.GetComponent<ObjectHealth> ();
						if (Vector3.Distance (gameObject.transform.position, spawnedObject.transform.position) <= powerUpDistance && spawnedObject != gameObject.transform) {
							if (!curHealth.healthBoosted) {
								GameController.inCoroutine = true;
								curHealth.health = curHealth.health * 2;
								GameObject poweredUp = Instantiate (poweredParticle_health, spawnedObject.transform.position, Quaternion.identity) as GameObject;
								poweredUp.transform.parent = spawnedObject;
								curHealth.healthBoosted = true;
								GameController.inCoroutine = false;
							} 
						} else if (curHealth.healthBoosted) {
							curHealth.health = curHealth.health / 2;
							GameObject rays = spawnedObject.FindChild ("Lightshafts_Magic_Health(Clone)").gameObject;
							if (rays)
								Destroy (rays);
							curHealth.healthBoosted = false;
						}
					}
				} else if (teamColor == "blue") {
					foreach (Transform spawnedObject in Spawner.blueClones) {
						ObjectHealth curHealth = spawnedObject.GetComponent<ObjectHealth> ();
						if (Vector3.Distance (gameObject.transform.position, spawnedObject.transform.position) <= powerUpDistance && spawnedObject != gameObject.transform) {
							if (!curHealth.healthBoosted) {
								GameController.inCoroutine = true;
								curHealth.health = curHealth.health * 2;
								GameObject poweredUp = Instantiate (poweredParticle_health, spawnedObject.transform.position, Quaternion.identity) as GameObject;
								poweredUp.transform.parent = spawnedObject;
								curHealth.healthBoosted = true;
								GameController.inCoroutine = false;
							} 
						} else if (curHealth.healthBoosted) {
							curHealth.health = curHealth.health / 2;
							GameObject rays = spawnedObject.FindChild ("Lightshafts_Magic_Health(Clone)").gameObject;
							if (rays)
								Destroy (rays);
							curHealth.healthBoosted = false;
						}
					}
				}
			} else if (this.tag == "PowerUpAttack"){
				if (teamColor == "red") {
					foreach (Transform spawnedObject in Spawner.redClones) {
						if (spawnedObject.gameObject.tag == "Cannon" || spawnedObject.gameObject.tag == "Catapult"){
							ObjectHealth curHealth = spawnedObject.GetComponent<ObjectHealth> ();
							WeaponBehavior curWB = spawnedObject.GetComponent<WeaponBehavior> ();
							if (Vector3.Distance (gameObject.transform.position, spawnedObject.transform.position) <= powerUpDistance) {
								if (!curHealth.attackBoosted) {
									GameController.inCoroutine = true;
									curWB.cannonDamage = curWB.cannonDamage * 2;
									curWB.catapultDamage = curWB.catapultDamage * 2;
									GameObject poweredUp = Instantiate (poweredParticle_attack, spawnedObject.transform.position, Quaternion.identity) as GameObject;
									poweredUp.transform.parent = spawnedObject;
									curHealth.attackBoosted = true;
									GameController.inCoroutine = false;
								} 
							} else if (curHealth.attackBoosted) {
								curWB.cannonDamage = curWB.cannonDamage / 2;
								curWB.catapultDamage = curWB.catapultDamage / 2;
								GameObject rays = spawnedObject.FindChild ("Lightshafts_Magic(Clone)").gameObject;
								if (rays)
									Destroy (rays);
								curHealth.attackBoosted = false;
							}
						}
					}
				} else if (teamColor == "blue") {
					foreach (Transform spawnedObject in Spawner.blueClones) {
						if (spawnedObject.gameObject.tag == "Cannon" || spawnedObject.gameObject.tag == "Catapult"){
							ObjectHealth curHealth = spawnedObject.GetComponent<ObjectHealth> ();
							WeaponBehavior curWB = spawnedObject.GetComponent<WeaponBehavior> ();
							if (Vector3.Distance (gameObject.transform.position, spawnedObject.transform.position) <= powerUpDistance) {
								if (!curHealth.attackBoosted) {
									GameController.inCoroutine = true;
									curWB.cannonDamage = curWB.cannonDamage * 2;
									curWB.catapultDamage = curWB.catapultDamage * 2;
									GameObject poweredUp = Instantiate (poweredParticle_attack, spawnedObject.transform.position, Quaternion.identity) as GameObject;
									poweredUp.transform.parent = spawnedObject;
									curHealth.attackBoosted = true;
									GameController.inCoroutine = false;
								} 
							} else if (curHealth.attackBoosted) {
								curWB.cannonDamage = curWB.cannonDamage / 2;
								curWB.catapultDamage = curWB.catapultDamage / 2;
								GameObject rays = spawnedObject.FindChild ("Lightshafts_Magic(Clone)").gameObject;
								if (rays)
									Destroy (rays);
								curHealth.attackBoosted = false;
							}
						}
					}
				}
			}
		}
	}
}
