using UnityEngine;
using System.Collections;
using LoLSDK;
public class BallSoundsAndEffects : MonoBehaviour {
    //AudioSource audio;
    // Use this for initialization
    public GameObject sparkMid, sparkHigh;
	void Start ()
    {
        //audio = GetComponent<AudioSource>();
	}
    void OnCollisionEnter2D(Collision2D other)
    {
        ContactPoint2D contact = other.contacts[0];
        Quaternion rot = Quaternion.FromToRotation(Vector2.up, contact.normal);
        Vector2 pos = contact.point;

        if (gameObject.GetComponent<Rigidbody2D>().velocity.magnitude < 5)
        {
            Instantiate(sparkMid, pos, rot);
            LOLSDK.Instance.PlaySound("impact hit ver 2.mp3");
        }
        else
        {
            Instantiate(sparkHigh, pos, rot);
            LOLSDK.Instance.PlaySound("max impact 100% v1.mp3");
        }
    }
}
