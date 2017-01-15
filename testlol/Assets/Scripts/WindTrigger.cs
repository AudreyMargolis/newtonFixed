using UnityEngine;
using System.Collections;

public class WindTrigger : MonoBehaviour
{
    public enum WindDirection {UP,DOWN,LEFT,RIGHT};
    public WindDirection windDir;
    public float windForce;
	// Use this for initialization
	void Start ()
    {
	
	}
	
	// Update is called once per frame
	void Update ()
    {
	
	}
    void OnTriggerStay(Collider other)
    {
        if (other.gameObject.tag == "Ball")
        {
            if (windDir == WindDirection.UP)
                other.gameObject.GetComponent<Rigidbody>().AddForce(new Vector3(0, 1, 0) * windForce);
            if (windDir == WindDirection.LEFT)
                other.gameObject.GetComponent<Rigidbody>().AddForce(new Vector3(1, 0, 0) * windForce);
            if (windDir == WindDirection.RIGHT)
                other.gameObject.GetComponent<Rigidbody>().AddForce(new Vector3(-1, 0, 0) * windForce);
            if (windDir == WindDirection.DOWN)
                other.gameObject.GetComponent<Rigidbody>().AddForce(new Vector3(0, -1, 0) * windForce);
        }
    }
}
