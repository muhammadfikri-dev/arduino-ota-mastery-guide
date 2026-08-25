# ⚡ Arduino Official Boards Over-The-Air (OTA) Mastery Guide

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![Hardware: Arduino Official](https://img.shields.io/badge/Boards-Nano%2033%20IoT%20%7C%20MKR%20WiFi%20%7C%20Uno%20WiFi-00979C.svg?logo=arduino&logoColor=white)](https://www.arduino.cc/)
[![Framework: Arduino IDE](https://img.shields.io/badge/Framework-Arduino%20IDE%202.0%2B-teal.svg)](https://www.arduino.cc/)
[![Portfolio: Laksanasoft](https://img.shields.io/badge/Portfolio-Laksanasoft-purple.svg)](#)

A dedicated reference guide and production codebase for implementing **Over-The-Air (OTA) firmware updates on official Arduino hardware** (Arduino Nano 33 IoT, Arduino MKR WiFi 1010, Arduino Uno WiFi Rev2, Arduino GIGA R1, Arduino Opta PLC, and classic AVR/SAMD boards).

---

## 📑 Included Arduino OTA Implementations

| Folder | Target Architecture | Implementation Details |
|:---|:---|:---|
| **[`01_Arduino_WiFiNINA_OTA`](./01_Arduino_WiFiNINA_OTA/)** | SAMD21 + NINA-W102 | Network Port flashing via `WiFiNINA_OTA` library & internal SPI flash. |
| **[`02_Arduino_SD_Bootloader_OTA`](./02_Arduino_SD_Bootloader_OTA/)** | ATmega328P / 2560 (Uno/Mega) | SD Card bootloader firmware update using Optiboot SD. |
| **[`03_Arduino_IoT_Cloud_OTA`](./03_Arduino_IoT_Cloud_OTA/)** | Official Arduino Cloud | 1-Click remote firmware deployment from Arduino Web Editor / Cloud dashboard. |
| **[`04_Arduino_Ethernet_TFTP_OTA`](./04_Arduino_Ethernet_TFTP_OTA/)** | W5500 / Ethernet Shield 2 | Wired Local Network TFTP bootloader firmware flashing. |

---

## 🛠️ Hardware Compatibility Table

- ✅ **Arduino Nano 33 IoT** (SAMD21 Cortex-M0+ & u-blox NINA-W102)
- ✅ **Arduino MKR WiFi 1010** (SAMD21 Cortex-M0+ & ATECC508A Crypto)
- ✅ **Arduino Uno WiFi Rev 2** (ATmega4809 & u-blox NINA-W102)
- ✅ **Arduino MKR VIDOR 4000** (FPGA + SAMD21)
- ✅ **Arduino GIGA R1 WiFi / Portenta H7** (Dual-core STM32H747)

---

## 🚀 Quick Setup Guide (WiFiNINA Boards)

1. Open [`01_Arduino_WiFiNINA_OTA/01_Arduino_WiFiNINA_OTA.ino`](./01_Arduino_WiFiNINA_OTA/01_Arduino_WiFiNINA_OTA.ino).
2. Install **`WiFiNINA`** and **`ArduinoOTA`** from Library Manager.
3. Flash the sketch using a USB Cable initially.
4. Once connected to your local Wi-Fi, open **Tools > Port** in Arduino IDE 2.0.
5. Select the **Network Port** (e.g. `arduino-nano-ota at 192.168.1.105`).
6. Click **Upload** to update firmware wirelessly!

---

## 📄 License
MIT License. Developed by **Muhammad Fikri** for **Laksanasoft Portfolio**.
