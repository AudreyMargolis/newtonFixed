using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ArrowAnimation : MonoBehaviour
{
    public Sprite[] arrowAnimation;
    SpriteRenderer sr;
    // Use this for initialization
    void Start ()
    {
        sr = GetComponent<SpriteRenderer>();
        StartCoroutine(Pointing());
    }
	
	// Update is called once per frame
	void Update () {
		
	}
    IEnumerator Pointing()
    {
        if (sr == null)
            sr = GetComponent<SpriteRenderer>();
        while (true)
        {
            sr.sprite = arrowAnimation[0];
            yield return new WaitForSeconds(0.12f);
            sr.sprite = arrowAnimation[1];
            yield return new WaitForSeconds(0.12f);
            sr.sprite = arrowAnimation[2];
            yield return new WaitForSeconds(0.12f);
            sr.sprite = arrowAnimation[3];
            yield return new WaitForSeconds(0.12f);
            sr.sprite = arrowAnimation[4];
            yield return new WaitForSeconds(0.12f);
            sr.sprite = arrowAnimation[5];
            yield return new WaitForSeconds(0.12f);
            sr.sprite = arrowAnimation[6];
            yield return new WaitForSeconds(0.12f);
        }
    }
}
