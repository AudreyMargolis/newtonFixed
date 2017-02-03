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
    public GameObject forceSlider;

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
        if (forceSlider == null)
            forceSlider = GameObject.Find("forceSlider");
       // if (pauseUI == null)
        //    pauseUI = GameObject.Find("pauseText");
       // if (pauseUI != null)
           // pauseText = pauseUI.GetComponent<Text>();
      //  if(chargeUIBar == null)
          //  chargeUIBar = GameObject.Find("chargeMid");
       // if (chargeUIBar != null)
          //  chargeFill = chargeUIBar.GetComponent<Image>();
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
        paddle.GetComponent<PaddleBehavior>().scored = true;
        LevelUI ui = (LevelUI)FindObjectOfType(typeof(LevelUI));
        ui.WinScreen(lvlscore);
        
        //LOLSDK.Instance.CompleteGame();
    }
    public void Fail()
    {
        isPlaying = false;
        //lvlscore = lvlscore * mod;
        lvlscore = 0;
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
        if (pauses > 2 + bonusPauses)
            lvlscore -= 50;
    }
    public void ForceUpdate(float force)
    {
        forceText.text = "Force " + force.ToString("0000.00") + " N";
        paddle.GetComponent<PaddleBehavior>().force = force;
      //  if (force == 0)
        ///    chargeFill.fillAmount = force / 1500f;
       // else
       // {
         //   chargeFill.fillAmount = force / 1500f;
         //   Debug.Log(force/ 1500);
       // }
    }
    public void Fire()
    {
        forceSlider.GetComponent<Slider>().value = 0;
        paddle.GetComponent<PaddleBehavior>().force = 0;
    }
    public void LoadLevelAfterQuiz(bool right)
    {
        if (right)
        {
            bonusCharges = 2;
            bonusPauses = 1;
        }
        else
        {
            bonusCharges = 0;
            bonusPauses = 0;
        }

        int nextScene = SceneManager.GetActiveScene().buildIndex + 1;
        SceneManager.LoadScene(nextScene);
    }
    public void LevelLoad (int level)
    {
        SceneManager.LoadScene(level);
    }
}
