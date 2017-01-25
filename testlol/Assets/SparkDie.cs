using UnityEngine;
using System.Collections;

public class SparkDie : MonoBehaviour {

	// Use this for initialization
	void Start () {
        Invoke("Die", 0.25f);
	}
	
	// Update is called once per frame
	void Update () {
	
	}
    void Die()
    {
        Destroy(gameObject);
    }
}
