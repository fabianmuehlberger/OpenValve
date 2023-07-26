// created by Fabian Mühlberger on 26.07.2023
// Simple arduino code to test the motor driver

//The MCU does not matter, change DRIVE_EN and DRIVE_DIR pins according to your needs 
// it is assumed that the motor driver used is a DRV8838, for other drivers, change the code accordingly


#include <arduino.h>

#define DRIVE_EN 34
#define DRIVE_DIR 39


void setup(void) {

  pinMode(DRIVE_EN, OUTPUT);
  pinMode(DRIVE_DIR, OUTPUT);

  digitalWrite(DRIVE_EN, HIGH);
  digitalWrite(DRIVE_DIR, HIGH);

  delay(1000);

}

void loop(){
  digitalWrite(DRIVE_DIR, HIGH);
  delay(1000);
}