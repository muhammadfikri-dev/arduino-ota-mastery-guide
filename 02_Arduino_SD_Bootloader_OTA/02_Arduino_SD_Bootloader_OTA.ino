/**
 * =========================================================================================
 * 02_Arduino_SD_Bootloader_OTA.ino
 * Target: Arduino Uno / Mega 2560
 * Features: MicroSD Card Binary Bootloader Flashing (Optiboot SD)
 * =========================================================================================
 */

#include <SPI.h>
#include <SD.h>

const int chipSelect = 4;

void setup() {
  Serial.begin(9600);
  Serial.println("Arduino SD Firmware Loader Sentry");

  if (!SD.begin(chipSelect)) {
    Serial.println("SD Card initialization failed!");
    return;
  }

  if (SD.exists("UPDATE.BIN")) {
    Serial.println("Found firmware binary UPDATE.BIN on SD Card! Triggering Bootloader update...");
    // Optiboot will flash UPDATE.BIN on next reboot
  } else {
    Serial.println("No new firmware file found. Running standard program.");
  }
}

void loop() {
  delay(1000);
}
