using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CsoundSend : MonoBehaviour
{
    // GameObjects
    [SerializeField] GameObject[] _platforms;

    [SerializeField] GameObject _controller; // aka sphere


    // CsoundUnity
    CsoundUnity csound;


    public float [] _distances;
    public float distanceMax;
    public float distanceMaxSpeedPitch;

    // Freeze
    public Freeze freeze;
    public bool isFreezing;

    // Start is called before the first frame update
    void Start()
    {
        csound = GetComponent<CsoundUnity>();
        isFreezing = false;
        
    }

    // Update is called once per frame
    void Update()
    {

        for (int i = 0; i < _distances.Length; i++) {

            _distances[i] = Vector3.Distance(_platforms[i].transform.position, _controller.transform.position);


            // Parameters
            csound.SetChannel("Scale", Map(_distances[0], 0.1f, distanceMaxSpeedPitch, 0.01f, 4.0f));
            csound.SetChannel("DelayL", Map(_distances[1], 0.1f, distanceMax, 0.01f, 5.0f));;
            csound.SetChannel("Blurtime", Map(_distances[2], 0.1f, distanceMax, 0.01f, 2.0f)); ;
            csound.SetChannel("DelayR", Map(_distances[3], 0.1f, distanceMax, 0.01f, 5.0f));
            csound.SetChannel("Speed", Map(_distances[4], 0.1f, distanceMaxSpeedPitch, 0.01f, 4.0f));

            // Freeze Parameters
            csound.SetChannel("FreezeRate", Map(_distances[2], 0.1f, distanceMaxSpeedPitch, 0.01f, 5.0f));
          

        }



        if (freeze.GetComponent<Freeze>().FreezeSwitch == true && !isFreezing)
        {
            csound.SetChannel("Freeze", 1);
            isFreezing = true;
        }

        else if (freeze.GetComponent<Freeze>().FreezeSwitch == true && isFreezing)
        {
            csound.SetChannel("Freeze", 0);
            isFreezing = false;
        }

      


    }


    // Map Function
    float Map(float x, float in_min, float in_max, float out_min, float out_max)
    {
        return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
    }
}



