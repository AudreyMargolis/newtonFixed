using UnityEngine;
using System.Collections;

public class LookAt : MonoBehaviour {
    public GameObject paddle;
	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update ()
    {
        transform.LookAt(paddle.transform.position);
	}
}
