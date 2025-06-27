# Distance Sensor with LED Indicator (HC-SR04)

This project uses an ultrasonic sensor to measure distance and turns on LEDs based on the detected range.

## 🔧 Hardware
- ESP32 board
- HC-SR04 ultrasonic sensor
- Red LED (for "too close")
- Green LED (for "safe distance")
- Jumper wires and breadboard

## 🚦 LED Logic
- **< 8 cm** → Red LED ON
- **> 16 cm** → Green LED ON
- **8–16 cm** → Both LEDs OFF

## 📁 File
- `distance_led.ino`: Main code with LED indicators
