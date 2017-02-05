using UnityEngine;
using System.Collections;

public class WindTrigger : MonoBehaviour
{
    public enum WindDirection {UP,DOWN,LEFT,RIGHT};
    public WindDirection windDir;
    public float windForce;
    bool isRunning;
    public string textureName = "_MainTex";
    public GameObject plane1, plane2;
    public Vector2 uvAnimationRate = new Vector2(0.0f, 1.0f);
    Vector2 uvOffset = Vector2.zero;
    float scrollSpeed = 0.25f;
    Renderer myRenderer1, myRenderer2;

	// Use this for initialization
	void Start ()
    {
        isRunning = false;
        myRenderer1 = plane1.GetComponent<Renderer>();
        myRenderer2 = plane2.GetComponent<Renderer>();

    }
	
	// Update is called once per frame
	void FixedUpdate ()
    {
        uvOffset += (uvAnimationRate * Time.deltaTime);
        myRenderer1.material.SetTextureOffset(textureName, uvOffset);
        myRenderer2.material.SetTextureOffset(textureName, uvOffset);
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
