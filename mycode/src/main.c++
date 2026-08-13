#include "DHT.h"

#define DHTPIN 4     // Digital pin connected to the DHT sensor
#define DHTTYPE DHT11   // DHT 11

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(115200);
  Serial.println(F("DHT11 Test Starting..."));
  dht.begin();
}

void loop() {
  delay(2000); // Wait a few seconds between measurements

  float h = dht.readHumidity();
  float t = dht.readTemperature(); // Celsius

  // Check if any reads failed
  if (isnan(h) || isnan(t)) {
    Serial.println(F("Failed to read from DHT sensor! Check your wiring."));
    return;
  }

  Serial.print(F("Humidity: "));
  Serial.print(h);
  Serial.print(F("%  Temperature: "));
  Serial.print(t);
  Serial.println(F("°C "));
}
