using UnityEngine;
using System.Collections;

public class TutPaddle : MonoBehaviour
{
    public enum paddleStates {TUTOVER, ROTONLY, HITONLY, FORCEONLY, PAUSEONLY,};
    public paddleStates state;

    #region //paddlestuff
    public int force, charges, pauses;
    public GameObject forceOrigin, gameManage, ball, paddle, paddlePlacement, innerRot;
    GameManager gm;
    public float rotSpeed = 10f, gravity = .03f;
    public bool paused = false;
    Vector3 savedVelocity;
    Vector3 savedAngularVelocity;

    public Texture2D cursorTexture;
    public CursorMode cursorMode = CursorMode.Auto;
    public Vector2 hotSpot = Vector2.zero;
    #endregion
    // Use this for initialization
    void Start ()
    {
        gm = (GameManager)FindObjectOfType(typeof(GameManager));
        gm.ChargeUpdate(charges);
        gm.PauseUpdate(pauses);
        Cursor.SetCursor(cursorTexture, hotSpot, cursorMode);
        Pause();
    }
	
	// Update is called once per frame
	void Update ()
    {
        transform.position = ball.transform.position;
            if(state == paddleStates.ROTONLY)
            {
                Vector3 mousePos = new Vector3(Input.mousePosition.x, Input.mousePosition.y, 10);
                Vector3 lookPos = Camera.main.ScreenToWorldPoint(mousePos);
                lookPos = lookPos - transform.position;
                float angle = Mathf.Atan2(lookPos.y, lookPos.x) * Mathf.Rad2Deg;
                transform.rotation = Quaternion.AngleAxis(angle, Vector3.forward);
            }
            if(state == paddleStates.HITONLY)
            {
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
            }
            if(state == paddleStates.FORCEONLY)
            {
                if (Input.GetKeyDown(KeyCode.A))
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
                    
                }
                if (Input.GetKey(KeyCode.A))
                {
                    if (force > 0)
                        force -= 10;
                    else
                        force = 0;
                    gm.ForceUpdate(force);
                    if (paddle.transform.position != paddlePlacement.transform.position)
                    {
                        paddle.transform.position += (innerRot.transform.up * force / 5000);
                    }
                    
                }
                if (Input.GetKeyDown(KeyCode.D))
                {
                    if (force < 9999)
                        force += 5;
                    else
                        force = 9999;
                    gm.ForceUpdate(force);
                    paddle.transform.position -= (innerRot.transform.up * force / 5000);
                    
                }
                if (Input.GetKey(KeyCode.D))
                {
                    if (force < 9999)
                        force += 10;
                    else
                        force = 9999;
                    gm.ForceUpdate(force);
                    paddle.transform.position -= (innerRot.transform.up * force / 5000);
                    
                }
            }
        if (state == paddleStates.PAUSEONLY)
        {
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
            }
        }
            if (state == paddleStates.TUTOVER)
            {
            if (Input.GetKeyDown(KeyCode.A))
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
               
            }
            if (Input.GetKey(KeyCode.A))
            {
                if (force > 0)
                    force -= 10;
                else
                    force = 0;
                gm.ForceUpdate(force);
                if (paddle.transform.position != paddlePlacement.transform.position)
                {
                    paddle.transform.position += (innerRot.transform.up * force / 5000);
                }
                
            }
            if (Input.GetKeyDown(KeyCode.D))
            {
                if (force < 9999)
                    force += 5;
                else
                    force = 9999;
                gm.ForceUpdate(force);
                paddle.transform.position -= (innerRot.transform.up * force / 5000);
               
            }
            if (Input.GetKey(KeyCode.D))
            {
                if (force < 9999)
                    force += 10;
                else
                    force = 9999;
                gm.ForceUpdate(force);
                paddle.transform.position -= (innerRot.transform.up * force / 5000);
              
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
            }
        }

	}
    void UnPause()
    {
       // Time.timeScale = 1;
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
}
