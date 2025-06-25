// Define the pin used for the LED
#define LED_PIN 23

void setup() {
  // Set LED_PIN (GPIO 23) as output
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // Turn on the LED
  digitalWrite(LED_PIN, HIGH);
  delay(1000);  // Wait for 1 second

  // Turn off the LED
  digitalWrite(LED_PIN, LOW);
  delay(1000);  // Wait for 1 second
}

