using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class LevelUI : MonoBehaviour {
    public GameObject winUI, scoreUI,totalScoreUI, statsPanel;
    GameManager gm;
    // Use this for initialization
    void Start()
    {
        if (winUI)
            winUI.SetActive(false);
        gm = (GameManager)FindObjectOfType(typeof(GameManager));
    }
    public virtual void WinScreen(float lvlscore, int totalscore)
    {
        winUI.SetActive(true);
        statsPanel.SetActive(false);
        if(lvlscore == 0)
            scoreUI.GetComponent<Text>().text = "FAILED";
        else
            scoreUI.GetComponent<Text>().text = "Level Score " + lvlscore;
        totalScoreUI.GetComponent<Text>().text = "Total Score " + totalscore;
      //  Cursor.visible = true;
       // Cursor.lockState = CursorLockMode.None;
    }
    public void CompleteLevel()
    {
        gm.LevelEnd();
    }
    public void Restart()
    {
        gm.Reload();
    }
    public void MainMenu()
    {
        gm.MainMenuLoad();
    }
    public void SubmitAnswer(bool right)
    {
        StartCoroutine(LevelLoad(right));
    }
    IEnumerator LevelLoad(bool right)
    {
        yield return new WaitForSeconds(0.5f);
        gm.LoadLevelAfterQuiz(right);
    }

}
