using UnityEngine;
using System.Collections;
using Vuforia;
using UnityEngine.UI;

public class VirtualButtonEventHandler : MonoBehaviour, IVirtualButtonEventHandler {

	public Light lt;

	// Use this for initialization
	void Start () {
        // Register for events on all virtual buttons that are a child of this image target
        VirtualButtonBehaviour[] vbs = GetComponentsInChildren<VirtualButtonBehaviour>();
        foreach (VirtualButtonBehaviour vb in vbs)
        {
            vb.RegisterEventHandler(this);
        }
	}
	
	// Update is called once per frame
	void Update () {
	
	}

    // Virtual button is pressed
    public void OnButtonPressed(VirtualButtonAbstractBehaviour vb)
    {
        Debug.Log("Button pressed: " + vb.VirtualButtonName);
		lt.intensity = Random.value;
    }

    // Virtual button is released
    public void OnButtonReleased(VirtualButtonAbstractBehaviour vb)
    {
        Debug.Log("Button released: " + vb.VirtualButtonName);

    }
}
