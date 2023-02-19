# smartValve
open source smarthome radiator thermostat

This project has the goal of developing a open source smarthome valve for radiators.

## IDEA
* Using "off the shelf" components and 3D printed parts for easy building 
* keep  the cost at a minimum 
* allow programming via common enviroments (arduino IDE) 
* integration into smarthome with ESPHome and Home Assistant


##  COMPONENTS
* MCU - ESP32 or ESP8266 based BT and Wifi capable board that includes a lipo charger (LILYGO® TTGO T-OI ESP8266 is currently prefered)
* Motor - Using Adafruit N20 DC Motor with gearbox and encoder 
* Driver - Low cost 1 channel motor driver, currently using a Polulu DRV8838, MP6550 Single or BD65496MUV Single.
* Gearbox - 3D printed gearbox for convertig rotation in linear motion 

## SOFTWARE
* For easy integration in Home Assistant, the project is written in arduino framework, this makes it possible to complile it as a ESPHome devive


## STATE
* the project is in evaluation phase 


