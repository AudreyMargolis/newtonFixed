using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GetScore : MonoBehaviour
{
    GameManager gm;
	// Use this for initialization
	void Start ()
    {
        gm = (GameManager)FindObjectOfType(typeof(GameManager));
        GetComponent<Text>().text = "" + gm.runningScore;
    }
   
}
