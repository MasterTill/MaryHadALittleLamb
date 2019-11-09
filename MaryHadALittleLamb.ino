// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

void playNote(float freq, float duration) {
  float period = 1 / freq;
  float numPeriods = duration / period;
  for(int t = 0; t < numPeriods; t = t + 1)
  {
    float f = t / (float)numPeriods;
    digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
    delayMicroseconds(1000000 * period * f);                       // wait for a second
    digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
    delayMicroseconds(1000000 * period * (1-f));                       // wait for a second
  }
}

// the loop function runs over and over again forever
void loop() {
  float Afreq = 440;
  float Gfreq = Afreq / 1.06 / 1.06;
  float Ffreq = Gfreq / 1.06 / 1.06;
  float Cfreq = Afreq * 1.06 * 1.06 * 1.06;
  float duration = 0.25;
  playNote(Afreq, duration);
  playNote(Gfreq, duration);
  playNote(Ffreq, duration);
  playNote(Gfreq, duration);
  playNote(Afreq, duration);
  playNote(Afreq, duration);
  playNote(Afreq, duration);
  delay(1000 * duration);
  playNote(Gfreq, duration);
  playNote(Gfreq, duration);
  playNote(Gfreq, duration);
  delay(1000 * duration);
  playNote(Afreq, duration);
  playNote(Cfreq, duration);
  playNote(Cfreq, duration);
  delay(1000 * duration);
  playNote(Afreq, duration);
  playNote(Gfreq, duration);
  playNote(Ffreq, duration);
  playNote(Gfreq, duration);
  playNote(Afreq, duration);
  playNote(Afreq, duration);
  playNote(Afreq, duration);
  playNote(Afreq, duration);
  playNote(Gfreq, duration);
  playNote(Gfreq, duration);
  playNote(Afreq, duration);
  playNote(Gfreq, duration);
  playNote(Ffreq, duration);
  
  
  for(;;);
}
