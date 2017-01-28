using UnityEngine;
using System.Collections;

public class WindTrigger : MonoBehaviour
{
    public enum WindDirection {UP,DOWN,LEFT,RIGHT};
    public WindDirection windDir;
    public float windForce;
    bool isRunning;
	// Use this for initialization
	void Start ()
    {
        isRunning = false;
	}
	
	// Update is called once per frame
	void Update ()
    {
	
	}
    void OnTriggerStay(Collider other)
    {
        if (other.gameObject.tag == "Ball")
        {
            if(!isRunning)
            StartCoroutine(Wind(other.gameObject));
        }
    }
    IEnumerator Wind(GameObject other)
    {
        isRunning = true;
            if (windDir == WindDirection.UP)
                other.GetComponent<Rigidbody>().AddForce(new Vector3(0, 1, 0) * windForce);
            if (windDir == WindDirection.LEFT)
                other.GetComponent<Rigidbody>().AddForce(new Vector3(1, 0, 0) * windForce);
            if (windDir == WindDirection.RIGHT)
                other.GetComponent<Rigidbody>().AddForce(new Vector3(-1, 0, 0) * windForce);
            if (windDir == WindDirection.DOWN)
                other.GetComponent<Rigidbody>().AddForce(new Vector3(0, -1, 0) * windForce);
            yield return new WaitForSeconds(0.1f);
        isRunning = false;
    }
}
