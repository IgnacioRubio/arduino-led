/*
 * Program Name: Unicolor LED Blink
 * Author: Ignacio Rubio 
 * Date: 13 November 2017
 * Description:
 *  Turns a LED on for one half second then off for one
 * half second repeatedly.
 */

// pind definition
const int kPinLed = 13;

/*
 * Function Name: setup
 * Purpose: Run once when the system powers up.
 */
void setup() {
  pinMode(kPinLed, OUTPUT);

}

/*
 * Function Name: loop
 * Purpose: Runs over and over again, as long as the Arduino
 * has power.
 */
void loop() {
  digitalWrite(kPinLed, HIGH);   // led ON
  delay(500);                    // 500 ms waiting
  digitalWrite(kPinLed, LOW);    // led OFF
  delay(500);                    // 500 ms waiting

}
