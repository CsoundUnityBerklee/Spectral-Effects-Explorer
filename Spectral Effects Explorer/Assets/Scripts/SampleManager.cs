using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SampleManager : MonoBehaviour
{


    // Clip Selector Functionality 


    [SerializeField] AudioSource _source;
    [SerializeField] AudioClip [] _clips;


    // Start is called before the first frame update
    void Start()
    {
        _source = GetComponent<AudioSource>();
        _source.clip = _clips[Random.Range(0, _clips.Length)];
        _source.Play();
    }

   
    private void OnTriggerEnter(Collider other)
    {
        //Sample Randomization
        _source.clip = _clips[Random.Range(0, _clips.Length)];
        _source.Play();
    }


}
