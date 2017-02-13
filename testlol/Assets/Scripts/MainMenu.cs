using UnityEngine;
using System.Collections;
using LoLSDK;
public class MainMenu : MonoBehaviour
{
    public GameObject[] levelPanels;

    int currentPanel;
	void Start()
    {
        LOLSDK.Instance.PlaySound("MenuMusic.mp3", true, true);
        currentPanel = 0;
    }
    public void ToLevel()
    {
        
    }
    public void ToMenu()
    {
        LOLSDK.Instance.PlaySound("menuOut.mp3");
        levelPanels[currentPanel].SetActive(false);
        currentPanel = 0;
        levelPanels[currentPanel].SetActive(true);
    }
    public void NextPanel()
    {
        LOLSDK.Instance.PlaySound("menuIn.mp3");
        levelPanels[currentPanel].SetActive(false);
        currentPanel++;
        levelPanels[currentPanel].SetActive(true);
    }
    public void PreviousPanel()
    {
        LOLSDK.Instance.PlaySound("menuOut.mp3");
        levelPanels[currentPanel].SetActive(false);
        currentPanel--;
        levelPanels[currentPanel].SetActive(true);
    }
    public void LevelPicked(int level)
    {
        LOLSDK.Instance.PlaySound("menuClick.mp3");
        StartCoroutine(LevelLoad(level));
       
    }
    IEnumerator LevelLoad(int level)
    {
        yield return new WaitForSeconds(0.5f);
        GameManager a = (GameManager)FindObjectOfType(typeof(GameManager));
        a.LevelLoad(level);
    }
}
