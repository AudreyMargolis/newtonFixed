using UnityEngine;
using System.Collections;

public class MainMenu : MonoBehaviour
{
    public GameObject[] levelPanels;
    public AudioClip prevMenu, nextMenu, buttonClick;
    AudioSource audio;
    int currentPanel;
	void Start()
    {
        audio = GetComponent<AudioSource>();
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
        audio.clip = nextMenu;
        audio.Play();
        levelPanels[currentPanel].SetActive(false);
        currentPanel++;
        Debug.Log(currentPanel);
        levelPanels[currentPanel].SetActive(true);
    }
    public void PreviousPanel()
    {
        audio.clip = prevMenu;
        audio.Play();
        levelPanels[currentPanel].SetActive(false);
        currentPanel--;
        Debug.Log(currentPanel);
        levelPanels[currentPanel].SetActive(true);
    }
    public void LevelPicked(int level)
    {
        audio.clip = buttonClick;
        audio.Play();
        StartCoroutine(LevelLoad(level));
       
    }
    IEnumerator LevelLoad(int level)
    {
        yield return new WaitForSeconds(0.5f);
        GameManager a = (GameManager)FindObjectOfType(typeof(GameManager));
        a.LevelLoad(level);
    }
}
