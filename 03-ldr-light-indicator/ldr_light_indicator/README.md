# LDR Light Detector (Analog & Digital Output)

This project uses an LDR (Light Dependent Resistor) sensor to detect light intensity and activate an LED indicator based on ambient brightness.

## 🔧 Hardware Required
- ESP32 board
- LDR sensor module (with AO and DO pins)
- Red LED (for dark)
- Green LED (for bright)
- 220Ω resistors, breadboard, jumper wires

## ⚙️ How It Works
- Analog value from AO is read and printed to the Serial Monitor.
- Digital value from DO is used as a simple threshold trigger:
  - **If it's dark**, the red LED turns on.
  - **If it's bright**, the green LED turns on.

## 📁 Files
- `ldr_light_indicator.ino`: Arduino code to read sensor and control LEDs
