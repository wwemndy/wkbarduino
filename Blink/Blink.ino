
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(13, OUTPUT);
   pinMode(12, OUTPUT);
}


void loop() {
  digitalWrite(13, HIGH);  
  digitalWrite(12, LOW);// turn the LED on (HIGH is the voltage level)
  delay(1000);              // wait for a second
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);// turn the LED off by making the voltage LOW
  delay(500);              // wait for a second
}
