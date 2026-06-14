#include <Arduino.h>


#define PIN5_MASK 0B00100000


void setup() {
  DDRD |= PIN5_MASK;
}

void loop() {

PORTD |= PIN5_MASK;

delay(200);

PORTD &= ~PIN5_MASK;

delay(200);




}
