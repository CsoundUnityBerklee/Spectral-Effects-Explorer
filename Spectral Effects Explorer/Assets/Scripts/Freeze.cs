using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Freeze : MonoBehaviour
{
    public bool FreezeSwitch;


    private void OnTriggerEnter(Collider other)
    {
        FreezeSwitch = true;
        FreezeSwitch = false;
        
    }

}
