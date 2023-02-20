
#include <DHT.h>

// Set the DHT pin
#define DHTPIN 2

// Initialize DHT sensor.
DHT dht(DHTPIN, DHT11);

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  delay(2000); // Wait for 2 seconds between readings.

  // Read temperature and humidity from the DHT sensor.
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();

  // Print temperature and humidity values to the serial monitor.
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.print("°C ");
  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.print("%");
  Serial.println();
}