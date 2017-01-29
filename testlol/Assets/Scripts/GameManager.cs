using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
//using LoLSDK;

public class GameManager : MySingleton<GameManager>
{
    

    Text forceText, chargeText, pauseText, winText;
    Image chargeFill;
    int gamescore;
    public float lvlscore = 1000;
    public int lvlCharges, lvlPauses, bonusCharges, bonusPauses, startCharge, startPause, maxForce;
    public GameObject forceUI, chargeUI,chargeUIBar, pauseUI, winUI;
    public GameObject paddle;
    public bool playerControl,tutorialMode;
    bool isPlaying;

    // Use this for initialization
    void Awake()
    {
        //LOLSDK.Init("com.margolisdesign.projectnewton");
       
    }
    void Start ()
    {
        
    }
	
	// Update is called once per frame
	void Update ()
    {
        
    }
    void OnLevelWasLoaded ()
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
       // if (pauseUI == null)
        //    pauseUI = GameObject.Find("pauseText");
       // if (pauseUI != null)
           // pauseText = pauseUI.GetComponent<Text>();
        if(chargeUIBar == null)
            chargeUIBar = GameObject.Find("chargeMid");
        if (chargeUIBar != null)
            chargeFill = chargeUIBar.GetComponent<Image>();
        if (paddle == null)
            paddle = GameObject.Find("PaddleRoot");
        if (paddle != null)
        {
            if (SceneManager.GetActiveScene().buildIndex != 1)
            {
                paddle.GetComponent<PaddleBehavior>().charges += bonusCharges;
                startCharge = paddle.GetComponent<PaddleBehavior>().charges;
               // paddle.GetComponent<PaddleBehavior>().pauses += bonusPauses;
               // startPause = paddle.GetComponent<PaddleBehavior>().pauses;
            }
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
        LevelUI ui = (LevelUI)FindObjectOfType(typeof(LevelUI));
        ui.WinScreen(lvlscore);
        
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
        if (pauses > 2)
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
    public void LoadLevelAfterQuiz(int bonus)
    {
        if (bonus == 2)
        {
            bonusCharges = 1;
            bonusPauses = 1;
        }
        else if (bonus == 1)
            bonusCharges = 1;

        int nextScene = SceneManager.GetActiveScene().buildIndex + 1;
        SceneManager.LoadScene(nextScene);
    }
    public void LevelLoad (int level)
    {
        SceneManager.LoadScene(level);
    }
}
