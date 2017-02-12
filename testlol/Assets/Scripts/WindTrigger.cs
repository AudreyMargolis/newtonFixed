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
	
	
    void OnTriggerStay2D(Collider2D other)
    {
        if (other.gameObject.GetComponent<Rigidbody2D>())
        {
            if(!isRunning)
            StartCoroutine(Wind(other.gameObject));
        }
    }
    IEnumerator Wind(GameObject other)
    {
        isRunning = true;
            if (windDir == WindDirection.UP)
                other.GetComponent<Rigidbody2D>().AddForce(new Vector2(0, 1) * windForce);
            if (windDir == WindDirection.LEFT)
                other.GetComponent<Rigidbody2D>().AddForce(new Vector2(1, 0) * windForce);
            if (windDir == WindDirection.RIGHT)
                other.GetComponent<Rigidbody2D>().AddForce(new Vector2(-1, 0) * windForce);
            if (windDir == WindDirection.DOWN)
                other.GetComponent<Rigidbody2D>().AddForce(new Vector2(0, -1) * windForce);
            yield return new WaitForSeconds(0.1f);
        isRunning = false;
    }
}
