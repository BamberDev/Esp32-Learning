# ESP32 Learning

Learning ESP32-S3 microcontroller programming (Freenove ESP32-S3-WROOM-1) with PlatformIO. This project contains a series of exercises, from the basics (blinking an LED) to advanced topics (camera, BLE, WiFi, USB HID).

## Why this project?

I've always wanted to learn microcontroller programming - ESP32 in particular - it seems both interesting and useful to me.

## Hardware & Tools

- **Board:** Freenove ESP32-S3-WROOM-1
- **Framework:** PlatformIO (Arduino)
- **Platform:** `espressif32`
- **Monitor:** 115200 baud

## Project Structure

```
├── src/                 # active sketch (runs on the board)
├── examples/            # all exercises, grouped by topic
├── include/             # project headers
├── lib/                 # project libraries
├── test/                # tests
└── platformio.ini       # PlatformIO configuration
```

## Credits

All sketches are from the official [Freenove Ultimate Starter Kit for ESP32-S3](https://docs.freenove.com/projects/fnk0082/en/latest/)

## Topics

| Topic                      | Sketches                                         |
| -------------------------- | ------------------------------------------------ |
| 01. LED basics             | Blink                                            |
| 02. Buttons                | ButtonAndLed, TableLamp                          |
| 03. Flowing light          | FlowingLight                                     |
| 04. Breathing light        | BreathingLight, FlowingLight2                    |
| 05. RGB light              | RandomColorLight, GradientColorLight             |
| 06. LEDs and WS2812        | LEDPixel, RainbowLight                           |
| 07. Sound                  | Doorbell, Alertor                                |
| 08. Serial communication   | SerialPrinter, SerialRW                          |
| 09. ADC                    | Analog-to-Digital Converter                      |
| 10. Touch sensors          | TouchRead, TouchLamp                             |
| 11. RGB light (RGBW)       | SoftLight, SoftColorfulLight, SoftRainbowLight   |
| 12. Night lamp             | NightLamp                                        |
| 13. Thermometer            | Thermometer (DHT)                                |
| 14. Joystick               | Joystick                                         |
| 15. Flowing light v2       | FlowingLight02                                   |
| 16. Displays               | 7-segment (1 and 4 digits), LED Matrix           |
| 17. Motors                 | Motor via relay, L293D                           |
| 18. Servos                 | Servo Sweep, Potentiometer control               |
| 19. Stepper motor          | Stepper Motor                                    |
| 20. LCD display            | LCD1602                                          |
| 21. Distance sensor        | Ultrasonic Ranging (HC-SR04)                     |
| 22. Character input        | Get Input Characters, Combination Lock           |
| 23. Infrared               | IR Remote Control, LED control via IR            |
| 24. Temperature & humidity | DHT Sensor                                       |
| 25. Motion sensor          | PIR Motion Sensor                                |
| 26. Accelerometer          | Acceleration Detection                           |
| 27. Bluetooth / BLE        | BLE USART, BluetoothToLed                        |
| 28. SD card                | SDMMC Test                                       |
| 29. Music from SD          | Play MP3 From SD, SDMMC Music                    |
| 30. WiFi                   | Station, AP, AP + Station                        |
| 31. WiFi networking        | Client, Server                                   |
| 32. Camera                 | Camera Web Server, Video Web Server, Camera + SD |
| 33. Camera TCP             | Camera TCP Server                                |
| 34. USB                    | Serial, Mouse, Keyboard, Consumer Control        |

## Progress

| Topic                | Status       |
| -------------------- | ------------ |
| 01. LED basics       | ✅ completed |
| 02. Buttons          | ✅ completed |
| 03. Flowing light    | ✅ completed |
| 04. Breathing light  | ✅ completed |
| 05. RGB light        | ✅ completed |
| 06. LEDs and WS2812  | ✅ completed |
| 07. Sound            | ✅ completed |
| 08. Serial comm      | ✅ completed |
| 09. ADC              | ✅ completed |
| 10. Touch sensors    | 📌 planned   |
| 11. RGB light (RGBW) | 📌 planned   |
| 12. Night lamp       | 📌 planned   |
| 13. Thermometer      | 📌 planned   |
| 14. Joystick         | 📌 planned   |
| 15. Flowing light v2 | 📌 planned   |
| 16. Displays         | 📌 planned   |
| 17. Motors           | 📌 planned   |
| 18. Servos           | 📌 planned   |
| 19. Stepper motor    | 📌 planned   |
| 20. LCD display      | 📌 planned   |
| 21. Distance sensor  | 📌 planned   |
| 22. Character input  | 📌 planned   |
| 23. Infrared         | 📌 planned   |
| 24. Temp & humidity  | 📌 planned   |
| 25. Motion sensor    | 📌 planned   |
| 26. Accelerometer    | 📌 planned   |
| 27. Bluetooth / BLE  | 📌 planned   |
| 28. SD card          | 📌 planned   |
| 29. Music from SD    | 📌 planned   |
| 30. WiFi             | 📌 planned   |
| 31. WiFi networking  | 📌 planned   |
| 32. Camera           | 📌 planned   |
| 33. Camera TCP       | 📌 planned   |
| 34. USB              | 📌 planned   |
