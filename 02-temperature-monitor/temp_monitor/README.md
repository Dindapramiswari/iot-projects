# Temperature & Humidity Monitor (DHT22)

This project reads temperature and humidity data using the DHT22 sensor and prints the values to the Serial Monitor.

## 🔧 Hardware Used
- ESP32 / Arduino board
- DHT22 sensor
- 10KΩ pull-up resistor (recommended)
- Jumper wires

## 📌 Pin Configuration
- `DHTPIN` is set to GPIO 13 (you can change it as needed)

## 🧠 How It Works
The `DHT` library is used to read temperature and humidity data. The values are printed to the Serial Monitor every 1 second.

## 📁 Files
- `temp_monitor.ino`: Contains the code for sensor reading
