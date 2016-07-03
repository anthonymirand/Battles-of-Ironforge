using UnityEngine;
using System.Collections;
using Vuforia;

public class Health : MonoBehaviour {

	public int health;
	public bool boosted;
	public AudioSource backgroundMusic;
	public AudioSource playOnKill;
	public TextMesh dragonWatchStatus;


	//TextMesh tm;

	// Use this for initialization
	void Start () {
		//tm = GetComponent<TextMesh> ();
		backgroundMusic.loop = true;
		backgroundMusic.volume = 0.7f;
		backgroundMusic.Play ();
		boosted = false;
	}
	
	// Update is called once per frame
	void Update () {
		//transform.forward = Camera.main.transform.forward;
		if (health > 20) {
			dragonWatchStatus.color = new Color (99.0f / 255.0f, 209.0f / 255.0f, 62.0f / 255.0f);
			dragonWatchStatus.text = "Healthy";
		} else if (health > 1) {
			dragonWatchStatus.color = new Color (255.0f / 255.0f, 211.0f / 255.0f, 25.0f / 255.0f);
			dragonWatchStatus.text = "Damaged";
		} else {
			dragonWatchStatus.color = new Color (183.0f / 255.0f, 19.0f / 255.0f, 28.0f / 255.0f);
			dragonWatchStatus.text = "Dead";
		}
	}

	public int current(){
		return health;
	}


	public void decrease() {
		if (health > 1)
			health = health - 1;
		else {
			DragonHandler.DragonFound = false; 
//			Destroy (transform.parent.gameObject);
			GetComponent<Animation>()["death"].wrapMode = WrapMode.Once;
			GetComponent<Animation>().Play("death");
			GetComponent<AudioSource>().Play();
			backgroundMusic.Stop();
			playOnKill.Play();
		}
	}
}


