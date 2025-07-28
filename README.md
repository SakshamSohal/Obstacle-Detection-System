 Modular Ultrasonic Obstacle Detection System

A basic and low-cost system using Arduino Nano and HC-SR04 to detect obstacles and indicate distance zones via LEDs. Designed with modularity in mind for future integration into UAVs and robotics platforms.


 Project Overview

- **Distance sensing** with HC-SR04
- **Visual alerts** using Red, Yellow, and Green LEDs
- **Custom PCB** designed in KiCAD 9 
- **Arduino-based firmware** for control and detection logic

---
 Components & Pin Mapping

| Component        | Arduino Nano Pin |
|-----------------|------------------|
| HC-SR04 Trig     | D9               |
| HC-SR04 Echo     | D7               |
| Green LED        | D2               |
| Yellow LED       | D3               |
| Red LED          | D4              |

Power and ground connections are shared among all components.

---


 Arduino Code Summary

The Arduino sketch reads distance from the sensor and lights the appropriate LED:
- **Green**: Safe (>100 cm)
- **Yellow**: Caution (50–100 cm)
- **Red**: Danger (<50 cm)

  Summary: A modular ultrasonic obstacle detection system with Arduino Nano as the Microcontroller unit. Developed an Arduino code for this detection system as well as designed a custom made PCB ready for fabrication. 




