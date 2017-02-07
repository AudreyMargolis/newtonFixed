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
    void OnCollisionEnter2D(Collision2D other)
    {
        audio.Play();
        ContactPoint2D contact = other.contacts[0];
        Quaternion rot = Quaternion.FromToRotation(Vector2.up, contact.normal);
        Vector2 pos = contact.point;

        if (gameObject.GetComponent<Rigidbody2D>().velocity.magnitude < 5)
            Instantiate(sparkMid, pos, rot);
        else
        {
            Instantiate(sparkHigh, pos, rot);
        }
    }
}
