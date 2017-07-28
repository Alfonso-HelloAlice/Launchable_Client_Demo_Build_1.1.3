using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Vuforia;

public class animationForNow : MonoBehaviour {

	private Animator phone;
	private Animator email;

	public Button bt1;
	public Button bt2;

	void Start()
	{
//		name = GameObject.FindObjectOfType<TrackableEventHandler> ().targetName;

//		bt1 = GameObject.Find ("Canvas/phone").GetComponent<Button> ();
//		bt2 = GameObject.Find ("Canvas/email").GetComponent<Button> ();

		Debug.Log (bt1);

		phone = bt1.GetComponent<Animator> ();
		email = bt2.GetComponent<Animator> ();

	}

	// Update is called once per frame
	void Update () {

		if (GameObject.Find ("Launchable Business Cards").GetComponent<TrackableEventHandler> ().animationTrigger == true) {


			phone.Play ("phoneAnimation");
			email.Play ("emailAnimation");


		} else if (GameObject.Find ("Launchable Business Cards").GetComponent<TrackableEventHandler> ().animationTrigger == false) {


			phone.Play ("phoneAnimation", -1, 0f);
			email.Play ("emailAnimation", -1, 0f);
		}
//
//		else if (GameObject.Find ("Pandera Matt Kelberman").GetComponent<TrackableEventHandler> ().animationTrigger == true) {
//			phone.Play ("phoneAnimation");
//			email.Play ("emailAnimation");
//
//
//		} else if (GameObject.Find ("Pandera Matt Kelberman").GetComponent<TrackableEventHandler> ().animationTrigger == false) {
//			phone.Play ("phoneAnimation", -1, 0f);
//			email.Play ("emailAnimation", -1, 0f);
//		}
//
//		else if (GameObject.Find ("Transient Path").GetComponent<TrackableEventHandler> ().animationTrigger == true) {
//			phone.Play ("phoneAnimation");
//			email.Play ("emailAnimation");
//
//
//		} else if (GameObject.Find ("Transient Path").GetComponent<TrackableEventHandler> ().animationTrigger == false) {
//			phone.Play ("phoneAnimation", -1, 0f);
//			email.Play ("emailAnimation", -1, 0f);
//		}
//		else if (GameObject.Find ("Caleb Edwards").GetComponent<TrackableEventHandler> ().animationTrigger == true) {
//			phone.Play ("phoneAnimation");
//			email.Play ("emailAnimation");
//
//
//		} else if (GameObject.Find ("Caleb Edwards").GetComponent<TrackableEventHandler> ().animationTrigger == false) {
//			phone.Play ("phoneAnimation", -1, 0f);
//			email.Play ("emailAnimation", -1, 0f);
//		}
//		else if (GameObject.Find ("Tech Law Firm").GetComponent<TrackableEventHandler> ().animationTrigger == true) {
//			phone.Play ("phoneAnimation");
//			email.Play ("emailAnimation");
//
//
//		} else if (GameObject.Find ("Tech Law Firm").GetComponent<TrackableEventHandler> ().animationTrigger == false) {
//			phone.Play ("phoneAnimation", -1, 0f);
//			email.Play ("emailAnimation", -1, 0f);
//		}
//		else if (GameObject.Find ("Grow Fl Business").GetComponent<TrackableEventHandler> ().animationTrigger == true) {
//			phone.Play ("phoneAnimation");
//			email.Play ("emailAnimation");
//
//
//		} else if (GameObject.Find ("Grow Fl Business").GetComponent<TrackableEventHandler> ().animationTrigger == false) {
//			phone.Play ("phoneAnimation", -1, 0f);
//			email.Play ("emailAnimation", -1, 0f);
//		}
//		else if (GameObject.Find ("Air Logo").GetComponent<TrackableEventHandler> ().animationTrigger == true) {
//			phone.Play ("phoneAnimation");
//			email.Play ("emailAnimation");
//
//
//		} else if (GameObject.Find ("Air Logo").GetComponent<TrackableEventHandler> ().animationTrigger == false) {
//			phone.Play ("phoneAnimation", -1, 0f);
//			email.Play ("emailAnimation", -1, 0f);
//		}
		if (GameObject.Find ("Dollar Bill").GetComponent<TrackableEventHandler> ().animationTrigger == true) {
			phone.Play ("phoneAnimation");
			email.Play ("emailAnimation");


		} else if (GameObject.Find ("Dollar Bill").GetComponent<TrackableEventHandler> ().animationTrigger == false) {
			phone.Play ("phoneAnimation", -1, 0f);
			email.Play ("emailAnimation", -1, 0f);
		}
//		else if (GameObject.Find ("OOTD").GetComponent<TrackableEventHandler> ().animationTrigger == true) {
//			phone.Play ("phoneAnimation");
//			email.Play ("emailAnimation");
//
//
//		} else if (GameObject.Find ("OOTD").GetComponent<TrackableEventHandler> ().animationTrigger == false) {
//			phone.Play ("phoneAnimation", -1, 0f);
//			email.Play ("emailAnimation", -1, 0f);
//		}
//
//		else if (GameObject.Find ("Parker Kane").GetComponent<TrackableEventHandler> ().animationTrigger == true) {
//			phone.Play ("phoneAnimation");
//			email.Play ("emailAnimation");
//
//
//		} else if (GameObject.Find ("Parker Kane").GetComponent<TrackableEventHandler> ().animationTrigger == false) {
//			phone.Play ("phoneAnimation", -1, 0f);
//			email.Play ("emailAnimation", -1, 0f);
//		}		
//		else if (GameObject.Find ("Ghost Project").GetComponent<TrackableEventHandler> ().animationTrigger == true) {
//			phone.Play ("phoneAnimation");
//			email.Play ("emailAnimation");
//
//
//		} else if (GameObject.Find ("Ghost Project").GetComponent<TrackableEventHandler> ().animationTrigger == false) {
//			phone.Play ("phoneAnimation", -1, 0f);
//			email.Play ("emailAnimation", -1, 0f);
//		}
//			
		if (GameObject.Find ("Pals").GetComponent<TrackableEventHandler> ().animationTrigger == true) {

			print ("i am here bitch~");

			phone.Play ("phoneAnimation");
			email.Play ("emailAnimation");


		} else if (GameObject.Find ("Pals").GetComponent<TrackableEventHandler> ().animationTrigger == false) {

			phone.Play ("phoneAnimation", -1, 0f);
			email.Play ("emailAnimation", -1, 0f);
		}

//		else if (GameObject.Find ("Timbr").GetComponent<TrackableEventHandler> ().animationTrigger == true) {
//			phone.Play ("phoneAnimation");
//			email.Play ("emailAnimation");
//
//
//		} else if (GameObject.Find ("Timbr").GetComponent<TrackableEventHandler> ().animationTrigger == false) {
//			phone.Play ("phoneAnimation", -1, 0f);
//			email.Play ("emailAnimation", -1, 0f);
//		}
	}
}
