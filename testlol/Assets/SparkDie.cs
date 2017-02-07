using UnityEngine;
using System.Collections;

public class SparkDie : MonoBehaviour
{
    public Sprite[] sparks;
    public bool isBig;
    SpriteRenderer sr;
    
	// Use this for initialization
	void Start ()
    {
        sr = GetComponent<SpriteRenderer>();
        if (isBig)
            transform.localScale = new Vector3(2, 2, 2);

        StartCoroutine(Spark());
        

	}
    void Die()
    {
        Destroy(gameObject);
    }
    IEnumerator Spark()
    {
        sr.sprite = sparks[0];
        yield return new WaitForSeconds(0.12f);
        sr.sprite = sparks[1];
        yield return new WaitForSeconds(0.12f);
        sr.sprite = sparks[2];
        yield return new WaitForSeconds(0.12f);
        sr.sprite = sparks[3];
        yield return new WaitForSeconds(0.12f);
        sr.sprite = sparks[4];
        yield return new WaitForSeconds(0.12f);
        Die();
    }
}
