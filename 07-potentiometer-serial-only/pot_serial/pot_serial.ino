#define POT_PIN 34  // ADC pin connected to potentiometer

void setup() {
  Serial.begin(115200);
}

void loop() {
  int adcValue = analogRead(POT_PIN);
  float voltage = (adcValue / 4095.0) * 3.3;
  float resistance = (voltage / 3.3) * 5000;

  Serial.print("ADC: ");
  Serial.print(adcValue);
  Serial.print(" | Voltage: ");
  Serial.print(voltage, 2);
  Serial.print(" V | Resistance: ");
  Serial.print(resistance, 0);
  Serial.println(" ohm");

  delay(200);
}
