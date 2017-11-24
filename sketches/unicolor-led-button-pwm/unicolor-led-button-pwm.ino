/*
 * Program Name: Unicolor LED Buttons PWM
 * Author: Ignacio Rubio 
 * Date: 20 November 2017
 * Description: Controls LED's intensity using two buttons and PWM feature.
 */

const int kPinButton1 = 2;
const int kPinButton2 = 3;
const int kPinLed = 9;

void setup() {
  pinMode(kPinButton1, INPUT);
  pinMode(kPinButton2, INPUT);
  pinMode(kPinLed, OUTPUT);
  
  digitalWrite(kPinButton1, HIGH);  // turn on pull-up resistor
  digitalWrite(kPinButton2, HIGH);  // turn on pull-up resistor
}

int ledBrightness = 128;

void loop() {
  if (digitalRead(kPinButton1) == LOW) {
    ledBrightness--;
  }
  else if (digitalRead(kPinButton2) == LOW) {
    ledBrightness++;
  }

  ledBrightness = constrain(ledBrightness, 0, 255);
  analogWrite(kPinLed, ledBrightness);
  delay(20);
}
