using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using Vuforia;

public class GameController : MonoBehaviour {

	public int cannonDamage;
	public int crossbowDamage;

	public string redURL = "http://192.168.0.102:5005/teamselect/red";
	public string blueURL = "http://192.168.0.102:5005/teamselect/blue";

	//Critical hit decider
	public static int critChance;
	public static int ultra_critChance;

	public GameObject canv;
	public GameObject settings;
	public GameObject teamSelect;
	public GameObject redOutline;
	public GameObject blueOutline;
	public GameObject reticle;
	public TextMesh WatchTeam;
	static public string teamColor = "";
	static public string gameStarted = "false";
	public Text reticle_text;

	//Publics for turn select canvas
	public GameObject turnCanvas;
	public Text turnText;
	public Button moveButton;
	public Button attackButton;
	public Button spawnButton;
	public Button drawButton;
	//public Text turnLabel;
	public GameObject turnLabel;
	//public Text turnNumber;
	public Button forfeitButton;
	public Button statsButton;

	//Publics for SpawnSelect Objects
	public GameObject spawnSelectCanvas;
	public GameObject spawnSelectCanvas_Defensive;
	public GameObject spawnTypeSelect;
	public Text spawnSelectText;
	public Text spawnSelectText_Offensive;
	public Text spawnTypeSelectText;
	public Button cannonButton;
	public Button catapultButton;
	public Button wizardButton;
	public Button troopButton;
	public Text cannonButtonAvailableText;
	public Text catapultButtonAvailableText;
	public Text wizardButtonAvailableText;
	public Text troopButtonAvailableText;
	public Button spawnSelectBackButton;
	public Button woodButton;
	public Button stoneButton;
	public Button powerUpButton;
	public Button powerUpAttackButton;
	public Button offensiveButton;
	public Button defensiveButton;
	public Text woodButtonAvailableText;
	public Text stoneButtonAvailableText;
	public Text powerUpButtonAvailableText;
	public Text powerUpAttackButtonAvailableText;
	public Button spawnSelectBackButton_Defensive;


	//publics for unlocked messages
	public GameObject unlockCanvas;
	public Text unlockText;

	private static Color red_color;
	private static Color blue_color;
	private static Color grey_color;
	private static int turnCount = 1;
	AudioSource audio;

	//GameState
	public enum GameStates {error = -1, spawn, move, attack, draw};
	public static GameStates GameState = GameStates.error;

	//Holds Unlocked items
	public enum Resources {cannon, catapult, troops, wizard, woodWall, stoneWall, powerUp, powerUpAttack};
	public int[] UnlockedResourcesRed;
	public int[] UnlockedResourcesBlue;
	public Transform[] SpawnablePrefabs;
	public static Transform spawningObject;

	// Use this for initialization
	void Start () {
		canv.SetActive (true);
		settings.SetActive (false);
		teamSelect.SetActive (false);
		redOutline.SetActive (false);
		blueOutline.SetActive (false);
		turnCanvas.SetActive (false);
		reticle.SetActive (false);
		unlockCanvas.SetActive (false);
		spawnSelectCanvas.SetActive (false);
		spawnSelectCanvas_Defensive.SetActive (false);
		spawnTypeSelect.SetActive (false);
		audio = GetComponent<AudioSource> ();
		UnlockedResourcesRed = new int[8];
		UnlockedResourcesBlue = new int[8];
		for (int i = 0; i < 8; i++) {
			UnlockedResourcesRed [i] = 1;
			UnlockedResourcesBlue [i] = 1;
		}
		red_color = new Color(220.0f / 255.0f, 22.0f / 255.0f, 24.0f / 255.0f);
		blue_color = new Color(56.0f/255.0f, 105.0f/255.0f, 232.0f/255.0f);
		grey_color = new Color(172.0f/255.0f, 181.0f/255.0f, 185.0f/255.0f);
		critChance = 7;
		ultra_critChance = 1;
	}

	IEnumerator ShowCanvas (GameObject canvas, float delay) {
		inCoroutine = true;
		canvas.SetActive (true);
		yield return new WaitForSeconds(delay);
		canvas.SetActive (false);
		inCoroutine = false;
	}

	public void serverChangeTeam(string team){
		if (team == "red") {
			WWW www = new WWW (redURL);
			StartCoroutine (WaitForRequest (www));
		} else {
			WWW www = new WWW (blueURL);
			StartCoroutine (WaitForRequest (www));
		}
	}

	IEnumerator WaitForRequest(WWW www)
	{
		yield return www;
//		// check for errors
//		if (www.error == null)
//		{
//			Debug.Log("WWW Ok!: " + www.data);
//		} else {
//			Debug.Log("WWW Error: "+ www.error);
//		}    
	}

	private void CleanUp(){
		inCoroutine = true;
		GameObject[] go = GameObject.FindGameObjectsWithTag ("tempMessage");
		if (go.Length != 0) {
			foreach(GameObject thing in go)
				Destroy (thing);
		}


		for (int i = Spawner.redClones.Count-1; i >= 0; i--)
			if (Spawner.redClones [i] == null)
				Spawner.redClones.RemoveAt (i);
		
		for (int i = Spawner.blueClones.Count-1; i >= 0; i--)
			if (Spawner.blueClones [i] == null)
				Spawner.blueClones.RemoveAt (i);
		armedCheck ();
		inCoroutine = false;
	}

	private void armedCheck(){
		foreach (Transform clone in Spawner.redClones){
			if (clone.gameObject.tag == "Cannon" || clone.gameObject.tag == "Catapult"){
				if (clone.gameObject.GetComponent<WeaponBehavior>().cannonisArmed || clone.gameObject.GetComponent<WeaponBehavior>().catapultisArmed)
					redArmed = true;
				else
					redArmed = false;
			}
		}
		foreach (Transform clone in Spawner.blueClones){
			if (clone.gameObject.tag == "Cannon" || clone.gameObject.tag == "Catapult"){
				if (clone.gameObject.GetComponent<WeaponBehavior>().cannonisArmed || clone.gameObject.GetComponent<WeaponBehavior>().catapultisArmed)
					blueArmed = true;
				else 
					blueArmed = false;
			}
		}
	}

	public static bool onProbability(int probability){
		int select = Random.Range (0, 100);
		if (select <= probability)
			return true;
		else
			return false;
	}

	public static IEnumerator displayMessageOver(Transform displayObject, string message){
		GameObject go = GameObject.Find("ARCamera") as GameObject;
		GameObject textObject = new GameObject ("tempMessage");
		textObject.tag = "tempMessage";
		TextMesh tm = textObject.AddComponent<TextMesh> ();
		Vector3 offset = new Vector3 (0.0f, -45.0f, 0.0f);
		Vector3 offset2 = new Vector3 (0.0f, 20.0f, 0.0f);
		Vector3 heading = go.transform.position - textObject.transform.position;
		tm.richText = true;
		tm.text = message;
		if (teamColor == "red")
			tm.color = red_color;
		else
			tm.color = blue_color;
		tm.fontSize = 155;
		tm.characterSize = 1;
		tm.alignment = TextAlignment.Center;
		tm.anchor = TextAnchor.MiddleCenter;
		textObject.transform.position = displayObject.position+offset2;
		textObject.transform.LookAt (textObject.transform.position - heading);
		textObject.transform.localEulerAngles = new Vector3 (90, 0, 0);
		//textObject.transform.Rotate (offset);
		yield return new WaitForSeconds (0.2f);
	}

	public static string critHitEval(){
		int select = Random.Range(0,100);
		if (select <= ultra_critChance)
			return "ultra";
		else if (select <= critChance)
			return "crit";
		else
			return "none";
	}

	public void onTurnEnd(){
		GameState = GameStates.error;
		turnCount++;
		critChance = 7+(int)(5*Mathf.Sqrt(turnCount));
		ultra_critChance = 1 + (int)(2 * Mathf.Sqrt (turnCount));
		if (teamColor == "blue") {
			teamColor = "red";
			reticle_text.color = red_color;
			serverChangeTeam("red");
//			blueOutline.SetActive(false);
//			redOutline.SetActive(true);
		} else if (teamColor == "red") {
			teamColor = "blue";
			reticle_text.color = blue_color;
			serverChangeTeam("blue");
//			blueOutline.SetActive(true);
//			redOutline.SetActive(false);
		}
		CleanUp ();
		onTurnStart ();
	}

	public IEnumerator onTurnEndDelay(float delay) {
		inCoroutine = true;
		yield return new WaitForSeconds(delay);
		onTurnEnd ();
		inCoroutine = false;
	}
	public static bool inCoroutine = false;
	public static bool hitExecuted = false;
	private bool redArmed;
	private bool blueArmed;
	// Update is called once per frame
	void Update () {
		//Cleanup
		switch (GameState) {
			case GameStates.spawn:
				//Spawn objects
				if (Spawner.hasSpawned == "true" && !inCoroutine){
					StartCoroutine(onTurnEndDelay(1.0f));
				}
				break;

			case GameStates.move:
				//move objects
				if (Spawner.hasMoveEnded == "true" && !inCoroutine){
					StartCoroutine(onTurnEndDelay(1.0f));
				}
				break;

			case GameStates.attack:
				//attack objects
				if (Spawner.hasAttackEnded == "true" && !inCoroutine && hitExecuted){
					Debug.Log("Attack Ended");
					StartCoroutine(onTurnEndDelay(2.0f));
				}
				break;

			case GameStates.draw:
				//unlock objects
				//Cannon
				if (CanonHandler.CanonFound){
					if (teamColor == "red"){
						bool boolValue = UnlockedResourcesRed[(int)Resources.cannon] != 0;
						if (!boolValue && !inCoroutine){
							UnlockedResourcesRed[(int)Resources.cannon]++;
							unlockText.color = red_color;
							unlockText.text = "You unlocked the cannon!";
							unlockCanvas.SetActive(true);
							StartCoroutine(ShowCanvas(unlockCanvas, 2.5f));
							Debug.Log("Cannon Unlocked!");
							StartCoroutine(onTurnEndDelay(2.5f));
						} else if (boolValue && !inCoroutine) {
							unlockText.color = red_color;
							UnlockedResourcesRed[(int)Resources.cannon]++;
							unlockText.text = "You gained another cannon. You now have "+UnlockedResourcesRed[(int)Resources.cannon].ToString()+" cannons.";
							unlockCanvas.SetActive(true);
							StartCoroutine(ShowCanvas(unlockCanvas, 2.5f));
							StartCoroutine(onTurnEndDelay(2.5f));
						}
					} else {
						bool boolValue = UnlockedResourcesBlue[(int)Resources.cannon] != 0;
						if (!boolValue && !inCoroutine){
							UnlockedResourcesBlue[(int)Resources.cannon]++;
							unlockText.color = blue_color;
							unlockText.text = "You unlocked the cannon!";
							unlockCanvas.SetActive(true);
							StartCoroutine(ShowCanvas(unlockCanvas, 2.5f));
							Debug.Log("Cannon Unlocked!");
							StartCoroutine(onTurnEndDelay(2.5f));
						} else if (boolValue && !inCoroutine) {
							unlockText.color = blue_color;
							UnlockedResourcesBlue[(int)Resources.cannon]++;
							unlockText.text = "You gained another cannon. You now have "+UnlockedResourcesBlue[(int)Resources.cannon].ToString()+" cannons.";
							unlockCanvas.SetActive(true);
							StartCoroutine(ShowCanvas(unlockCanvas, 2.5f));
							StartCoroutine(onTurnEndDelay(2.5f));
						}
					}
				}

				//Catapult
				if (CrossbowHandler.CrossbowFound){
					if (teamColor == "red"){
						bool boolValue = UnlockedResourcesRed[(int)Resources.catapult] != 0;
						if (!boolValue && !inCoroutine){
							UnlockedResourcesRed[(int)Resources.catapult]++;
							unlockText.color = red_color;
							unlockText.text = "You unlocked the catapult!";
							unlockCanvas.SetActive(true);
							StartCoroutine(ShowCanvas(unlockCanvas, 2.5f));
							Debug.Log("Catapult Unlocked!");
							StartCoroutine(onTurnEndDelay(2.5f));
						} else if (boolValue && !inCoroutine) {
							unlockText.color = red_color;
							UnlockedResourcesRed[(int)Resources.cannon]++;
							unlockText.text = "You gained another catapult. You now have "+UnlockedResourcesRed[(int)Resources.catapult].ToString()+" catapults.";
							unlockCanvas.SetActive(true);
							StartCoroutine(ShowCanvas(unlockCanvas, 2.5f));
							StartCoroutine(onTurnEndDelay(2.5f));
						}
					} else {
						bool boolValue = UnlockedResourcesBlue[(int)Resources.catapult] != 0;
						if (!boolValue && !inCoroutine){
							UnlockedResourcesBlue[(int)Resources.catapult]++;
							unlockText.color = blue_color;
							unlockText.text = "You unlocked the catapult!";
							unlockCanvas.SetActive(true);
							StartCoroutine(ShowCanvas(unlockCanvas, 2.5f));
							Debug.Log("Catapult Unlocked!");
							StartCoroutine(onTurnEndDelay(2.5f));
						} else if (boolValue && !inCoroutine) {
							unlockText.color = blue_color;
							UnlockedResourcesBlue[(int)Resources.catapult]++;
							unlockText.text = "You gained another catapult. You now have "+UnlockedResourcesBlue[(int)Resources.catapult].ToString()+" catapults.";
							unlockCanvas.SetActive(true);
							StartCoroutine(ShowCanvas(unlockCanvas, 2.5f));
							StartCoroutine(onTurnEndDelay(2.5f));
						}
					}
				}

			//Wizard
			if (WizardHandler.WizardFound){
				if (teamColor == "red"){
					bool boolValue = UnlockedResourcesRed[(int)Resources.wizard] != 0;
					if (!boolValue && !inCoroutine){
						UnlockedResourcesRed[(int)Resources.wizard]++;
						unlockText.color = red_color;
						unlockText.text = "You unlocked the wizard!";
						unlockCanvas.SetActive(true);
						StartCoroutine(ShowCanvas(unlockCanvas, 2.5f));
						Debug.Log("Wizard Unlocked!");
						StartCoroutine(onTurnEndDelay(2.5f));
					} else if (boolValue && !inCoroutine) {
						unlockText.color = red_color;
						UnlockedResourcesRed[(int)Resources.wizard]++;
						unlockText.text = "You gained another wizard. You now have "+UnlockedResourcesRed[(int)Resources.wizard].ToString()+" wizards.";
						unlockCanvas.SetActive(true);
						StartCoroutine(ShowCanvas(unlockCanvas, 2.5f));
						StartCoroutine(onTurnEndDelay(2.5f));
					}
				} else {
					bool boolValue = UnlockedResourcesBlue[(int)Resources.wizard] != 0;
					if (!boolValue && !inCoroutine){
						UnlockedResourcesBlue[(int)Resources.wizard]++;
						unlockText.color = blue_color;
						unlockText.text = "You unlocked the wizard!";
						unlockCanvas.SetActive(true);
						StartCoroutine(ShowCanvas(unlockCanvas, 2.5f));
						Debug.Log("Wizard Unlocked!");
						StartCoroutine(onTurnEndDelay(2.5f));
					} else if (boolValue && !inCoroutine) {
						unlockText.color = blue_color;
						UnlockedResourcesBlue[(int)Resources.wizard]++;
						unlockText.text = "You gained another wizard. You now have "+UnlockedResourcesBlue[(int)Resources.wizard].ToString()+" wizards.";
						unlockCanvas.SetActive(true);
						StartCoroutine(ShowCanvas(unlockCanvas, 2.5f));
						StartCoroutine(onTurnEndDelay(2.5f));
					}
				}
			}

			//Troop
			if (TroopHandler.TroopFound){
				if (teamColor == "red"){
					bool boolValue = UnlockedResourcesRed[(int)Resources.troops] != 0;
					if (!boolValue && !inCoroutine){
						UnlockedResourcesRed[(int)Resources.troops]++;
						unlockText.color = red_color;
						unlockText.text = "You unlocked a troop!";
						unlockCanvas.SetActive(true);
						StartCoroutine(ShowCanvas(unlockCanvas, 2.5f));
						Debug.Log("Troop Unlocked!");
						StartCoroutine(onTurnEndDelay(2.5f));
					} else if (boolValue && !inCoroutine) {
						unlockText.color = red_color;
						UnlockedResourcesRed[(int)Resources.troops]++;
						unlockText.text = "You gained another troop. You now have "+UnlockedResourcesRed[(int)Resources.troops].ToString()+" troops.";
						unlockCanvas.SetActive(true);
						StartCoroutine(ShowCanvas(unlockCanvas, 2.5f));
						StartCoroutine(onTurnEndDelay(2.5f));
					}
				} else {
					bool boolValue = UnlockedResourcesBlue[(int)Resources.troops] != 0;
					if (!boolValue && !inCoroutine){
						UnlockedResourcesBlue[(int)Resources.troops]++;
						unlockText.color = blue_color;
						unlockText.text = "You unlocked a troop!";
						unlockCanvas.SetActive(true);
						StartCoroutine(ShowCanvas(unlockCanvas, 2.5f));
						Debug.Log("Troop Unlocked!");
						StartCoroutine(onTurnEndDelay(2.5f));
					} else if (boolValue && !inCoroutine) {
						unlockText.color = blue_color;
						UnlockedResourcesBlue[(int)Resources.troops]++;
						unlockText.text = "You gained another troop. You now have "+UnlockedResourcesBlue[(int)Resources.troops].ToString()+" troops.";
						unlockCanvas.SetActive(true);
						StartCoroutine(ShowCanvas(unlockCanvas, 2.5f));
						StartCoroutine(onTurnEndDelay(2.5f));
					}
				}
			}
			break;
			
		case GameStates.error:
		default:
				break;
		}

	}

	public void onStart(){
		audio.Play ();
		canv.SetActive (false);
		teamSelect.SetActive (true);
		gameStarted = "true";
		Debug.Log ("Game Started");
	}
	public void onSettings(){
		canv.SetActive (false);
		settings.SetActive (true);
	}
	public void onHome(){
		settings.SetActive (false);
		canv.SetActive (true);
	}
	public void musicControl (bool setting){
		AudioListener.pause = !setting;
	}
	public void onBlueTeam(){
		teamSelect.SetActive (false);
		blueOutline.SetActive (true);
		reticle.SetActive (true);
		teamColor = "blue";
		reticle_text.color = blue_color;
		WatchTeam.color = blue_color;
		WatchTeam.text = "Blue Team";
		serverChangeTeam ("blue");
		onTurnStart ();

	}
	public void onRedTeam(){
		teamSelect.SetActive (false);
		redOutline.SetActive (true);
		reticle.SetActive (true);
		teamColor = "red";
		reticle_text.color = red_color;
		WatchTeam.color = red_color;
		WatchTeam.text = "Red Team";
		serverChangeTeam ("red");
		onTurnStart ();

	}
	public void onTurnStart(){
		//start of a turn
		//DEACTIVATE TURN SELECTION SO THAT IT IS HIGHEST PRIORITY IN CANVAS LEVEL
		turnCanvas.SetActive (false);
		reticle.SetActive (false);
		turnLabel.GetComponent<TextMesh>().text = "Turn Number: "+turnCount.ToString()+"\nCritical Chance: "
			+critChance.ToString()+"%\nUltra-Critical Chance: "+ultra_critChance.ToString()+"%";
		Spawner.hasSpawned = "false";
		Spawner.hasMoveEnded = "false";
		Spawner.hasAttackEnded = "false";
		//armedCheck ();
		hitExecuted = false;
		if (teamColor == "red") {
			blueOutline.SetActive(false);
			redOutline.SetActive(true);
			turnText.color = red_color;
			//turnNumber.color = red_color;
			turnLabel.GetComponent<TextMesh>().color = red_color;
			attackButton.image.color = red_color;
			spawnButton.image.color = red_color;
			moveButton.image.color = red_color;
			drawButton.image.color = red_color;
			forfeitButton.image.color = red_color;
			statsButton.image.color = red_color;
			if (Spawner.redClones.Count == 0){
				moveButton.interactable = false;
				attackButton.interactable = false;
			} else {
				moveButton.interactable = true;
				if (Spawner.blueClones.Count != 0 && redArmed)
					attackButton.interactable = true;
				else
					attackButton.interactable = false;
			}
		} else if (teamColor == "blue") {
			redOutline.SetActive(false);
			blueOutline.SetActive(true);
			turnText.color = blue_color;
			//turnNumber.color = blue_color;
			turnLabel.GetComponent<TextMesh>().color = blue_color;
			attackButton.image.color = blue_color;
			spawnButton.image.color = blue_color;
			moveButton.image.color = blue_color;
			drawButton.image.color = blue_color;
			forfeitButton.image.color = blue_color;
			statsButton.image.color = blue_color;
			if (Spawner.blueClones.Count == 0){
				moveButton.interactable = false;
				attackButton.interactable = false;
			} else {
				moveButton.interactable = true;
				if (Spawner.redClones.Count != 0 && blueArmed)
					attackButton.interactable = true;
				else
					attackButton.interactable = false;
			}
		}
		cannonButton.interactable = true;
		catapultButton.interactable = true;
		wizardButton.interactable = true;
		troopButton.interactable = true;
		woodButton.interactable = true;
		stoneButton.interactable = true;
		powerUpButton.interactable = true;
		powerUpAttackButton.interactable = true;
		offensiveButton.interactable = true;
		defensiveButton.interactable = true;
		statsButton.interactable = true;
		if (Spawner.blueClones.Count == 0 && Spawner.redClones.Count == 0) {
			statsButton.interactable = false;
			statsButton.image.color = grey_color;
		}
		//REACTIVATE TURN SELECT SO IT ISNT HIDDEN
		turnCanvas.SetActive (true);
	}

	public void hideTurnCanvas(){
		turnCanvas.SetActive (false);
	}
	public IEnumerator smallDelay() {
		inCoroutine = true;
		yield return new WaitForSeconds(0.5f);
		inCoroutine = false;
	}
	public void selectedSpawnObject(){
		spawnSelectCanvas.SetActive (false);
		spawnSelectCanvas_Defensive.SetActive (false);
		reticle.SetActive (true);
		StartCoroutine (smallDelay ());
		GameState = GameStates.spawn;
	}
	public void onSpawnSelect(){
		hideTurnCanvas ();
		if (teamColor == "red") {
			spawnSelectText.color = red_color;
			spawnSelectText_Offensive.color = red_color;
			spawnTypeSelectText.color = red_color;
			cannonButton.image.color = red_color;
			catapultButton.image.color = red_color;
			wizardButton.image.color = red_color;
			troopButton.image.color = red_color;
			woodButton.image.color = red_color;
			stoneButton.image.color = red_color;
			powerUpButton.image.color = red_color;
			powerUpAttackButton.image.color = red_color;
			offensiveButton.image.color = red_color;
			defensiveButton.image.color = red_color;
			spawnSelectBackButton.image.color = red_color;
			spawnSelectBackButton_Defensive.image.color = red_color;
			cannonButtonAvailableText.text = "Available: "+UnlockedResourcesRed[(int)Resources.cannon].ToString();
			catapultButtonAvailableText.text = "Available: "+UnlockedResourcesRed[(int)Resources.catapult].ToString();
			wizardButtonAvailableText.text = "Available: "+UnlockedResourcesRed[(int)Resources.wizard].ToString();
			troopButtonAvailableText.text = "Available: "+UnlockedResourcesRed[(int)Resources.troops].ToString();
			woodButtonAvailableText.text = "Available: "+UnlockedResourcesRed[(int)Resources.woodWall].ToString();
			stoneButtonAvailableText.text = "Available: "+UnlockedResourcesRed[(int)Resources.stoneWall].ToString();
			powerUpButtonAvailableText.text = "Available: "+UnlockedResourcesRed[(int)Resources.powerUp].ToString();
			powerUpAttackButtonAvailableText.text = "Available: "+UnlockedResourcesRed[(int)Resources.powerUpAttack].ToString();
			if (cannonButtonAvailableText.text == "Available: 0" && catapultButtonAvailableText.text == "Available: 0" && troopButtonAvailableText.text == "Available: 0" && wizardButtonAvailableText.text == "Available: 0"){
				offensiveButton.interactable = false;
				offensiveButton.image.color = grey_color;
			}
			if (woodButtonAvailableText.text == "Available: 0" && stoneButtonAvailableText.text == "Available: 0" && powerUpButtonAvailableText.text == "Available: 0" && powerUpAttackButtonAvailableText.text == "Available: 0"){
				defensiveButton.interactable = false;
				defensiveButton.image.color = grey_color;
			}
		} else {
			spawnSelectText.color = blue_color;
			spawnSelectText_Offensive.color = blue_color;
			spawnTypeSelectText.color = blue_color;
			cannonButton.image.color = blue_color;
			catapultButton.image.color = blue_color;
			wizardButton.image.color = blue_color;
			troopButton.image.color = blue_color;
			woodButton.image.color = blue_color;
			stoneButton.image.color = blue_color;
			powerUpButton.image.color = blue_color;
			powerUpAttackButton.image.color = blue_color;
			offensiveButton.image.color = blue_color;
			defensiveButton.image.color = blue_color;
			spawnSelectBackButton.image.color = blue_color;
			spawnSelectBackButton_Defensive.image.color = blue_color;
			cannonButtonAvailableText.text = "Available: "+UnlockedResourcesBlue[(int)Resources.cannon].ToString();
			catapultButtonAvailableText.text = "Available: "+UnlockedResourcesBlue[(int)Resources.catapult].ToString();
			wizardButtonAvailableText.text = "Available: "+UnlockedResourcesBlue[(int)Resources.wizard].ToString();
			troopButtonAvailableText.text = "Available: "+UnlockedResourcesBlue[(int)Resources.troops].ToString();
			woodButtonAvailableText.text = "Available: "+UnlockedResourcesBlue[(int)Resources.woodWall].ToString();
			stoneButtonAvailableText.text = "Available: "+UnlockedResourcesBlue[(int)Resources.stoneWall].ToString();
			powerUpButtonAvailableText.text = "Available: "+UnlockedResourcesBlue[(int)Resources.powerUp].ToString();
			powerUpAttackButtonAvailableText.text = "Available: "+UnlockedResourcesBlue[(int)Resources.powerUpAttack].ToString();
			if (cannonButtonAvailableText.text == "Available: 0" && catapultButtonAvailableText.text == "Available: 0" && troopButtonAvailableText.text == "Available: 0" && wizardButtonAvailableText.text == "Available: 0"){
				offensiveButton.interactable = false;
				offensiveButton.image.color = grey_color;
			}
			if (woodButtonAvailableText.text == "Available: 0" && stoneButtonAvailableText.text == "Available: 0" && powerUpButtonAvailableText.text == "Available: 0" && powerUpAttackButtonAvailableText.text == "Available: 0"){
				defensiveButton.interactable = false;
				defensiveButton.image.color = grey_color;
			}
		}
		if (cannonButtonAvailableText.text == "Available: 0") {
			cannonButton.interactable = false;
			cannonButton.image.color = grey_color;
		}
		if (catapultButtonAvailableText.text == "Available: 0") {
			catapultButton.interactable = false;
			catapultButton.image.color = grey_color;
		}
		if (wizardButtonAvailableText.text == "Available: 0") {
			wizardButton.interactable = false;
			wizardButton.image.color = grey_color;
		}
		if (troopButtonAvailableText.text == "Available: 0") {
			troopButton.interactable = false;
			troopButton.image.color = grey_color;
		}
		if (woodButtonAvailableText.text == "Available: 0") {
			woodButton.interactable = false;
			woodButton.image.color = grey_color;
		}
		if (stoneButtonAvailableText.text == "Available: 0") {
			stoneButton.interactable = false;
			stoneButton.image.color = grey_color;
		}
		if (powerUpButtonAvailableText.text == "Available: 0") {
			powerUpButton.interactable = false;
			powerUpButton.image.color = grey_color;
		}
		if (powerUpAttackButtonAvailableText.text == "Available: 0") {
			powerUpAttackButton.interactable = false;
			powerUpAttackButton.image.color = grey_color;
		}
		//spawnSelectCanvas.SetActive (true);
		spawnTypeSelect.SetActive (true);
		//handle spawning for one team

	}

	//Child functions for spawn selecting:
		public void onCannonButton(){
			spawningObject = SpawnablePrefabs [(int)Resources.cannon];
			if (teamColor == "red")
				UnlockedResourcesRed [(int)Resources.cannon]--;
			else
				UnlockedResourcesBlue [(int)Resources.cannon]--;
			selectedSpawnObject ();
		}
		public void onCatapultButton(){
			spawningObject = SpawnablePrefabs [(int)Resources.catapult];
			if (teamColor == "red")
				UnlockedResourcesRed [(int)Resources.catapult]--;
			else
				UnlockedResourcesBlue [(int)Resources.catapult]--;
			selectedSpawnObject ();
		}
		public void onWizardButton(){
			spawningObject = SpawnablePrefabs [(int)Resources.wizard];
			if (teamColor == "red")
				UnlockedResourcesRed [(int)Resources.wizard]--;
			else
				UnlockedResourcesBlue [(int)Resources.wizard]--;
			selectedSpawnObject ();
		}
		public void onTroopButton(){
			spawningObject = SpawnablePrefabs [(int)Resources.troops];
			if (teamColor == "red")
				UnlockedResourcesRed [(int)Resources.troops]--;
			else
				UnlockedResourcesBlue [(int)Resources.troops]--;
			selectedSpawnObject ();
		}
		public void onWoodButton(){
			spawningObject = SpawnablePrefabs [(int)Resources.woodWall];
			if (teamColor == "red")
				UnlockedResourcesRed [(int)Resources.woodWall]--;
			else
				UnlockedResourcesBlue [(int)Resources.woodWall]--;
			selectedSpawnObject ();
		}
		public void onStoneButton(){
			spawningObject = SpawnablePrefabs [(int)Resources.stoneWall];
			if (teamColor == "red")
				UnlockedResourcesRed [(int)Resources.stoneWall]--;
			else
				UnlockedResourcesBlue [(int)Resources.stoneWall]--;
			selectedSpawnObject ();
		}
		public void onPowerUpButton(){
			spawningObject = SpawnablePrefabs [(int)Resources.powerUp];
			if (teamColor == "red")
				UnlockedResourcesRed [(int)Resources.powerUp]--;
			else
				UnlockedResourcesBlue [(int)Resources.powerUp]--;
			selectedSpawnObject ();
		}
		public void onPowerUpAttackButton(){
			spawningObject = SpawnablePrefabs [(int)Resources.powerUpAttack];
			if (teamColor == "red")
				UnlockedResourcesRed [(int)Resources.powerUpAttack]--;
			else
				UnlockedResourcesBlue [(int)Resources.powerUpAttack]--;
			selectedSpawnObject ();
		}
		public void onSelectBack(){
			spawnSelectCanvas.SetActive (false);
			turnCanvas.SetActive (true);
		}
		public void onSelectBack_Defensive(){
			spawnSelectCanvas_Defensive.SetActive (false);
			turnCanvas.SetActive (true);
		}

		public void onSpawnTypeSelect(string type){
			spawnTypeSelect.SetActive (false);
			if (type == "offensive")
				spawnSelectCanvas.SetActive (true);
			else if (type == "defensive")
				spawnSelectCanvas_Defensive.SetActive (true);
		}

	public void onMoveSelect(){
		hideTurnCanvas ();
		StartCoroutine (smallDelay ());
		reticle.SetActive (true);
		GameState = GameStates.move;
		//handle moving objects

	}
	public void onAttackSelect(){
		hideTurnCanvas ();
		StartCoroutine (smallDelay ());
		reticle.SetActive (true);
		GameState = GameStates.attack;
		//handle attacking

	}
	public void onDrawSelect(){
		GameState = GameStates.draw;
		hideTurnCanvas ();
		//handle unlocking

	}
	public IEnumerator showStats(){
		turnCanvas.SetActive (false);
		foreach (Transform selectedObject in Spawner.redClones) {
			string message = "";
			if (selectedObject.gameObject.tag == "Cannon" || selectedObject.gameObject.tag == "Catapult"){
				message += "Attack: "+ ((selectedObject.gameObject.tag == "Cannon") ? "4" : "2");
				if (selectedObject.GetComponent<ObjectHealth>().attackBoosted)
					message += " <color=yellow>x2 Boosted</color>";
				message += "\n";
			}
			message += "Defense: "+selectedObject.GetComponent<ObjectHealth>().health.ToString();
			if (selectedObject.GetComponent<ObjectHealth>().healthBoosted)
				message += " <color=green>x2 Boosted</color>";
			StartCoroutine(displayMessageOver(selectedObject, message));
		}
		foreach (Transform selectedObject in Spawner.blueClones) {
			string message = "";
			if (selectedObject.gameObject.tag == "Cannon" || selectedObject.gameObject.tag == "Catapult"){
				message += "Attack: "+ ((selectedObject.gameObject.tag == "Cannon") ? "4" : "2");
				if (selectedObject.GetComponent<ObjectHealth>().attackBoosted)
					message += " <color=yellow>x2 Boosted</color>";
				message += "\n";
			}
			message += "Defense: "+selectedObject.GetComponent<ObjectHealth>().health.ToString();
			if (selectedObject.GetComponent<ObjectHealth>().healthBoosted)
				message += " <color=green>x2 Boosted</color>";
			StartCoroutine(displayMessageOver(selectedObject, message));
		}
		yield return new WaitForSeconds(4.0f);
		CleanUp ();
		turnCanvas.SetActive (true);
	}
	public void onShowStats(){

		StartCoroutine (showStats ());

	}
//	public void onTurnEnd(){
//		GameState = GameStates.error;
//		turnCount++;
//		if (teamColor == "blue") {
//			teamColor = "red";
//			reticle_text.color = red_color;
//			blueOutline.SetActive(false);
//			redOutline.SetActive(true);
//		} else if (teamColor == "red") {
//			teamColor = "blue";
//			reticle_text.color = blue_color;
//			blueOutline.SetActive(true);
//			redOutline.SetActive(false);
//		}
//		onTurnStart ();
//	}
}
