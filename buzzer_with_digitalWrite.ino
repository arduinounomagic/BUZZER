int BUZZER=5; // connect buzzer at pin 5 

void setup() {

pinMode(BUZZER, OUTPUT); // set BUZZER as output
  
}

void loop() {
 digitalWrite(BUZZER, HIGH); //turn on buzzer
 
  delay(500); //delay
 
 digitalWrite(BUZZER, LOW); //turn off buzzer
 
  delay(1000); //delay
 
