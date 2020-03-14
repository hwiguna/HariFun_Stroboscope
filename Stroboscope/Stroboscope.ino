  //Simple Stroboscope by Hari Wiguna
  byte ledPin = 13; // Digital Pin 13
  byte potPin = 0; // Analog Pin 0
  
  void setup() {
    pinMode(potPin, INPUT);
    pinMode(ledPin, OUTPUT);
  }
  
  void loop() {
    int potValue = analogRead(potPin);
    int delayValue = potValue/4; // This controls the frequency of the flashing, smaller = faster flash.
    digitalWrite(ledPin,HIGH);
    delay(2); // How long should the strobe be on.  Larger is brighter, but will blur the effect.
    digitalWrite(ledPin,LOW);
    delay(delayValue); // How long should the strobe be off. 
  }
