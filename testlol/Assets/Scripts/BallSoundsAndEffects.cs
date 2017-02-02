using UnityEngine;
using System.Collections;

public class BallSoundsAndEffects : MonoBehaviour {
    AudioSource audio;
    // Use this for initialization
    public GameObject sparkMid, sparkHigh;
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
        ContactPoint contact = other.contacts[0];
        Quaternion rot = Quaternion.FromToRotation(Vector3.up, contact.normal);
        Vector3 pos = contact.point;

        if (gameObject.GetComponent<Rigidbody2D>().velocity.magnitude < 5)
            Instantiate(sparkMid, pos, rot);
        else
        {
            Instantiate(sparkHigh, pos, rot);
        }
    }
}
