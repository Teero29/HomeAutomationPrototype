
#include <Servo.h>

// Create a servo object
Servo servo;

void setup() {
  // Attach servo to pin 9
  servo.attach(9);
}

void loop() {
  // Move servo to 0 degrees
  servo.write(0);
  delay(1000);  // Wait 1 second

  // Move servo to 90 degrees
  servo.write(90);
  delay(1000);  // Wait 1 second

  // Move servo to 180 degrees
  servo.write(180);
  delay(1000);  // Wait 1 second
}
