int BUZZER=5; // connect buzzer at pin 5 

void setup() {

pinMode(BUZZER, OUTPUT); // set BUZZER as output
  
}

void loop() {
  digitalWrite(BUZZER, HIGH); //turn on buzzer
  delay(500); //delay
   digitalWrite(BUZZER, LOW); //turn off buzzer
  delay(1000); // delay
 
  tone(BUZZER, 1000); //generate 1KHz sound signal
   delay(500); //delay
   noTone(BUZZER); //stops sound
   delay(500); //delay

   tone(BUZZER, 500); //generate 500 Hz sound signal
   delay(1000); //delay
   noTone(BUZZER); //stop sound
   delay(1000); //delay
 

}
