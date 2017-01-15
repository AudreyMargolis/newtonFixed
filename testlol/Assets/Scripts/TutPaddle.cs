using UnityEngine;
using System.Collections;

public class TutPaddle : MonoBehaviour
{
    public enum paddleStates {TUTOPEN, ROTONLY, HITONLY};
    public paddleStates state;
   
	// Use this for initialization
	void Start ()
    {
	
	}
	
	// Update is called once per frame
	void Update ()
    {
	  if(state != paddleStates.TUTOPEN)
        {
            if(state != paddleStates.ROTONLY)
            {
                Vector3 mousePos = new Vector3(Input.mousePosition.x, Input.mousePosition.y, 10);
                Vector3 lookPos = Camera.main.ScreenToWorldPoint(mousePos);
                lookPos = lookPos - transform.position;
                float angle = Mathf.Atan2(lookPos.y, lookPos.x) * Mathf.Rad2Deg;
                transform.rotation = Quaternion.AngleAxis(angle, Vector3.forward);
            }
            if(state != paddleStates.HITONLY)
            {

            }
        }

	}
}
