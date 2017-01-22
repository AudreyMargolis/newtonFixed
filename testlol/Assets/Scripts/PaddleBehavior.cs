using UnityEngine;
using System.Collections;

public class PaddleBehavior : MonoBehaviour {
    public int force, charges, pauses;
    public GameObject  gameManage, ball;
    public GameObject paddleCollider, lerpTarget;
    GameManager gm;
    public float rotSpeed = 10f, gravity = .03f;
    float lerpSpeed = 5f;
    public bool paused = false, grabbed = false;
    Vector3 savedVelocity;
    Vector3 savedAngularVelocity;

    public Texture2D cursorTexture;
    public CursorMode cursorMode = CursorMode.Auto;
    public Vector2 hotSpot = Vector2.zero;

    bool isRunning = false;
    // Use this for initialization
    void Start () {
        gm = (GameManager) FindObjectOfType(typeof(GameManager));
        gm.ChargeUpdate(charges);
        gm.PauseUpdate(pauses);
        Cursor.SetCursor(cursorTexture, hotSpot, cursorMode);
        Pause();
    }

    // Update is called once per frame
    void Update()
    {
       
        if (grabbed)
        {
            Vector3 mousePos = new Vector3(Input.mousePosition.x, Input.mousePosition.y, 15);
            Vector3 lookPos = Camera.main.ScreenToWorldPoint(mousePos);
            transform.position = new Vector3(lookPos.x, lookPos.y, transform.position.z);

            force = (int)Vector3.Distance(transform.position, ball.transform.position) * 50;
            gm.ForceUpdate(force);
            if (Input.GetMouseButtonDown(0))
            {
                //apply forcestuff here
                UnPause();
                ball.GetComponent<Rigidbody>().AddForce(transform.forward * force);
                charges--;
                gm.ChargeUpdate(charges);

                grabbed = false;
            }
        }
       if(!grabbed)
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
            if (Vector3.Distance(transform.position, lerpTarget.transform.position) > 0.3f)
            {
                // transform.position = Vector3.MoveTowards(transform.position, new Vector3(ball.transform.position.x,
                // ball.transform.position.y,transform.position.z), Time.deltaTime * lerpSpeed);
                //transform.position += transform.forward * lerpSpeed * Time.deltaTime;
                if(!isRunning)
                    StartCoroutine(MoveFunctionFast());
            }
            //else
               // transform.RotateAround(ball.transform.position, Vector3.forward, 50f * Time.deltaTime);
            //Vector3.Lerp(paddle.transform.position, new Vector3(ball.transform.position.x,
            //ball.transform.position.y,paddle.transform.position.z), Time.deltaTime * lerpSpeed);
        }
        transform.LookAt(new Vector3(ball.transform.position.x, ball.transform.position.y, transform.position.z));
            #region
        /* if (Input.GetKeyDown(KeyCode.A))
         {
             if (force > 0)
                 force -= 5;
             else
                 force = 0;
             gm.ForceUpdate(force);
             if (paddle.transform.position != paddlePlacement.transform.position)
             {
                 paddle.transform.position += (innerRot.transform.up * force / 5000);
             }
             // transform.Rotate(new Vector3(0, 0, 1) * rotSpeed); //for mouse
         }
         if (Input.GetKey(KeyCode.A))
         {
             if (force > 0)
                 force-=10;
             else
                 force = 0;
             gm.ForceUpdate(force);
             if(paddle.transform.position != paddlePlacement.transform.position)
             {
                 paddle.transform.position += (innerRot.transform.up * force/5000);
             }
            // transform.Rotate(new Vector3(0, 0, 1) * rotSpeed); //for mouse
         }
         if (Input.GetKeyDown(KeyCode.D))
         {
             if (force < 9999)
                 force += 5;
             else
                 force = 9999;
             gm.ForceUpdate(force);
             paddle.transform.position -= (innerRot.transform.up * force / 5000);
             //transform.Rotate(new Vector3(0, 0, -1) * rotSpeed); // for mouse
         }
         if (Input.GetKey(KeyCode.D))
         {
              if (force < 9999)
                  force += 10;
              else
                  force = 9999;
              gm.ForceUpdate(force);
              paddle.transform.position -=(innerRot.transform.up * force/5000);
             //transform.Rotate(new Vector3(0, 0, -1) * rotSpeed); // for mouse
         }
         /*if (Input.GetAxis("Mouse X") < 0 ) //for mouse
         {
             if (force > 0)
                 force -= 10;
             else
                 force = 0;
             gm.ForceUpdate(force);
             if (paddle.transform.position != paddlePlacement.transform.position)
             {
                 paddle.transform.position += (transform.up * force / 10000);
             }
         }
         if(Input.GetAxis("Mouse X") > 0)
         {
             if (force < 9999)
                 force += 10;
             else
                 force = 9999;
             gm.ForceUpdate(force);
             paddle.transform.position -= (transform.up * force / 10000);
         }
         Vector3 mousePos = new Vector3(Input.mousePosition.x, Input.mousePosition.y, 10);
         Vector3 lookPos = Camera.main.ScreenToWorldPoint(mousePos);
         lookPos = lookPos - transform.position;
         float angle = Mathf.Atan2(lookPos.y, lookPos.x) * Mathf.Rad2Deg;
         transform.rotation = Quaternion.AngleAxis(angle, Vector3.forward);

         if (charges > 0)
         {
             if (Input.GetKeyDown(KeyCode.Mouse0))
             {
                 if (paused)
                 {
                     UnPause();
                 } 
                 Time.timeScale = 1;
                 ball.GetComponent<Rigidbody>().AddForce(innerRot.transform.up * force);
                 charges--;
                 gm.ChargeUpdate(charges);
                 paddle.transform.position = paddlePlacement.transform.position;
                 force = 0;
                 gm.ForceUpdate(force);
             }
         }

         if (Input.GetKeyDown(KeyCode.Space))
         {
             if (paused)
             {
                 UnPause();


             }
             else
             {
                 if (pauses > 0)
                 {
                     Pause();
                     pauses--;
                     gm.PauseUpdate(pauses);
                 }
             }
         } */
            #endregion
    }
    void UnPause()
    {
        //Time.timeScale = 1;
        ball.GetComponent<Rigidbody>().velocity = savedVelocity;
        ball.GetComponent<Rigidbody>().angularVelocity = savedAngularVelocity;
        ball.GetComponent<Rigidbody>().isKinematic = false;
        paused = false;
    }
    void Pause()
    {
       // Time.timeScale = 0;
        paused = true;
        savedVelocity = ball.GetComponent<Rigidbody>().velocity;
        savedAngularVelocity = ball.GetComponent<Rigidbody>().angularVelocity;
        ball.GetComponent<Rigidbody>().isKinematic = true;
    }
    IEnumerator MoveFunctionFast()
    {
        isRunning = true;
        float timeSinceStarted = 0f;
        while (Vector3.Distance(transform.position, lerpTarget.transform.position) > 0.3f)
        {
            timeSinceStarted += Time.deltaTime;
           transform.position = Vector3.Lerp(transform.position, new Vector3(lerpTarget.transform.position.x,
               lerpTarget.transform.position.y, transform.position.z), timeSinceStarted);
            yield return null;
        }
        isRunning = false;
    }
   
}
