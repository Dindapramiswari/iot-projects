#include <DHT.h>

#define DHTPIN 13      // GPIO pin connected to the DHT22 sensor
#define DHTTYPE DHT22  // Define the type of DHT sensor

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  while (!Serial);  // Wait for serial connection (for some boards)

  dht.begin();
  Serial.println("Starting DHT22 sensor reading...");
}

void loop() {
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();

  if (isnan(humidity) || isnan(temperature)) {
    Serial.println("Failed to read from DHT22 sensor");
  } else {
    Serial.print("Humidity: ");
    Serial.print(humidity);
    Serial.print(" %\t");
    Serial.print("Temperature: ");
    Serial.print(temperature);
    Serial.println(" °C");
  }

  delay(1000);  // Read every 1 second
}
