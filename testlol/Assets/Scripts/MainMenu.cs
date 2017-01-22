using UnityEngine;
using System.Collections;

public class MainMenu : MonoBehaviour
{
    Animator mainAnim, lvlAnim;
    public GameObject[] levelPanels;
    int currentPanel;
	void Start()
    {
        currentPanel = 0;
    }
    public void ToLevel()
    {
        
    }
    public void ToMenu()
    {
        levelPanels[currentPanel].SetActive(false);
        currentPanel = 0;
        levelPanels[currentPanel].SetActive(true);
    }
    public void NextPanel()
    {
        levelPanels[currentPanel].SetActive(false);
        currentPanel++;
        Debug.Log(currentPanel);
        levelPanels[currentPanel].SetActive(true);
    }
    public void PreviousPanel()
    {
        levelPanels[currentPanel].SetActive(false);
        currentPanel--;
        Debug.Log(currentPanel);
        levelPanels[currentPanel].SetActive(true);
    }
    public void LevelPicked(int level)
    {
        GameManager a = (GameManager)FindObjectOfType(typeof(GameManager));
        a.LevelLoad(level);
    }
}
