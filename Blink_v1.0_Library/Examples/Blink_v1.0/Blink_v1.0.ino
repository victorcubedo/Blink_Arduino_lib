#include "Blink.h"

Blink led1 (2);  //Objeto 1 Nombre : Led1 conectado al pin 2 de Arduino.
Blink led2 (3);  //Objeto 2 Nombre : Led2 conectado al pin 3 de Arduino.

void setup() {
  

}

void loop() {
    led1.parpadear(500); //objeto.parpadear(time). 500ms
    led2.parpadear(500);
}
