/*
*How to operate buzzer with Arduino uno
*This is a very basic example which will help you to understand the working of the tone function for buzzer.
*
*for more detail about this project please visit:
*
*Copyright (C) 2007 Free Software Foundation, Inc. <arduinounomagic@gmail.com>
*for more projects based on Arduino uno please visit: https://arduinounomagic.blogspot.com/
*/
int BUZZER=7; // connect buzzer at pin 7 

void setup() {

pinMode(BUZZER, OUTPUT); // set BUZZER as output
  
}

void loop() {
  tone(BUZZER, 2000, 100); //generate sound signal

   delay(1000); //delay
}
