using UnityEngine;
using System.Collections;

public class PaddleBehavior : MonoBehaviour {
    public int charges;
    int pauses;
    public float force;
    public GameObject gameManage, ball;
    public GameObject paddleCollider, lerpTarget;
    GameManager gm;
    public float rotSpeed = 10f;
    float lerpSpeed = 5f;
    public bool paused = false, grabbed = false;
    Vector2 savedVelocity;
    float savedAngularVelocity;
    public int maxForce = 1500;

    public Texture2D cursorTexture;
    public CursorMode cursorMode = CursorMode.Auto;
    public Vector2 hotSpot = Vector2.zero;

    public GameObject paddleAnimator;
    PaddleSpriteAnimator animScript;
    //GameObject tempTether, tempFiring;
    public bool scored = false;
    bool isRunning = false;
    bool isFiring = false;
    public AudioSource audio1, audio2;


    // Use this for initialization
    void Start() {
        gm = (GameManager)FindObjectOfType(typeof(GameManager));
        gm.ChargeUpdate(charges);
        //gm.PauseUpdate(pauses);
        Cursor.SetCursor(cursorTexture, hotSpot, cursorMode);
        Pause();
        maxForce = 1500;
        //audio = GetComponent<AudioSource>();
        pauses = 0;
        scored = false;
        animScript = paddleAnimator.GetComponent<PaddleSpriteAnimator>();
        animScript.StartTether();
    }

    // Update is called once per frame
    void Update()
    {
        if (gm.playerControl)
        {
            audio1.pitch = (force / 1500f) + 0.3f;
            audio1.volume = (force / 1500f) + 0.3f;
            audio2.pitch = (force / 1500f) + 0.3f;
            audio2.volume = (force / 1500f) + 0.3f;
            if (grabbed)
            {
                if(animScript.tethered)
                    animScript.ExitTether();
                if (Input.GetMouseButton(0))
                {
                    Vector3 mousePos = new Vector3(Input.mousePosition.x, Input.mousePosition.y, 15);
                    Vector3 lookPos = Camera.main.ScreenToWorldPoint(mousePos);
                    transform.parent = null;
                    transform.position = new Vector3(lookPos.x, lookPos.y, transform.position.z);
                }
                if(Input.touchCount > 0)
                {
                    if(Input.GetTouch(0).phase == TouchPhase.Moved)
                    {
                        Vector3 mousePos = new Vector3(Input.GetTouch(0).position.x, Input.GetTouch(0).position.y, 15);
                        Vector3 lookPos = Camera.main.ScreenToWorldPoint(mousePos);
                        transform.parent = null;
                        transform.position = new Vector3(lookPos.x, lookPos.y, transform.position.z);
                    }
                }

                if (Vector3.Distance(transform.position, lerpTarget.transform.position) < 1f)
                    force = Vector3.Distance(transform.position, ball.transform.position) * 50;
                else if (Vector3.Distance(transform.position, lerpTarget.transform.position) < 2f && Vector3.Distance(transform.position, lerpTarget.transform.position) > 1f)
                    force = Vector3.Distance(transform.position, ball.transform.position) * 100;
                else
                    force = Vector3.Distance(transform.position, ball.transform.position) * 150;
                if (force > maxForce)
                    force = maxForce;
                force = Mathf.Round(force * 100f) / 100f;

                if (Input.GetMouseButtonUp(0))
                {

                    //apply forcestuff here
                    if (paused)
                        Pause();
                    if (charges > 0)
                    {
                        animScript.StartCharge();
                        StartCoroutine(Fire(force));

                        force = 0;
                        charges--;
                        gm.ChargeUpdate(charges);
                        grabbed = false;
                    }
                }
                if(Input.touchCount>0)
                {
                    if(Input.GetTouch(0).phase == TouchPhase.Ended)
                    {
                        if (paused)
                            Pause();
                        if (charges > 0)
                        {
                            animScript.StartCharge();
                            StartCoroutine(Fire(force));

                            force = 0;
                            charges--;
                            gm.ChargeUpdate(charges);
                            grabbed = false;
                        }
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
                if(Input.touchCount >0)
                {
                    if(Input.GetTouch(0).phase == TouchPhase.Began)
                    {

                        Ray ray = Camera.main.ScreenPointToRay(Input.GetTouch(0).position);
                        RaycastHit hit;

                        if (Physics.Raycast(ray, out hit))
                        {
                            if (hit.transform.gameObject == paddleCollider)
                            {
                                grabbed = true;

                            }
                        }
                    }
                }
                if (Vector3.Distance(transform.position, lerpTarget.transform.position) > 0 && transform.parent == null)
                {
                    //if (!isRunning)
                    //StartCoroutine(MoveFunctionFast());
                    transform.position = Vector3.MoveTowards(transform.position, lerpTarget.transform.position, 50 * Time.deltaTime);
                }
                else
                {

                    if (animScript.tethered == false)
                    {
                        animScript.StartTether();
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
                if (!gm.tutorialMode)
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
            if(Input.touchCount > 0)
            {
                if(Input.GetTouch(0).phase == TouchPhase.Began)
                {
                    if (!gm.tutorialMode)
                    {
                        Ray ray = Camera.main.ScreenPointToRay(Input.GetTouch(0).position);
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
        }
    }
    IEnumerator Fail()
    {
       
        gm.playerControl = false;
        yield return new WaitForSeconds(5f);
        if (!scored)
        {
            gm.tutorialMode = true;
            animScript.DontAnimate();
            Rigidbody2D rm = gameObject.GetComponent<Rigidbody2D>();
            //rm.useGravity = false;
            rm.isKinematic = false;
            rm.angularVelocity = ball.GetComponent<Rigidbody2D>().angularVelocity;
            rm.velocity = ball.GetComponent<Rigidbody2D>().velocity;
            rm.freezeRotation = true;
            rm.AddForce(-transform.up);
            gameObject.AddComponent<BoxCollider2D>();

            yield return new WaitForSeconds(2f);
            gm.Fail();
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
            savedVelocity = ball.GetComponent<Rigidbody2D>().velocity;
            savedAngularVelocity = ball.GetComponent<Rigidbody2D>().angularVelocity;
            ball.GetComponent<Rigidbody2D>().isKinematic = true;
            pauses++;
            gm.PauseUpdate(pauses);
            paused = true;
        }
        else
        {
            ball.GetComponent<Rigidbody2D>().velocity = savedVelocity;
            ball.GetComponent<Rigidbody2D>().angularVelocity = savedAngularVelocity;
            ball.GetComponent<Rigidbody2D>().isKinematic = false;
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
    IEnumerator Fire(float fireForce)
    {
        isFiring = true;
        //tempFiring = Instantiate(firingSprite, transform.position, Quaternion.Euler(new Vector3(0, 0, transform.rotation.z))) as GameObject;
        //tempFiring.transform.parent = gameObject.transform;
        
      
        while (Vector3.Distance(transform.position, lerpTarget.transform.position) > .1f)
        {

            if (Vector3.Distance(transform.position, lerpTarget.transform.position) < 2.5f)
                animScript.charging = false;
            yield return null;
        }


        ball.GetComponent<Rigidbody2D>().AddForce(transform.right * fireForce);
        yield return new WaitForSeconds(0.3f);
        if(charges <= 0)
        {
            StartCoroutine(Fail());
        }
        isFiring = false;

    }
    IEnumerator ExitTether()
    {
        animScript.ExitTether();
        yield return new WaitForSeconds(0.3f);
        animScript.DontAnimate();
    }
   
}
