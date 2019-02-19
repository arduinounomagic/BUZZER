
int BUZZER=5; // connect buzzer at pin 5 

void setup() {

pinMode(BUZZER, OUTPUT); // set BUZZER as output
  
}

void loop() {
  tone(BUZZER, 2000, 100); //generate sound signal

   delay(1000); //delay
}
