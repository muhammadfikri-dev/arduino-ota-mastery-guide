# ⚡ Panduan Komprehensif Pembaruan Firmware Over-The-Air (OTA) Board Resmi Arduino

[![Lisensi: MIT](https://img.shields.io/badge/Lisensi-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![Perangkat: Arduino Resmi](https://img.shields.io/badge/Board-Nano%2033%20IoT%20%7C%20MKR%20WiFi%20%7C%20Uno%20WiFi-00979C.svg?logo=arduino&logoColor=white)](https://www.arduino.cc/)
[![Framework: Arduino IDE](https://img.shields.io/badge/Framework-Arduino%20IDE%202.0%2B-teal.svg)](https://www.arduino.cc/)
[![Developer: Muhammad Fikri](https://img.shields.io/badge/Developer-Muhammad%20Fikri-blue.svg)](#)

Panduan referensi terstruktur dan repositori kode produksi untuk menerapkan pembaruan firmware nirkabel **Over-The-Air (OTA)** pada perangkat keras resmi **Arduino** (Arduino Nano 33 IoT, Arduino MKR WiFi 1010, Arduino Uno WiFi Rev2, Arduino GIGA R1, Arduino Opta PLC, serta board AVR/SAMD).

---

## 📑 Daftar Contoh Implementasi yang Disertakan

| Direktori | Arsitektur Target | Rincian Implementasi |
|:---|:---|:---|
| **[`01_Arduino_WiFiNINA_OTA`](./01_Arduino_WiFiNINA_OTA/)** | SAMD21 + NINA-W102 | Flashing langsung via Port Jaringan Arduino IDE menggunakan library `WiFiNINA_OTA`. |
| **[`02_Arduino_SD_Bootloader_OTA`](./02_Arduino_SD_Bootloader_OTA/)** | ATmega328P / 2560 (Uno/Mega) | Pembaruan firmware otomatis dari file binary pada kartu MicroSD (Optiboot SD). |
| **[`03_Arduino_IoT_Cloud_OTA`](./03_Arduino_IoT_Cloud_OTA/)** | Arduino IoT Cloud Resmi | Deployment firmware jarak jauh 1-klik langsung dari dashboard cloud resmi Arduino. |
| **[`04_Arduino_Ethernet_TFTP_OTA`](./04_Arduino_Ethernet_TFTP_OTA/)** | W5500 / Ethernet Shield 2 | Flashing bootloader melalui jaringan kabel LAN berbasis protokol TFTP. |

---

## 🛠️ Tabel Kompatibilitas Perangkat Keras

- ✅ **Arduino Nano 33 IoT** (SAMD21 Cortex-M0+ & u-blox NINA-W102)
- ✅ **Arduino MKR WiFi 1010** (SAMD21 Cortex-M0+ & ATECC508A Crypto)
- ✅ **Arduino Uno WiFi Rev 2** (ATmega4809 & u-blox NINA-W102)
- ✅ **Arduino MKR VIDOR 4000** (FPGA + SAMD21)
- ✅ **Arduino GIGA R1 WiFi / Portenta H7** (Dual-core STM32H747)

---

## 🚀 Panduan Penggunaan Singkat (Board WiFiNINA)

1. Buka file [`01_Arduino_WiFiNINA_OTA/01_Arduino_WiFiNINA_OTA.ino`](./01_Arduino_WiFiNINA_OTA/01_Arduino_WiFiNINA_OTA.ino) di Arduino IDE.
2. Pasang library **`WiFiNINA`** dan **`ArduinoOTA`** melalui Library Manager.
3. Lakukan upload awal menggunakan kabel USB.
4. Setelah perangkat terhubung ke Wi-Fi, buka menu **Tools > Port** di Arduino IDE 2.0.
5. Pilih **Network Port** (contoh: `arduino-nina-node at 192.168.1.105`).
6. Klik tombol **Upload** untuk memperbarui program secara nirkabel!

---

## 📄 Lisensi
Didistribusikan di bawah lisensi open-source **MIT License**. Dikembangkan oleh **Muhammad Fikri**.
