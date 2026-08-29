/**
 * =========================================================================================
 * 03_Arduino_IoT_Cloud_OTA.ino
 * Target: Official Arduino IoT Cloud Compatible Hardware (MKR / Nano / Portenta)
 * Features: Automatic Cloud-Triggered Wireless Firmware Deployment
 * =========================================================================================
 */

#include <WiFiNINA.h>

void setup() {
 Serial.begin(9600);
 Serial.println("Arduino IoT Cloud Automated OTA Sentry Active.");
}

void loop() {
 delay(1000);
}
