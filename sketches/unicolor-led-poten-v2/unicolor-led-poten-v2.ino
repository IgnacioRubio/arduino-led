/*
 * Program Name: Unicolor LED BLink Potenciometer
 * Version: v2
 * Author: Ignacio Rubio 
 * Date: 24 November 2017
 * Description: Blinks a LED using a potenciometer.
 */
 
const int kPinPot = A0;
const int kPinLed = 9;

void setup() {
  pinMode(kPinPot, INPUT);
  pinMode(kPinLed, OUTPUT);
}

long lastTime = 0;
int ledValue = LOW;

void loop() {
  int sensorValue;

  sensorValue = analogRead(kPinPot);

  if (millis() > lastTime + sensorValue) {
    if (ledValue == LOW) {
      ledValue = HIGH;
    }
    else {
      ledValue = LOW;
    }

    lastTime = millis();
    digitalWrite(kPinLed, ledValue);
  }
}
