#include <Arduino.h>

#ifdef STM32
HardwareSerial RPi(PA10, PA9);
#define Serial RPi
#endif

const int ledPins[] = {PB6, PB7, PB8};

void setup() {
  for (int i = 0; i < 3; i++) pinMode(ledPins[i], OUTPUT);
  Serial.begin(115200);
  for (int i = 0; i < 3; i++) digitalWrite(ledPins[i], HIGH);
}

void loop() {
  for (int i = 0; i < 3; i++) digitalWrite(ledPins[i], HIGH);
  delay(1000);
  for (int i = 0; i < 3; i++) digitalWrite(ledPins[i], LOW);
  delay(1000);
  Serial.println(millis());
}
