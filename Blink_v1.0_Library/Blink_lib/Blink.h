#ifndef BLINK_h
#define BLINK_h

#include "Arduino.h"

class Blink {
    
    private : 
        
        int pin;
    
    public : 
        
        Blink(int);    //Constructor
        void parpadear(int);

    
};

#endif