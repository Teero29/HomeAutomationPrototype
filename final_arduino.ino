#include <SoftwareSerial.h>
#include <DHT.h>
#include <Servo.h>



// Set the DHT pin
#define DHTPIN 2
// Initialize DHT sensor.
DHT dht(DHTPIN, DHT11);

// Set pins for Bluetooth
#define bluetoothRX 0
#define bluetoothTX 1
// set serial for bluetooth
SoftwareSerial mySerial(bluetoothRX, bluetoothTX);


Servo servo;
int pirPin = 4; // assign the PIR sensor signal pin to digital pin 4
int led = 13;
float temperature;
float humidity;
char val; //Message buffer
bool fan = false;
char character; 
void setup() {
  // Open serial communications and wait for port to open:
  Serial.begin(9600);
  dht.begin();
  // Open serial communication for the Bluetooth Serial Port
  mySerial.begin(115200);
  // Attach servo to pin 9
  servo.attach(9);
  temperature = dht.readTemperature();
  humidity = dht.readHumidity();
  pinMode(pirPin, INPUT); // set the PIR sensor pin as input
  pinMode(led, OUTPUT);
}

void loop() {

  // Read temperature and humidity from the DHT sensor.
  float new_temperature = dht.readTemperature();
  float new_humidity = dht.readHumidity();
  
  if (new_temperature>=temperature*1.1 or new_temperature<=temperature*0.9) {
    temperature = new_temperature;
    Serial.print("Temperature: ");
    Serial.print(temperature);
    Serial.print("°C ");
    mySerial.write(temperature);
  }

  if (fan == false and temperature>=20) {
    mySerial.write("FAN_ON");
    fan = true;
  }

  if (fan == true and temperature<=20) {
    mySerial.write("FAN_OFF");
    fan = false;
  }

  if (mySerial.available()) {
    if (mySerial.read() == "alarm") {
      // rotate counter-clockwise full-speed
      servo.writeMicroseconds(1000);

      // rotation stopped
      servo.writeMicroseconds(1500);
    }
  }

  int pirValue = digitalRead(pirPin); // read the PIR sensor value

  if (pirValue == LOW) {
    digitalWrite(led, LOW);  
    delay(100);  
  }

  if (pirValue == HIGH) { // if motion is detected
    Serial.print("Motion detected");
    digitalWrite(led, HIGH); 
    delay(100);  
  }

}

