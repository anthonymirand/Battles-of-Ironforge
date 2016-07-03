using UnityEngine;
using System.Collections;
using Vuforia;

public class DistanceCheck : MonoBehaviour {

	public GameObject self;
	private GameObject other;
	public int distance;
	public ParticleSystem particles;
	public GameObject bulletPrefab;
	public float fireRate;
	public Transform moveSelf;
	//private float delay = 0.5f;
	// Use this for initialization
	void Start () {
		particles.enableEmission = false;
	}
	
	// Update is called once per frame
	void Update () {
		other = GameObject.FindGameObjectWithTag ("Troop");
		if (other != null && (Vector3.Distance (other.transform.position, self.transform.position) < distance)) {
			Debug.Log("Activated Cannon");
			particles.enableEmission = true;
//			if (DragonHandler.DragonFound && CanonHandler.CanonFound && Time.time > delay){
//				Transform dragPos = dragon.transform;
//				moveSelf.transform.LookAt(dragPos);
//				delay = Time.time + fireRate;
//				GetComponent<AudioSource>().Play();
//				GameObject g = (GameObject)Instantiate(bulletPrefab, transform.position, Quaternion.identity);
//				g.GetComponent<Bullet>().target = dragon.transform;
//			}

		}
		else {
			particles.enableEmission = false;
		}
	}
}
