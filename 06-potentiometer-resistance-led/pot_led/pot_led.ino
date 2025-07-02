#define POT_PIN 34  // ADC pin connected to potentiometer

// LED pins
#define LED1 25
#define LED2 26
#define LED3 27

void setup() {
  Serial.begin(115200);

  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
}

void loop() {
  int adcValue = analogRead(POT_PIN);
  float voltage = (adcValue / 4095.0) * 3.3;
  float resistance = (voltage / 3.3) * 5000;  // Assuming 5k potentiometer

  Serial.print("ADC: ");
  Serial.print(adcValue);
  Serial.print(" | Voltage: ");
  Serial.print(voltage, 2);
  Serial.print(" V | Resistance: ");
  Serial.print(resistance, 0);
  Serial.println(" ohm");

  // LED logic based on resistance
  if (resistance < 1000) {
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
  } else if (resistance < 3000) {
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
  } else if (resistance < 4500) {
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, HIGH);
    digitalWrite(LED3, HIGH);
  } else {
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, HIGH);
    digitalWrite(LED3, HIGH);
  }

  delay(200);
}
