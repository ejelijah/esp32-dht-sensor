# DHT11 Temperature & Humidity Monitor

A lightweight embedded systems project designed to monitor environmental conditions using a DHT11 sensor. This project reads real-time temperature and humidity data and outputs it to the Serial Monitor.

## Features
- Real-time temperature monitoring (Celsius).
- Real-time humidity monitoring (Percentage).
- Error detection for sensor wiring or communication failures.
- Optimized for 115200 baud rate communication.

## Hardware Requirements
- **Microcontroller:** Arduino-compatible board (e.g., ESP32, ESP8266, or Arduino Uno).
- **Sensor:** DHT11 Temperature and Humidity Sensor.
- **Wiring:** Jumper wires and a breadboard.

## Pin Configuration
| Component | Sensor Pin | Microcontroller Pin |
| :--- | :--- | :--- |
| DHT11 | VCC | 3.3V / 5V |
| DHT11 | GND | GND |
| DHT11 | DATA | Pin 4 |

## Installation
1.  Ensure you have the [Arduino IDE](https://www.arduino.cc/en/software) installed.
2.  Install the **DHT sensor library** by Adafruit via the Library Manager (`Ctrl+Shift+I`).
3.  Install the **Adafruit Unified Sensor** library as a dependency.
4.  Copy the code from `main.cpp` (or your sketch file) into the IDE.
5.  Select your board and port, then click **Upload**.

## Usage
1.  Open the **Serial Monitor** in the Arduino IDE.
2.  Set the baud rate to **115200**.
3.  The system will initialize and begin displaying environmental data every 2 seconds.
4.  <img width="400" alt="IMG_0141" src="https://github.com/user-attachments/assets/56bea547-b828-4729-932c-aa7ae2871ef6" />
