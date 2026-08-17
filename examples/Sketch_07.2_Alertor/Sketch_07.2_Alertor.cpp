/**********************************************************************
  Filename    : Alertor
  Description : Control passive buzzer by button.
  Author      : www.freenove.com
  Modification: 2024/07/01
**********************************************************************/

#include <Arduino.h>
#define PIN_BUZZER 14
#define PIN_BUTTON 21

void alert();

void setup() {
  pinMode(PIN_BUTTON, INPUT);
  pinMode(PIN_BUZZER, OUTPUT);
  ledcAttach(PIN_BUZZER, 2000, 8);
  ledcWriteTone(PIN_BUZZER, 2000);
  delay(300);
}

void loop() {
  if (digitalRead(PIN_BUTTON) == LOW) {
    alert();
  } else {
    ledcWriteTone(PIN_BUZZER, 0);
  }
}

void alert() {
  float sinVal;
  int toneVal;
  for (int x = 0; x < 360; x += 10) {
    sinVal = sin(x * (PI / 180));
    toneVal = 2000 + sinVal * 500;
    ledcWriteTone(PIN_BUZZER, toneVal);
    delay(10);
  }
}
