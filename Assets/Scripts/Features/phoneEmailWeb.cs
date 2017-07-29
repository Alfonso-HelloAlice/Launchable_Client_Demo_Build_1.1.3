using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class phoneEmailWeb : MonoBehaviour {

	/* ------------------------------------------------------------------------- */
	// open facebook page
	public void openTechandBeerFacebookPage ()
	{
		float startTime;
		startTime = Time.timeSinceLevelLoad;

		// open the facebook app in IOS
		Application.OpenURL("fb://page/?id=350989365287405");
		// open the facebook app in Andorid
		Application.OpenURL ("fb://page/350989365287405");

		if (Time.timeSinceLevelLoad - startTime <= 1f)
		{
			//fail. Open safari.
			Application.OpenURL("https://www.facebook.com/Orlandotechandbeer/");
		}
	}

	/* ------------------------------------------------------------------------- */
	// open webpage 
	public void openLaunchableWebPage ()
	{
		Application.OpenURL("https://teamlaunchable.com/");
	}

	public void openPanderaWebPage ()
	{
		Application.OpenURL ("http://panderasystems.com/");
	}

	public void TeamLaunchableSite ()
	{
		Application.OpenURL ("https://TeamLaunchable.com");
	}


	/* ------------------------------------------------------------------------- */
	// phone call

	public void Alfred_LaunchablePhoneNumber ()
	{
		Application.OpenURL ("tel://4079063034");
	}

	/* ------------------------------------------------------------------------- */
	// open email 
	public void Alfred_Email ()
	{
		string email = "Alfred@TeamLaunchable.com";
		string subject = MyEscapeURL("cool dude");
		string body = MyEscapeURL("When can I get my own demo?\r\nBest Reagards");
		Application.OpenURL("mailto:" + email + "?subject=" + subject + "&body=" + body);
	}

	string MyEscapeURL (string url)
	{
		return WWW.EscapeURL(url).Replace("+","%20");
	}
	/* ------------------------------------------------------------------------- */

}