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
    AudioSource audio;
    // Use this for initialization
    void Start ()
    {
        sr = GetComponent<SpriteRenderer>();
        audio = GetComponent<AudioSource>();
	}
	
	// Update is called once per frame
	void Update ()
    {
		
	}
    public void DontAnimate()
    {
        StopAllCoroutines();
        //tethered = false;
       // charging = false;
        sr.sprite = null;
    }
    public void StartTether()
    {
        if (!tethered)
        {
            DontAnimate();
            StartCoroutine(TetherStart());
        }
    }
    public void ExitTether()
    {
        if (tethered)
        {
            DontAnimate();
            StartCoroutine(TetherExit());
        }
    }
    public void StartCharge()
    {
            charging = true;
            StartCoroutine(ChargingTo());
    }
    IEnumerator TetherStart()
    {
        tethered = true;
        if (sr == null)
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
        tethered = false;
        if (sr == null)
            sr = GetComponent<SpriteRenderer>();
        sr.sprite = tetherAnimation[2];
        yield return new WaitForSeconds(animSpeed);
        sr.sprite = tetherAnimation[1];
        yield return new WaitForSeconds(animSpeed);
        sr.sprite = tetherAnimation[0];
        yield return new WaitForSeconds(animSpeed);
        sr.sprite = null;
    }
    IEnumerator ChargingTo()
    {
        //charging = true;
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
       
        audio.Play();
        if (sr == null)
            sr = GetComponent<SpriteRenderer>();
        sr.sprite = fireAnimation[0];
        yield return new WaitForSeconds(animSpeed/2);
        sr.sprite = fireAnimation[1];
        yield return new WaitForSeconds(animSpeed / 2);
        sr.sprite = fireAnimation[2]; ;
        yield return new WaitForSeconds(animSpeed / 2);
        sr.sprite = fireAnimation[3];
        yield return new WaitForSeconds(animSpeed / 2);
        sr.sprite = fireAnimation[4];
        yield return new WaitForSeconds(animSpeed / 2);
        sr.sprite = fireAnimation[5];
        yield return new WaitForSeconds(animSpeed / 2);
        sr.sprite = fireAnimation[6];
        yield return new WaitForSeconds(animSpeed / 2);
        sr.sprite = fireAnimation[7];
        yield return new WaitForSeconds(animSpeed / 2);
        StartCoroutine(TetherStart());
        //DontAnimate();
    }
}
