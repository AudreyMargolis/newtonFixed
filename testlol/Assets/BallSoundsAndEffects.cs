using UnityEngine;
using System.Collections;

public class BallSoundsAndEffects : MonoBehaviour {
    AudioSource audio;
	// Use this for initialization
	void Start ()
    {
        audio = GetComponent<AudioSource>();
	}
	
	// Update is called once per frame
	void Update () {
	
	}
    void OnCollisionEnter(Collision other)
    {
        audio.Play();
    }
}
