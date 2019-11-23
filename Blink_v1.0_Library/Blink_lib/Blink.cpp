#include "Blink.h"

Blink::Blink(int pinc){  //Función Constructor, no devuleve cosas (las crea).
    
    pin = pinc;
    
}

void Blink::parpadear(int time){
    
    digitalWrite(pin,1);
    delay(500);
     digitalWrite(pin,0);
    delay(500);
}