/**
 * =========================================================================================
 * 04_Arduino_Ethernet_TFTP_OTA.ino
 * Target: Arduino Ethernet / W5500 Wired Network
 * Features: Local LAN TFTP Bootloader Firmware Flashing
 * =========================================================================================
 */

#include <SPI.h>
#include <Ethernet.h>

byte mac[] = { 0xDE, 0xAD, 0xBE, 0xEF, 0xFE, 0xED };

void setup() {
  Serial.begin(9600);
  if (Ethernet.begin(mac) == 0) {
    Serial.println("Failed to configure Ethernet using DHCP");
  } else {
    Serial.print("Ethernet IP: ");
    Serial.println(Ethernet.localIP());
  }
}

void loop() {
  delay(1000);
}
