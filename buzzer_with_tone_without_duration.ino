 int BUZZER=7; // connect buzzer at pin 7

void setup() {

pinMode(BUZZER, OUTPUT); // set BUZZER as output
  
}

void loop() {
 
 tone(BUZZER, 1000); //generate 1KHz sound signal
   
   delay(500); //delay
  
   noTone(BUZZER); //stops sound
   
  delay(2000); //delay
}
