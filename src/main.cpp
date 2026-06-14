#include <Arduino.h>

//Masks 
#define ZERO 0B00000000
#define PIN_MASK 0B00000001


void setup() {

//Mask modifyied by 5 bits used to set Pin 5 OUTPUT
  DDRD |= (PIN_MASK << 5);
  DDRD |= (PIN_MASK << 6);
  
}

void loop() {

//Pin 5 is turned on
  PORTD |= (PIN_MASK << 5);
  PORTD |= (PIN_MASK << 6);


  delay(200);

//Pin 5 is turned off
  PORTD &= ~(PIN_MASK <<5);
  PORTD &= ~(PIN_MASK <<6);

  delay(200);




}
