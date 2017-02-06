using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PaddleSpriteAnimator : MonoBehaviour {
    public Sprite[] tetherAnimation;
    public Sprite[] chargeToAnimation;
    public Sprite[] fireAnimation;
    public bool tethered = false, charging = false;
    public float animSpeed;
    SpriteRenderer sr;
    // Use this for initialization
    void Start ()
    {
        sr = GetComponent<SpriteRenderer>();
	}
	
	// Update is called once per frame
	void Update ()
    {
		
	}
    public void DontAnimate()
    {
        StopAllCoroutines();
        sr.sprite = null;
    }
    public void StartTether()
    {
        tethered = true;
        StartCoroutine(TetherStart());
    }
    public void ExitTether()
    {
        tethered = false;
        StartCoroutine(TetherExit());
    }
    public void StartCharge()
    {
        charging = true;
        StartCoroutine(ChargingTo());
    }
    IEnumerator TetherStart()
    {
        if(sr == null)
            sr = GetComponent<SpriteRenderer>();
        sr.sprite = tetherAnimation[0];
        yield return new WaitForSeconds(animSpeed);
        sr.sprite = tetherAnimation[1];
        yield return new WaitForSeconds(animSpeed);
        sr.sprite = tetherAnimation[2];
        yield return new WaitForSeconds(animSpeed);
        StartCoroutine(Tethered());
    }
    IEnumerator Tethered()
    {
        if (sr == null)
            sr = GetComponent<SpriteRenderer>();
        while (tethered)
        {
            sr.sprite = tetherAnimation[3];
            yield return new WaitForSeconds(animSpeed);
            sr.sprite = tetherAnimation[4];
            yield return new WaitForSeconds(animSpeed);
            sr.sprite = tetherAnimation[5];
            yield return new WaitForSeconds(animSpeed);
        }
        
    }
    IEnumerator TetherExit()
    {
        if (sr == null)
            sr = GetComponent<SpriteRenderer>();
        sr.sprite = tetherAnimation[2];
        yield return new WaitForSeconds(animSpeed);
        sr.sprite = tetherAnimation[1];
        yield return new WaitForSeconds(animSpeed);
        sr.sprite = tetherAnimation[0];
        yield return new WaitForSeconds(animSpeed);
    }
    IEnumerator ChargingTo()
    {
        if (sr == null)
            sr = GetComponent<SpriteRenderer>();
        while (charging)
        {
            sr.sprite = chargeToAnimation[0];
            yield return new WaitForSeconds(animSpeed);
            sr.sprite = chargeToAnimation[1];
            yield return new WaitForSeconds(animSpeed);
            sr.sprite = chargeToAnimation[2];
            yield return new WaitForSeconds(animSpeed);
        }
        StartCoroutine(Fire());   
    }
    IEnumerator Fire()
    {
        if (sr == null)
            sr = GetComponent<SpriteRenderer>();
        sr.sprite = fireAnimation[0];
        yield return new WaitForSeconds(animSpeed);
        sr.sprite = fireAnimation[1];
        yield return new WaitForSeconds(animSpeed);
        sr.sprite = fireAnimation[2]; ;
        yield return new WaitForSeconds(animSpeed);
        sr.sprite = fireAnimation[3];
        yield return new WaitForSeconds(animSpeed);
        sr.sprite = fireAnimation[4];
        yield return new WaitForSeconds(animSpeed);
        sr.sprite = fireAnimation[5];
        yield return new WaitForSeconds(animSpeed);
        sr.sprite = fireAnimation[6];
        yield return new WaitForSeconds(animSpeed);
        sr.sprite = fireAnimation[7];
        yield return new WaitForSeconds(animSpeed);
    }
}
