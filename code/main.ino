// created by Fabian Mühlberger on 26.07.2023
// Simple arduino code to test the motor driver

//The MCU does not matter, change DRIVE_EN and DRIVE_DIR pins according to your needs 
// it is assumed that the motor driver used is a DRV8838, for other drivers, change the code accordingly


#include <arduino.h>
#include <TFT_eSPI.h>
#include <SPI.h>
#include <Wire.h>
#include <ESP32Encoder.h>



#define DRIVE_EN 34
#define DRIVE_DIR 33
#define ENCODER_PIN_A 37
#define ENCODER_PIN_B 36
#define PUSH_BUTTON 35
#define SERIAL_SPEED 115200


bool buttonPressed = false;
unsigned long buttonTime = 0;
unsigned long lastButtonTime = 0;
bool direction = true;

TFT_eSPI tft = TFT_eSPI(); 

void IRAM_ATTR isrPush(){
  buttonTime = millis();
  if(buttonTime - lastButtonTime > 200){
    buttonPressed = true;
    lastButtonTime = buttonTime; 
  }
}

ESP32Encoder encoder;

void setup(void) {

  Serial.begin(SERIAL_SPEED);
  // tft.init();
  // tft.setRotation(1);
  // tft.fillScreen(TFT_BLACK);
  pinMode(PUSH_BUTTON, INPUT_PULLDOWN);
  attachInterrupt(PUSH_BUTTON, isrPush, RISING);

  pinMode(DRIVE_EN, OUTPUT);
  pinMode(DRIVE_DIR, OUTPUT);

  digitalWrite(DRIVE_EN, LOW);
  digitalWrite(DRIVE_DIR, LOW);

  encoder.attachHalfQuad(37, 36);
  encoder.clearCount();
  Serial.println("setup done");
  delay(1000);
}
unsigned long currentCount;
int buttonCounter = 0;
int setCount = 0;

void loop(){

  if (Serial.available() > 0){
    setCount = Serial.read();
    Serial.print("speed ");
    Serial.println(setCount, DEC);
  }
  // if(buttonPressed){
  //   currentCount = encoder.getCount();
  //   Serial.print("button pressed");
  //   direction = !direction;
  //   digitalWrite(DRIVE_DIR, direction);
  //   buttonPressed = false;
  //   encoder.clearCount();
  // }
  if(buttonCounter){
    if(buttonPressed){
    currentCount = encoder.getCount();
    digitalWrite(DRIVE_EN, LOW);
    encoder.clearCount();
    buttonPressed = false;
    Serial.print("currentCount: ");
    Serial.println(currentCount);
    buttonCounter = 0;
    }
  }

  if(buttonPressed){
    digitalWrite(DRIVE_EN, HIGH);
    encoder.clearCount();
    Serial.println("Encoder Start = " + String((int32_t)encoder.getCount()));
    buttonCounter += 1;
    Serial.print("button counter: ");
    Serial.println(buttonCounter);
    buttonPressed = false;
  }
}

