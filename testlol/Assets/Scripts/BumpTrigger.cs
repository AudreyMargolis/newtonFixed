using UnityEngine;
using System.Collections;

public class BumpTrigger : MonoBehaviour
{
    public GameObject tutUi;

	void OnTriggerEnter(Collider other)
    {
        //Destroy(other.gameObject);
        Debug.Log("should change");
         tutUi.GetComponent<TutMenu>().NextTutMenu();
        gameObject.SetActive(false);   
    }
}
