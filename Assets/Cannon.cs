using UnityEngine;
using System.Collections;

public class Cannon : MonoBehaviour {

	// The Bullet
	public GameObject bulletPrefab;
	
	void OnTriggerEnter(Collider co) {
		// Was it a Monster? Then Shoot it
		if (co.GetComponent<Enemy>()) {
			GameObject g = (GameObject)Instantiate(bulletPrefab, transform.position, Quaternion.identity);
			g.GetComponent<Bullet>().target = co.transform;
		}
	}
}
