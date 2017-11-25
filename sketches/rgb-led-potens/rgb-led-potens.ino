/*
 * Program Name: RGB LED 
 * Version: v1
 * Author: Ignacio Rubio 
 * Date: 25 November 2017
 * Description: Turns on a RGB LED using 3 potenciometers.
 */

const int kPinPot1 = A0;
const int kPinPot2 = A1;
const int kPinPot3 = A2;

const int kPinLed_B = 6;
const int kPinLed_G = 10;
const int kPinLed_R = 11; 

void setup() {
  pinMode(kPinLed_B, OUTPUT);
  pinMode(kPinLed_G, OUTPUT);
  pinMode(kPinLed_R, OUTPUT);
}

void loop() {
  int potValue;
  int ledValue;

  potValue = analogRead(kPinPot1);
  ledValue = map(potValue, 0, 1023, 0, 255);
  analogWrite(kPinLed_R, ledValue);

  potValue = analogRead(kPinPot2);
  ledValue = map(potValue, 0, 1023, 0, 255);
  analogWrite(kPinLed_G, ledValue);

  potValue = analogRead(kPinPot3);
  ledValue = map(potValue, 0, 1023, 0, 255);
  analogWrite(kPinLed_B, ledValue);
}
