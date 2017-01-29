using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class TutorialPanel : MonoBehaviour {
    TutorialController tut;
    public bool moveCamera, hasIndicator;
    public GameObject camPosition;
    public GameObject toIndicate;
    public GameObject indicatorSprite;
    public bool compassVisable;
    public bool finalPanel;
	// Use this for initialization
	void Start ()
    {
        tut = (TutorialController)FindObjectOfType(typeof(TutorialController));
        if (moveCamera)
            tut.MoveCamera(camPosition.transform);
        if (hasIndicator)
        {
            GameObject a = Instantiate(indicatorSprite, toIndicate.transform.position + new Vector3(0, 1, 1), Quaternion.identity) as GameObject;
            a.transform.parent = transform;
        }
        if(compassVisable)
        {
            tut.compassText.GetComponent<Text>().color = tut.visableColor;
            tut.compassImage.GetComponent<Image>().color = tut.visableColor;
        }
        else
        {
            tut.compassText.GetComponent<Text>().color = tut.inVisColor;
            tut.compassImage.GetComponent<Image>().color = tut.inVisColor;
        }
    }
	
}
