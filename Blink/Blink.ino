
#define pin 5
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 
  pinMode(5, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(5, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(5, LOW);    // turn the LED off by making the voltage LOW
  delay(5000);                       // wait for a second
}
