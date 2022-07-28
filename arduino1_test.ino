// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

void beep(int time, int delayTime) { // initial beep
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(time);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW); 
  delay(delayTime);
}

//fastBeep for S
void fastBeep() {
  beep(200, 200);
}
void slowBeep() {
  beep(500, 200);
}
void S() {
  fastBeep();
  fastBeep();
  fastBeep();
}

void O() {
  slowBeep();
  slowBeep();
  slowBeep();
}

void SOS() {
  S();
  O();
  S();
  delay(3000);
}
// the loop function runs over and over again forever
void loop() {
  SOS();
}
