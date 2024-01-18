#include <Arduino.h>

const int ledPins[] = {PB6, PB7, PB8};

void setup() {
  for (int i = 0; i < 3; i++) pinMode(ledPins[i], OUTPUT);
}

void loop() {
  for (int i = 0; i < 3; i++) digitalWrite(ledPins[i], HIGH);
  delay(1000);
  for (int i = 0; i < 3; i++) digitalWrite(ledPins[i], LOW);
  delay(1000);
}
