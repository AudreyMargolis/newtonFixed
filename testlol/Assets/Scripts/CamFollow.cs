using UnityEngine;
using System.Collections;

public class CamFollow : MonoBehaviour
{
    public GameObject ball;
    public GameObject[] routePoints;
    GameManager gm;
    public float smooth = 1f;
    bool followPLayer, isRunning;
    int pointPos;
	// Use this for initialization
	void Start ()
    {
	    if (ball == null)
        {
            ball = GameObject.Find("Ball");
        }
        gm = (GameManager)FindObjectOfType(typeof(GameManager));
        followPLayer = false;
        isRunning = false;
        pointPos = 0;
	}
	
	// Update is called once per frame
	void Update ()
    {
        if (!gm.tutorialMode)
        {
            if (followPLayer)
                transform.position = new Vector3(ball.transform.position.x, ball.transform.position.y + 1, transform.position.z);
            else
            {
                if (pointPos < routePoints.Length && gm.playerControl == false)
                {
                    if (!isRunning)
                    {
                        StartCoroutine(MoveFunction(routePoints[pointPos]));
                    }
                }
                else
                {
                    StartCoroutine(ToBall());
                }
            }
        }
        /*if (Vector3.Distance(transform.position, ball.transform.position) > 1f)
        {
            transform.position = Vector3.Lerp(
           transform.position, new Vector3(ball.transform.position.x, ball.transform.position.y, transform.position.z),
           Time.deltaTime * smooth);
        }*/
    }
    public void TutorialMoveUpdate(Transform target)
    {
        StartCoroutine(TutMoveFunction(target));
    }
    IEnumerator MoveFunction(GameObject lerpTarget)
    {
        isRunning = true;
        float timeSinceStarted = 0f;
        while (Vector3.Distance(transform.position, lerpTarget.transform.position) > 0.1f)
        {
            timeSinceStarted += Time.deltaTime;
            transform.position = Vector3.Lerp(transform.position, new Vector3(lerpTarget.transform.position.x,
                lerpTarget.transform.position.y, transform.position.z), timeSinceStarted);
            yield return null;
            if (gm.playerControl)
                break;
        }
        isRunning = false;
        pointPos++;
    }
    IEnumerator ToBall()
    {
        isRunning = true;
        float timeSinceStarted = 0f;

        while (Vector3.Distance(transform.position, new Vector3(ball.transform.position.x, ball.transform.position.y + 1, transform.position.z)) > 0.1f)
        {
            timeSinceStarted += Time.deltaTime;
            transform.position = Vector3.Lerp(transform.position, new Vector3(ball.transform.position.x, ball.transform.position.y + 1, transform.position.z), timeSinceStarted);
            yield return null;
        }
        isRunning = false;
        followPLayer = true;
    }
    IEnumerator TutMoveFunction(Transform lerpTarget)
    {
        float timeSinceStarted = 0f;
        while (Vector3.Distance(transform.position, lerpTarget.position) > 0.1f)
        {
            timeSinceStarted += Time.deltaTime;
            transform.position = Vector3.Lerp(transform.position, new Vector3(lerpTarget.position.x,
                lerpTarget.position.y, transform.position.z), timeSinceStarted);
            yield return null;
            if (gm.playerControl)
                break;
        }
    }
}
