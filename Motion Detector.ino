int pirPin = 2; // assign the PIR sensor signal pin to digital pin 2

void setup() {
  Serial.begin(9600); // initialize serial communication at 9600 baud rate
  pinMode(pirPin, INPUT); // set the PIR sensor pin as input
}

void loop() {
  int pirValue = digitalRead(pirPin); // read the PIR sensor value

  if (pirValue == HIGH) { // if motion is detected
    Serial.println("Motion detected!"); // output message to the Serial Monitor
  }
}
