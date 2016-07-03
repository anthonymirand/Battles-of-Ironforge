using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using Vuforia;
using UnityEngine.UI;

public class Spawner : MonoBehaviour {

	private Collider mSpawningCollider;
	
	public static List<Transform> redClones;
	public static List<Transform> blueClones;

	private TrackableBehaviour mTrackableBehaviour;
	private bool hasSelected = false;
	public static string hasMoveEnded = "false";
	public static string hasAttackEnded = "false";
	private Transform selectedObject;
	private Transform enemyObject;

	public GameObject redSide;
	public GameObject blueSide;
	public GameObject messageCanvas;
	public GameObject redTower;
	public GameObject blueTower;
	public Text messageText;
	public static string hasSpawned = "false";

	
	// Use this for initialization
	void Start () {
		mSpawningCollider = transform.FindChild("SpawningPlane").GetComponent<TerrainCollider>();
		mTrackableBehaviour = GetComponent<TrackableBehaviour>();
		redSide.SetActive (false);
		blueSide.SetActive (false);
		messageCanvas.SetActive (false);
		redClones = new List<Transform>();
		blueClones = new List<Transform>();
	}
	
	// Update is called once per frame
	void Update () {
		
	}
	
	protected virtual void OnEnable()
	{
		// Hook into the OnFingerTap event
		Lean.LeanTouch.OnFingerTap += OnFingerTap;
	}
	
	protected virtual void OnDisable()
	{
		// Unhook into the OnFingerTap event
		Lean.LeanTouch.OnFingerTap -= OnFingerTap;
	}

	IEnumerator ShowMessage (string message, float delay) {
		if (GameController.teamColor == "red") {
			messageText.color = new Color (183.0f / 255.0f, 19.0f / 255.0f, 28.0f / 255.0f);
		} else {
			messageText.color = new Color(69.0f/255.0f, 97.0f/255.0f, 222.0f/255.0f);
		}
		messageText.text = message;
		messageCanvas.SetActive (true);
		yield return new WaitForSeconds(delay);
		messageCanvas.SetActive (false);
	}
	
	public void OnFingerTap(Lean.LeanFinger finger)
	{
		// Does the prefab exist?
		if (GameController.GameState == GameController.GameStates.spawn && !GameController.inCoroutine)
		{
				// Clone the prefab, and place it on the spawning plane where the finger was tapped
			Transform cam = Camera.main.transform;
			Ray hit = new Ray(cam.position, cam.forward);
			RaycastHit hitResult;
			
			if (mSpawningCollider.Raycast(hit, out hitResult, 1500.0f))
			{

				float redDist = Vector3.Distance(redTower.transform.position, hitResult.point);
				float blueDist = Vector3.Distance(blueTower.transform.position, hitResult.point);

				if (redDist < blueDist){
					if (GameController.teamColor == "red"){
						Transform clone = Instantiate(GameController.spawningObject) as Transform;

						//clone.GetComponent<Bullet>().target = dragon.transform;
						clone.transform.position = hitResult.point;

						// Set image target as parent
						clone.transform.parent = transform;
						
						// Set image target's TrackableBehaviour component as parent (in the event that the above does not work)
						clone.transform.parent = mTrackableBehaviour.transform;
						
						clone.transform.LookAt(blueTower.transform);

						if (clone.gameObject.tag == "PowerUp" || clone.gameObject.tag == "PowerUpAttack")
							clone.GetComponent<PowerUpBehavior>().teamColor = "red";
						
						redClones.Add(clone);

						hasSpawned = "true";
						//StartCoroutine(GameController.onTurnEndDelay(2.5f));
					}
					else{
						Debug.Log ("You can't spawn on the other team's side!");
						StartCoroutine(ShowMessage("You can't spawn on the other team's side!", 2));
					}
				}
				else {
					if (GameController.teamColor == "blue"){
						Transform clone = Instantiate(GameController.spawningObject) as Transform;
						//clone.GetComponent<Bullet>().target = dragon.transform;
						clone.transform.position = hitResult.point;
						
						// Set image target as parent
						clone.transform.parent = transform;
						
						// Set image target's TrackableBehaviour component as parent (in the event that the above does not work)
						clone.transform.parent = mTrackableBehaviour.transform;
						
						clone.transform.LookAt(redTower.transform);

						if (clone.gameObject.tag == "PowerUp" || clone.gameObject.tag == "PowerUpAttack")
							clone.GetComponent<PowerUpBehavior>().teamColor = "blue";
						
						blueClones.Add(clone);
						hasSpawned = "true";
						//StartCoroutine(GameController.onTurnEndDelay(2.5f));
					}
					else{
						Debug.Log ("You can't spawn on the other team's side!");
						StartCoroutine(ShowMessage("You can't spawn on the other team's side!", 2));
					}
				}
			}
		}
		if (GameController.GameState == GameController.GameStates.move && !GameController.inCoroutine) {
			if (!hasSelected){
				Transform cam = Camera.main.transform;
				Ray hit = new Ray(cam.position, cam.forward);
				RaycastHit hitResult;
				
				if (mSpawningCollider.Raycast(hit, out hitResult, 1500.0f))
				{
					float redDist = Vector3.Distance(redTower.transform.position, hitResult.point);
					float blueDist = Vector3.Distance(blueTower.transform.position, hitResult.point);

					if (redDist < blueDist){
						if (GameController.teamColor == "red"){
							float minDistance = Mathf.Infinity;
							foreach (Transform selectableObject in redClones){
								float curDistance = Vector3.Distance(selectableObject.position, hitResult.point);
								if (curDistance < minDistance){
									selectedObject = selectableObject;
									minDistance = curDistance;
								}
							}
							StartCoroutine(ShowMessage("Object Selected! Tap again to move.", 2));
							hasSelected = true;
						}
						else{
							StartCoroutine(ShowMessage("You can't select objects on the other team's side!", 2));
						}
					} else {
						if (GameController.teamColor == "blue"){
							float minDistance = Mathf.Infinity;
							foreach (Transform selectableObject in blueClones){
								float curDistance = Vector3.Distance(selectableObject.position, hitResult.point);
								if (curDistance < minDistance){
									selectedObject = selectableObject;
									minDistance = curDistance;
								}
							}
							StartCoroutine(ShowMessage("Object Selected! Tap again to move.", 2));
							hasSelected = true;
						}
						else{
							StartCoroutine(ShowMessage("You can't select objects on the other team's side!", 2));
						}
					}
				}
			} else {
				Transform cam = Camera.main.transform;
				Ray hit = new Ray(cam.position, cam.forward);
				RaycastHit hitResult;
				
				if (mSpawningCollider.Raycast(hit, out hitResult, 1500.0f))
				{
					float redDist = Vector3.Distance(redTower.transform.position, hitResult.point);
					float blueDist = Vector3.Distance(blueTower.transform.position, hitResult.point);

					if (redDist < blueDist){
						if (GameController.teamColor == "red"){

							selectedObject.transform.position = hitResult.point;
							selectedObject.transform.LookAt(blueTower.transform);
							hasSelected = false;
							hasMoveEnded = "true";
						}
						else{
							StartCoroutine(ShowMessage("You can't move objects onto the other team's side!", 2));
						}
					} else {
						if (GameController.teamColor == "blue"){
							selectedObject.transform.position = hitResult.point;
							selectedObject.transform.LookAt(redTower.transform);
							hasSelected = false;
							hasMoveEnded = "true";
						}
						else{
							StartCoroutine(ShowMessage("You can't move objects onto the other team's side!", 2));
						}
					}
				}
			}
		}
		if (GameController.GameState == GameController.GameStates.attack && !GameController.inCoroutine) {
			if (!hasSelected){
				Transform cam = Camera.main.transform;
				Ray hit = new Ray(cam.position, cam.forward);
				RaycastHit hitResult;
				
				if (mSpawningCollider.Raycast(hit, out hitResult, 1500.0f))
				{
					float redDist = Vector3.Distance(redTower.transform.position, hitResult.point);
					float blueDist = Vector3.Distance(blueTower.transform.position, hitResult.point);
					
					if (redDist < blueDist){
						if (GameController.teamColor == "red"){
							float minDistance = Mathf.Infinity;
							foreach (Transform selectableObject in redClones){
								float curDistance = Vector3.Distance(selectableObject.position, hitResult.point);
								if (curDistance < minDistance && (selectableObject.gameObject.tag == "Cannon" || selectableObject.gameObject.tag == "Catapult")){
									selectedObject = selectableObject;
									minDistance = curDistance;
								}
							}
							StartCoroutine(ShowMessage("Object Selected! Tap again to select enemy object.", 2));
							hasSelected = true;
						}
						else{
							StartCoroutine(ShowMessage("You can't select objects on the other team's side!", 2));
						}
					} else {
						if (GameController.teamColor == "blue"){
							float minDistance = Mathf.Infinity;
							foreach (Transform selectableObject in blueClones){
								float curDistance = Vector3.Distance(selectableObject.position, hitResult.point);
								if (curDistance < minDistance && (selectableObject.gameObject.tag == "Cannon" || selectableObject.gameObject.tag == "Catapult")){
									selectedObject = selectableObject;
									minDistance = curDistance;
								}
							}
							StartCoroutine(ShowMessage("Object Selected! Tap again to select enemy object.", 2));
							hasSelected = true;
						}
						else{
							StartCoroutine(ShowMessage("You can't select objects on the other team's side!", 2));
						}
					}
				}
			} else {
				Transform cam = Camera.main.transform;
				Ray hit = new Ray(cam.position, cam.forward);
				RaycastHit hitResult;
				
				if (mSpawningCollider.Raycast(hit, out hitResult, 1500.0f))
				{
					float redDist = Vector3.Distance(redTower.transform.position, hitResult.point);
					float blueDist = Vector3.Distance(blueTower.transform.position, hitResult.point);
					if (redDist > blueDist){
						if (GameController.teamColor == "red"){
							float minDistance = Mathf.Infinity;
							foreach (Transform selectableObject in blueClones){
								float curDistance = Vector3.Distance(selectableObject.position, hitResult.point);
								if (curDistance < minDistance){
									enemyObject = selectableObject;
									minDistance = curDistance;
								}
							}
							selectedObject.transform.LookAt(enemyObject.transform);
							selectedObject.GetComponent<WeaponBehavior>().fire(enemyObject);
							hasSelected = false;
							hasAttackEnded = "true";
						}
						else{
							StartCoroutine(ShowMessage("You can't attack your own objects!", 2));
						}
					} else {
						if (GameController.teamColor == "blue"){
							float minDistance = Mathf.Infinity;
							foreach (Transform selectableObject in redClones){
								float curDistance = Vector3.Distance(selectableObject.position, hitResult.point);
								if (curDistance < minDistance){
									enemyObject= selectableObject;
									minDistance = curDistance;
								}
							}
							selectedObject.transform.LookAt(enemyObject.transform);
							selectedObject.GetComponent<WeaponBehavior>().fire(enemyObject);
							hasSelected = false;
							hasAttackEnded = "true";
						}
						else{
							StartCoroutine(ShowMessage("You can't attack your own objects!", 2));
						}
					}
				}
			}
		}
	}
}
