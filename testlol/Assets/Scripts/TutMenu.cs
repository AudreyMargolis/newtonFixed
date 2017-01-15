using UnityEngine;
using System.Collections;

public class TutMenu : LevelUI
{
    public GameObject[] tutMenus;
    public GameObject tutorialPanel;
    int currentTut = 0;
    public GameObject paddleControl;
    TutPaddle paddleScript;
	// Use this for initialization
	void Start ()
    {
        paddleScript = paddleControl.GetComponent<TutPaddle>();
        tutMenus[0].SetActive(true);
	}
	
	// Update is called once per frame
	void Update ()
    {
	    if(tutMenus[0].activeSelf)
        {
            paddleScript.state = TutPaddle.paddleStates.ROTONLY;

        }
        else if (tutMenus[1].activeSelf)
        {
            paddleScript.state = TutPaddle.paddleStates.FORCEONLY;
            if(paddleScript.force > 499)
                NextTutMenu();
        }
        else if (tutMenus[2].activeSelf)
        {
            paddleScript.state = TutPaddle.paddleStates.HITONLY;
            if (Input.GetKeyDown(KeyCode.Mouse0))
                NextTutMenu();
        }
        else if (tutMenus[3].activeSelf)
        {
            paddleScript.state = TutPaddle.paddleStates.PAUSEONLY;
            if (Input.GetKeyDown(KeyCode.Space))
                NextTutMenu();
        }
        else if (tutMenus[4].activeSelf)
        {
            paddleScript.state = TutPaddle.paddleStates.TUTOVER;
        }
    }
    public void NextTutMenu()
    {
        tutMenus[currentTut].SetActive(false);
        currentTut++;
        tutMenus[currentTut].SetActive(true);
    }
    public override void WinScreen(float lvlscore)
    {
        tutorialPanel.SetActive(false);
        base.WinScreen(lvlscore);
        //  Cursor.visible = true;
        // Cursor.lockState = CursorLockMode.None;
    }

}
