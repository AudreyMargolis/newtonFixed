using UnityEngine;
using System.Collections;

public class ColliderFolllow : MonoBehaviour {
    public GameObject ball;
	// Use this for initialization
	void Start ()
    {
	
	}
	
	// Update is called once per frame
	void Update () {
        transform.position = new Vector3(ball.transform.position.x, ball.transform.position.y, transform.position.z);
	}
}
