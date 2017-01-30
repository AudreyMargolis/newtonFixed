using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class LevelUI : MonoBehaviour {
    public GameObject winUI, scoreUI, statsPanel;
    // Use this for initialization
    void Start()
    {
        if (winUI)
            winUI.SetActive(false);
        
    }

    // Update is called once per frame
    void Update()
    {

    }
    public virtual void WinScreen(float lvlscore)
    {
        winUI.SetActive(true);
        statsPanel.SetActive(false);
        if(lvlscore == 0)
            scoreUI.GetComponent<Text>().text = "FAILED";
        else
            scoreUI.GetComponent<Text>().text = "Level Score " + lvlscore;
      //  Cursor.visible = true;
       // Cursor.lockState = CursorLockMode.None;
    }
    public void CompleteLevel()
    {
        GameManager gm = (GameManager)FindObjectOfType(typeof(GameManager));
        gm.LevelEnd();
    }
    public void Restart()
    {
        GameManager gm = (GameManager)FindObjectOfType(typeof(GameManager));
        gm.Reload();
    }
    public void MainMenu()
    {
        GameManager gm = (GameManager)FindObjectOfType(typeof(GameManager));
        gm.MainMenuLoad();
    }
    public void SubmitAnswer(bool right)
    {

        StartCoroutine(LevelLoad(right));
    }
    IEnumerator LevelLoad(bool right)
    {
        yield return new WaitForSeconds(0.5f);
        GameManager gm = (GameManager)FindObjectOfType(typeof(GameManager));
        gm.LoadLevelAfterQuiz(right);
    }

}
