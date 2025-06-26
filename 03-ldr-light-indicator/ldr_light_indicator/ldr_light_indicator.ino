#define AO_PIN 34     // Analog output from LDR sensor
#define DO_PIN 15     // Digital output from LDR sensor

#define RED_LED 2     // Red LED indicates darkness
#define GREEN_LED 4   // Green LED indicates brightness

void setup() {
  Serial.begin(115200);
  pinMode(DO_PIN, INPUT);
  pinMode(RED_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
}

void loop() {
  int analogValue = analogRead(AO_PIN);
  int digitalValue = digitalRead(DO_PIN);

  Serial.print("Analog: ");
  Serial.print(analogValue);
  Serial.print(" | Digital: ");
  Serial.println(digitalValue);

  if (digitalValue == 0) {  // Dark environment
    digitalWrite(RED_LED, HIGH);
    digitalWrite(GREEN_LED, LOW);
  } else {  // Bright environment
    digitalWrite(RED_LED, LOW);
    digitalWrite(GREEN_LED, HIGH);
  }

  delay(500);  // Wait for 0.5 seconds
}
