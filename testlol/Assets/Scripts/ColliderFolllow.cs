using UnityEngine;
using System.Collections;

public class ColliderFolllow : MonoBehaviour {
    public GameObject ball;
	void LateUpdate () {
        transform.position = new Vector3(ball.transform.position.x, ball.transform.position.y, transform.position.z);
	}
}
