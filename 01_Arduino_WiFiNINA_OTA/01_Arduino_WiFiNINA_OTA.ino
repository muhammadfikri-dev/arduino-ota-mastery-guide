/**
 * =========================================================================================
 * 01_Arduino_WiFiNINA_OTA.ino
 * Target: Arduino Nano 33 IoT, MKR WiFi 1010, Uno WiFi Rev2
 * Features: Native Network Port Flashing via ArduinoOTA & WiFiNINA
 * =========================================================================================
 */

#include <SPI.h>
#include <WiFiNINA.h>
#include <ArduinoOTA.h>

char ssid[] = "YOUR_WIFI_SSID";
char pass[] = "YOUR_WIFI_PASSWORD";
int status = WL_IDLE_STATUS;

#define PIN_LED LED_BUILTIN

void setup() {
 Serial.begin(9600);
 pinMode(PIN_LED, OUTPUT);

 // Check WiFi module presence
 if (WiFi.status() == WL_NO_MODULE) {
 Serial.println("[ERROR] Communication with WiFiNINA module failed!");
 while (true);
 }

 // Connect to WPA/WPA2 Wi-Fi network
 while (status != WL_CONNECTED) {
 Serial.print("Attempting to connect to SSID: ");
 Serial.println(ssid);
 status = WiFi.begin(ssid, pass);
 delay(5000);
 }

 Serial.println("[WIFI] Connected! IP Address: ");
 Serial.println(WiFi.localIP());

 // Configure ArduinoOTA
 ArduinoOTA.begin(WiFi.localIP(), "arduino-nina-node", "admin123", InternalStorage);
 Serial.println("[OTA READY] Arduino Wireless Network Port Ready.");
}

void loop() {
 // Check for incoming OTA update requests
 ArduinoOTA.poll();

 // User Application Loop
 digitalWrite(PIN_LED, HIGH);
 delay(500);
 digitalWrite(PIN_LED, LOW);
 delay(500);
}
