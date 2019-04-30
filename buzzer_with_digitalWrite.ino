/*
*How to operate buzzer by Arduino uno
*This is a very basic example which will help you to understand basic operation of buzzer using Arduino Uno.
*
*for more detail about this project please visit:https://arduinounomagic.com/2019/02/buzzer-with-arduino.html
*
*Copyright (C) 2007 Free Software Foundation, Inc. <arduinounomagic@gmail.com>
*
*for more projects based on Arduino uno please visit: https://arduinounomagic.com/
*/

int BUZZER=7; // connect buzzer at pin 7

void setup() {

pinMode(BUZZER, OUTPUT); // set BUZZER as output
  
}

void loop() {
 digitalWrite(BUZZER, HIGH); //turn on buzzer
 
  delay(500); //delay
 
 digitalWrite(BUZZER, LOW); //turn off buzzer
 
  delay(1000); //delay
 
