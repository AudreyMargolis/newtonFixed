using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class TutorialController : MonoBehaviour
{
    public GameObject mainCam;
    CamFollow camScript;
    GameManager gm;
    public GameObject paddle;
    public GameObject[] tutorialPanels;
    public GameObject compassText, compassImage;
    public Color visableColor,inVisColor;
    public int tutorialLength;
    bool noControl;
	// Use this for initialization
	void Start ()
    {
        camScript = mainCam.GetComponent<CamFollow>();
        gm = (GameManager)FindObjectOfType(typeof(GameManager));
        noControl = true;
        visableColor = compassImage.GetComponent<Image>().color;
        inVisColor = visableColor;
        inVisColor.a = 0;
    }
	
	// Update is called once per frame
	void Update ()
    {
        if (noControl)
        {
            gm.tutorialMode = true;
        }
        else
        {
            gm.tutorialMode = false;
        }
        if(Input.GetMouseButtonDown(0))
        {
            if (!tutorialPanels[tutorialLength].GetComponent<TutorialPanel>().finalPanel)
                ContinueTutorial();
            else
            {
                noControl = false;
            }
        }
	}
    public void ContinueTutorial()
    {
        tutorialPanels[tutorialLength].SetActive(false);
        tutorialLength++;
        tutorialPanels[tutorialLength].SetActive(true);
    }
    public void MoveCamera(Transform target)
    {
        camScript.TutorialMoveUpdate(target);
    }
}
