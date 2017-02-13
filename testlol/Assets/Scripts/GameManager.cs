using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using LoLSDK;

public class GameManager : MonoBehaviour
{
    

    Text forceText, chargeText, pauseText, winText;
    Image chargeFill;
    int gamescore;
    public float lvlscore = 1000;
    int runningScore;
    int progress;
    public int lvlCharges, lvlPauses, bonusCharges, bonusPauses, startCharge, startPause, maxForce;
    public GameObject forceUI, chargeUI,chargeUIBar, pauseUI, winUI;
    public GameObject paddle;
    public bool playerControl,tutorialMode;
    bool isPlaying;
    private static GameManager instance = null;
    // Use this for initialization
    void Awake()
    {
        if (instance == null)
        {
            instance = this;
            DontDestroyOnLoad(gameObject);
        }
        else if (instance != this)
        {
            Destroy(this.gameObject);
            return;
        }
        LOLSDK.Init("com.margolisdesign.projectnewton");
        
        runningScore = 0;
        progress = 0;
        Application.targetFrameRate = 30;
        LOLSDK.Instance.SubmitProgress(0, 0, 11);
        

    }
    public void LevelStart ()
    {
        lvlscore = 1000;

        playerControl = false;
        tutorialMode = false;
        InvokeRepeating("LessenScore", 1.0f, 1.0f);
        if (forceUI == null)
            forceUI = GameObject.Find("forceText");
        if (forceUI != null)
            forceText = forceUI.GetComponent<Text>();
        if (chargeUI == null)
            chargeUI = GameObject.Find("chargeText");
        if (chargeUI != null)
            chargeText = chargeUI.GetComponent<Text>();
        if(chargeUIBar == null)
            chargeUIBar = GameObject.Find("chargeMid");
        if (chargeUIBar != null)
            chargeFill = chargeUIBar.GetComponent<Image>();
        if (paddle == null)
            paddle = GameObject.Find("Paddle");
        if (paddle != null)
        {
            startCharge = paddle.GetComponent<PaddleBehavior>().charges;
        }
        
    }
    void LessenScore()
    {
        if (isPlaying)
            lvlscore -= 1;
    }
    public void Goal(float mod)
    {
        isPlaying = false;
        lvlscore = lvlscore * mod;
        paddle.GetComponent<PaddleBehavior>().scored = true;
        LevelUI ui = (LevelUI)FindObjectOfType(typeof(LevelUI));
        runningScore += (int)lvlscore;
        progress++;
        ui.WinScreen(lvlscore, runningScore);
        LOLSDK.Instance.SubmitProgress(runningScore, progress, 11);
       
    }
    public void Fail()
    {
        isPlaying = false;
        //lvlscore = lvlscore * mod;
        lvlscore = 0;
        LevelUI ui = (LevelUI)FindObjectOfType(typeof(LevelUI));
        ui.WinScreen(lvlscore,runningScore);
      
        //LOLSDK.Instance.CompleteGame();
    }
    public void Reload()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
    }
    public void LevelEnd()
    {
            SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
    }
    public void MainMenuLoad()
    {
        SceneManager.LoadScene(0);
    }
    public void ChargeUpdate(int charges)
    {
        isPlaying = true;
        chargeText.text = "Charge " + charges + "";
        
        if (charges < startCharge)
            lvlscore -= 25;
        if (charges <= 0)
            playerControl = false;

    }
   public void PauseUpdate(int pauses)
    {
        if (pauses > 2 + bonusPauses)
            lvlscore -= 50;
    }
    public void ForceUpdate(float force)
    {
        forceText.text = "Force " + force.ToString("0000.00") + " N";
       
        if (force == 0)
            chargeFill.fillAmount = force / 1500f;
        else
        {
            chargeFill.fillAmount = force / 1500f;
            Debug.Log(force/ 1500);
        }
    }
    public void LoadLevelAfterQuiz(bool right)
    {
        if (right)
            runningScore += 1000;
        LOLSDK.Instance.SubmitProgress(runningScore, progress, 11);
        progress++;
        int nextScene = SceneManager.GetActiveScene().buildIndex + 1;
        SceneManager.LoadScene(nextScene);
    }
    public void LevelLoad (int level)
    {
        SceneManager.LoadScene(level);
    }
}
