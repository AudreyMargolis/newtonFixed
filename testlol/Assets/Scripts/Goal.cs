using UnityEngine;
using System.Collections;

public class Goal : MonoBehaviour
{
   
    public float scoreMod;
    bool scored;
    AudioSource audio;
	// Use this for initialization
	void Start ()
    {
       
        if (gameObject.tag == "GoalGood")
            scoreMod = 2f;
        if (gameObject.tag == "GoalMeh")
            scoreMod = 1.5f;
        if (gameObject.tag == "GoalBad")
            scoreMod = 1f;
        scored = false;
        audio = GetComponent<AudioSource>();

    }
	
	// Update is called once per frame
	void Update ()
    {
	
	}
    void OnTriggerStay (Collider other)
    {
        if (other.gameObject.tag == "Ball")
        {
            Vector3 velocity = other.gameObject.GetComponent<Rigidbody>().velocity;
            if (Vector3.Distance(velocity, Vector3.zero) <= .3f)
            {
                if (!scored)
                {
                    GameObject cam = GameObject.FindGameObjectWithTag("MainCamera");
                    cam.GetComponent<AudioSource>().Stop();
                    audio.Play();
                    GameManager gm = (GameManager)FindObjectOfType(typeof(GameManager));
                    gm.Goal(scoreMod);
                    scored = true;
                }
            }
        }
    }
}
