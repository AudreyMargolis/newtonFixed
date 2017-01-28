using UnityEngine;
using System.Collections;

public class PaddleBehavior : MonoBehaviour {
    public int charges;
    int pauses;
    public float force;
    public GameObject  gameManage, ball;
    public GameObject paddleCollider, lerpTarget;
    GameManager gm;
    public float rotSpeed = 10f;
    float lerpSpeed = 5f;
    public bool paused = false, grabbed = false;
    Vector3 savedVelocity;
    Vector3 savedAngularVelocity;
    public int maxForce = 1500;

    public Texture2D cursorTexture;
    public CursorMode cursorMode = CursorMode.Auto;
    public Vector2 hotSpot = Vector2.zero;

    public GameObject tetherSprite;
    GameObject tempTether;

    bool isRunning = false;
    AudioSource audio;

    // Use this for initialization
    void Start () {
        gm = (GameManager) FindObjectOfType(typeof(GameManager));
        gm.ChargeUpdate(charges);
        //gm.PauseUpdate(pauses);
        Cursor.SetCursor(cursorTexture, hotSpot, cursorMode);
        Pause();
        maxForce = 1500;
        audio = GetComponent<AudioSource>();
        pauses = 0;
    }

    // Update is called once per frame
    void Update()
    {
        if (gm.playerControl)
        {
            audio.pitch = (force / 1500f) + 0.3f;
            audio.volume = (force / 1500f) + 0.3f;
            if (grabbed)
            {
                if (tempTether != null)
                    StartCoroutine(ExitTether());
                Vector3 mousePos = new Vector3(Input.mousePosition.x, Input.mousePosition.y, 15);
                Vector3 lookPos = Camera.main.ScreenToWorldPoint(mousePos);
                transform.parent = null;
                transform.position = new Vector3(lookPos.x, lookPos.y, transform.position.z);

                if (Vector3.Distance(transform.position, lerpTarget.transform.position) < 1f)
                    force = Vector3.Distance(transform.position, ball.transform.position) * 50;
                else if (Vector3.Distance(transform.position, lerpTarget.transform.position) < 2f && Vector3.Distance(transform.position, lerpTarget.transform.position) > 1f)
                    force = Vector3.Distance(transform.position, ball.transform.position) * 100;
                else
                    force = Vector3.Distance(transform.position, ball.transform.position) * 150;
                if (force > maxForce)
                    force = maxForce;
                force = Mathf.Round(force * 100f) / 100f;

                if (Input.GetMouseButtonDown(0))
                {

                    //apply forcestuff here
                    if (paused)
                        Pause();
                    if (charges > 0)
                    {
                        ball.GetComponent<Rigidbody>().AddForce(transform.right * force);
                        force = 0;
                        charges--;
                        gm.ChargeUpdate(charges);

                        grabbed = false;
                    }
                }
            }
            if (!grabbed)
            {
                if (Input.GetMouseButtonDown(0))
                {

                    Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
                    RaycastHit hit;

                    if (Physics.Raycast(ray, out hit))
                    {
                        if (hit.transform.gameObject == paddleCollider)
                        {
                            grabbed = true;

                        }
                    }
                }
                if (Vector3.Distance(transform.position, lerpTarget.transform.position) > 0.3f && transform.parent == null)
                {
                    if (!isRunning)
                        StartCoroutine(MoveFunctionFast());
                }
                else
                {
                    if (tempTether == null)
                    {
                        tempTether = Instantiate(tetherSprite, transform.position - (transform.forward * 2), Quaternion.Euler(new Vector3(0, 0, transform.rotation.z + 95))) as GameObject;
                        tempTether.transform.parent = gameObject.transform;
                    }
                    transform.parent = ball.transform;
                }
            }
            Vector3 lookTo = ball.transform.position;
            lookTo = lookTo - transform.position;
            float angle = Mathf.Atan2(lookTo.y, lookTo.x) * Mathf.Rad2Deg;
            transform.rotation = Quaternion.AngleAxis(angle, Vector3.forward);
        }
        else
        {
            if (Input.GetMouseButtonDown(0))
            {

                Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
                RaycastHit hit;

                if (Physics.Raycast(ray, out hit))
                {
                    if (hit.transform.gameObject == paddleCollider)
                    {
                        grabbed = true;

                    }
                }
                gm.playerControl = true;
            }
        }
    }
    void LateUpdate()
    {
        gm.ForceUpdate(force);
    }
    public void Pause()
    {
        
        if (!paused)
        {
            savedVelocity = ball.GetComponent<Rigidbody>().velocity;
            savedAngularVelocity = ball.GetComponent<Rigidbody>().angularVelocity;
            ball.GetComponent<Rigidbody>().isKinematic = true;
            pauses++;
            gm.PauseUpdate(pauses);
            paused = true;
        }
        else
        {
            ball.GetComponent<Rigidbody>().velocity = savedVelocity;
            ball.GetComponent<Rigidbody>().angularVelocity = savedAngularVelocity;
            ball.GetComponent<Rigidbody>().isKinematic = false;
            paused = false;
        }
    }
    IEnumerator MoveFunctionFast()
    {
        isRunning = true;
        float timeSinceStarted = 0f;
        while (Vector3.Distance(transform.position, lerpTarget.transform.position) > 0.1f)
        {
            timeSinceStarted += Time.deltaTime;
           transform.position = Vector3.Lerp(transform.position, new Vector3(lerpTarget.transform.position.x,
               lerpTarget.transform.position.y, transform.position.z), timeSinceStarted);
            yield return null;
        }
        isRunning = false;
    }
    IEnumerator ExitTether()
    {
        tempTether.GetComponent<Animator>().SetBool("Close", true);
        yield return new WaitForSeconds(0.3f);
        Destroy(tempTether);
    }
   
}
