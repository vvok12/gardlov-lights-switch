#include <Arduino.h>
#define LIGHT_PIN 12

/* 
  power light_pin every 5 minutes for 1 second
*/

const long sec = 1000;
const long keepOffForSeconds = 300; 
const long keepOnForSeconds = 1; 
unsigned long secondsPassed = 0;
unsigned long prevSecMillis = 0;
bool lightOn = true;

void setup() {
  pinMode(LIGHT_PIN, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  prevSecMillis = millis();
}

void loop() {
  unsigned long currentMillis = millis();

  if (currentMillis - prevSecMillis >= sec) {
    prevSecMillis = currentMillis;
    secondsPassed+=1;
    digitalWrite(LED_BUILTIN, !digitalRead(LED_BUILTIN));
  } 

  if (!lightOn && secondsPassed >= keepOffForSeconds){
    lightOn = true;
    secondsPassed = 0;
  }

  if (lightOn && secondsPassed >= keepOnForSeconds){
    lightOn = false;
    secondsPassed = 0;
  }

  digitalWrite(LIGHT_PIN, lightOn ? HIGH : LOW);
}