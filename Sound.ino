int soundSensorPin = A0; // Define the sound sensor pin
int soundSensorValue; // Define the sound sensor value variable

void setup() {
  Serial.begin(9600); // Start serial communication
}

void loop() {
  soundSensorValue = analogRead(soundSensorPin); // Read the sound sensor value
  Serial.println(soundSensorValue); // Print the sound sensor value to the serial monitor
  delay(100); // Wait for 100ms before reading again
}
