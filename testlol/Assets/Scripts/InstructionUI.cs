using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using LoLSDK;

public class InstructionUI : MonoBehaviour {
    public GameObject[] tutPanels;
    int currentPanel;
    void Start()
    {
        LOLSDK.Instance.PlaySound("MenuMusic.mp3", true, true);
        currentPanel = 0;
    }
    public void NextPanel()
    {
        LOLSDK.Instance.PlaySound("menuIn.mp3");
       tutPanels[currentPanel].SetActive(false);
        currentPanel++;
        tutPanels[currentPanel].SetActive(true);
    }
    public void LoadLevel()
    {
        LOLSDK.Instance.PlaySound("menuClick.mp3");
        StartCoroutine(LevelLoad());
    }
    IEnumerator LevelLoad()
    {
        yield return new WaitForSeconds(0.5f);
        GameManager a = (GameManager)FindObjectOfType(typeof(GameManager));
        a.LevelEnd();
    }
}
