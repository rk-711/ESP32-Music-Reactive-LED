# ESP32-Music-Reactive-LED
A music-reactive LED project using ESP32, WS2812B LED strip, and MAX9814 microphone module. The LEDs dynamically change colors and patterns based on real-time audio input, creating a visually engaging light show. Built with Arduino IDE and customizable for different effects and patterns.

# 🎶 ESP32 Music Reactive LED Strip Project

This project uses an **ESP32**, a **MAX9814 microphone module**, and a **WS2812B addressable LED strip** to create a **music reactive lighting effect**.  
The LEDs change color and brightness based on the real-time audio signal captured by the microphone.

## 📹 Demo Video
[Click here to watch the project in action]https://drive.google.com/file/d/1g8-eeuDBgM1ulEj6Ryw7smV0ocURHB7z/view?usp=sharing

---

## 🛠 Components Used
- **ESP32 Development Board**
- **MAX9814 Microphone Module**
- **WS2812B Addressable LED Strip** (30 LEDs in this build)
- Jumper Wires
- Breadboard (optional)
- USB Cable for programming

---

## ⚙️ Circuit Connections
| ESP32 Pin | Module |
|-----------|--------|
| GPIO 5    | WS2812B Data In |
| 5V        | WS2812B VCC |
| GND       | WS2812B GND |
| GPIO 34   | MAX9814 Audio Out |
| 3.3V      | MAX9814 VCC |
| GND       | MAX9814 GND |

---

## 📄 Code
The Arduino code reads the microphone's analog output and maps the volume to LED brightness and color.  
You can find the code in the repository file: **`Music_Reactive_LED.ino`**

---

## 🚀 How to Run
1. Install **Arduino IDE** and add **ESP32 board support**.
2. Install **Adafruit NeoPixel** library from Library Manager.
3. Upload the code to your ESP32.
4. Play music near the MAX9814 microphone.
5. Watch your LEDs react in real-time!

---

## 📢 Author
Created by **Raja Karthi** as part of personal embedded systems projects.  
Feel free to fork, improve, and share!  

---
