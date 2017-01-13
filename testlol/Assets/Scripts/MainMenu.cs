using UnityEngine;
using System.Collections;

public class MainMenu : MonoBehaviour
{
    Animator mainAnim, lvlAnim;
    public GameObject mainMenuPanel, lvlPanel;
	// Use this for initialization
	void Start ()
    {
        mainAnim = mainMenuPanel.GetComponent<Animator>();
        lvlAnim = lvlPanel.GetComponent<Animator>();
    }
	
	// Update is called once per frame
	void Update ()
    {
	
	}
    public void ToLevel()
    {
        mainAnim.Play("MainMenuClose");
        lvlAnim.Play("ToLevel");
    }
    public void ToMenu()
    {
       mainAnim.Play("MainMenuOpen");
       lvlAnim.Play("ToMenu");
    }
    public void LevelPicked(int level)
    {
        GameManager a = (GameManager)FindObjectOfType(typeof(GameManager));
        a.LevelLoad(level);
    }
}
