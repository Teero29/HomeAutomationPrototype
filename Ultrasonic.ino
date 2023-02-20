// Define HC-SR04 pins
#define TRIGGER_PIN 7
#define ECHO_PIN 6

// Define variables
long duration;
int distance;

void setup() {
  // Initialize serial communication
  Serial.begin(9600);

  // Set trigger pin as output
  pinMode(TRIGGER_PIN, OUTPUT);
  // Set echo pin as input
  pinMode(ECHO_PIN, INPUT);
}

void loop() {
  // Send a 10 microsecond pulse to the trigger pin
  digitalWrite(TRIGGER_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIGGER_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIGGER_PIN, LOW);

  // Measure the duration of the pulse on the echo pin
  duration = pulseIn(ECHO_PIN, HIGH);

  // Calculate distance in centimeters
  distance = duration / 58;

  // Print distance to serial monitor
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  // Wait for 500 milliseconds before taking another measurement
  delay(500);
}
