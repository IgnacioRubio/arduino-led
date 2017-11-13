/*
 * Program Name: Unicolor 8 LED Blink
 * Author: Ignacio Rubio 
 * Date: 13 November 2017
 * Description:
 *  Turns 8 LEDs (4 red and 4 yellow) on for one half second then off for one
 * half second repeatedly.
 */

// pind definition
const int kPinLed0 = 2;  // LED red
const int kPinLed1 = 3;  // LED yellow
const int kPinLed2 = 4;  // LED red
const int kPinLed3 = 5;  // LED yellow
const int kPinLed4 = 6;  // LED red
const int kPinLed5 = 7;  // LED yellow
const int kPinLed6 = 8;  // LED red
const int kPinLed7 = 9;  // LED yellow

/*
 * Function Name: setup
 * Purpose: Run once when the system powers up.
 */
void setup() {
  pinMode(kPinLed0, OUTPUT);
  pinMode(kPinLed1, OUTPUT);
  pinMode(kPinLed2, OUTPUT);
  pinMode(kPinLed3, OUTPUT);
  pinMode(kPinLed4, OUTPUT);
  pinMode(kPinLed5, OUTPUT);
  pinMode(kPinLed6, OUTPUT);
  pinMode(kPinLed7, OUTPUT);
}

/*
 * Function Name: loop
 * Purpose: Runs over and over again, as long as the Arduino
 * has power.
 */
void loop() {
  // turns on LEDs
  digitalWrite(kPinLed0, HIGH);
  delay(250);
  digitalWrite(kPinLed1, HIGH);
  delay(500);
  digitalWrite(kPinLed2, HIGH);
  delay(250);
  digitalWrite(kPinLed3, HIGH);
  delay(500);
  digitalWrite(kPinLed4, HIGH);
  delay(250);
  digitalWrite(kPinLed5, HIGH);
  delay(500);
  digitalWrite(kPinLed6, HIGH);
  delay(250);
  digitalWrite(kPinLed7, HIGH);
  delay(500); 

  // turns off LEDs
  digitalWrite(kPinLed0, LOW);
  delay(250);
  digitalWrite(kPinLed1, LOW);
  delay(500);
  digitalWrite(kPinLed2, LOW);
  delay(250);
  digitalWrite(kPinLed3, LOW);
  delay(500);
  digitalWrite(kPinLed4, LOW);
  delay(250);
  digitalWrite(kPinLed5, LOW);
  delay(500);
  digitalWrite(kPinLed6, LOW);
  delay(250);
  digitalWrite(kPinLed7, LOW);
  delay(500);

}
