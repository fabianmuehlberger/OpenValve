# smartValve
open source smarthome radiator thermostat

This project has the goal of developing a open source smarthome valve for radiators.

## IDEA
* Using "off the shelf" components and 3D printed parts for easy building 
* keep  the cost at a minimum 
* allow programming via common enviroments (arduino IDE, Micropython) 
* integration into smarthome with home automation 
* 

##  COMPONENTS

* MCU - Some ESP32 based BT and Wifi capable board. Possible candidate is the M5Stack Atom board.
* Stepper - not decided yet, idealy a 5V linear stepper actuator is used, another option is a gearbox motor with high reduction.
* Motor/Stepper driver - M5Stack stepper board or ULN2003 based board 
* Gearbox - if a gearbox motor is used, the rotation has to be converted in linear motion, a possible option might be lego wormgears but is not tested. 


## STATE
* the project is in evaluation phase, currenty looking for components to build a first prototype


