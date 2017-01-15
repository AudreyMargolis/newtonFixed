using UnityEngine;
using System.Collections;
using UnityEngine.UI;
public class AutoType : MonoBehaviour
{

    float letterPause = 0.2f;
   // public AudioClip sound;

    string message;
    Text text;
    // Use this for initialization
    void OnEnable()
    {
        text = gameObject.GetComponent<Text>();
        message = text.text;
        text.text = "";
        StartCoroutine(TypeText());
    }

    IEnumerator TypeText()
    {
        foreach (char letter in message.ToCharArray())
        {
            text.text += letter;
            //if (sound)
            // audio.PlayOneShot(sound);
            letterPause = Random.Range(0.01f, 0.08f);
            yield return new WaitForSeconds(letterPause);
        }
    }
}
