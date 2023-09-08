# SmartValve
open source smarthome radiator thermostat

<p align="center">
<img src="/pictures/openValve_assembled_1.jpg" height = 400>
</p>

This project has the goal of developing an open source smarthome valve for radiators. 

## IDEA
* Using “off the shelf” components and 3D printed parts for easy building 
* keep  the cost at a minimum 
* allow programming via common environments (Arduino IDE) 
* integration into smarthome with ESPHome and Home Assistant


##  COMPONENTS
* Linear Stepper Motor for smart radiator valve
* 3D printed parts
* PCB 
  * ESP32 based board (esp32-c6 or esp32-c3)
  * stepper driver TMC 2300 
  * Battery management/ voltage regulator

## Mechanical design
The general idea is to make the mechanical Assembly and the program as simple as possible, to make it accessible and easy to work with. This is the premise for all design decisions   

<p align="center">
<img src="/pictures/exploded_view_1.png" height = 400>
</p>

### Radiator Valve 
<p align="center">
<img src="/pictures/valve.png" height = 200>
</p>

(standard radiator valve, used in Austria)
this sort of valve has a pin with ~2.5mmm travel, this allows for a controlled liquid flow depending on the distance. 
To make the SmartValve adjustable, a mechanism is needed to control the pin in that region. 

### Motor / Drive
The current development uses a geared stepper motor with 10:1 ration and a linear travel of ~ 5mm. The stepper is designed for this application.


### 3D printed parts
OpenValve is designed to have 3d printed parts that are printable with a standard FTM printer with no supports and assembled with m3 bolts and buts.    

<p align="center">
<img src="/pictures/openValve_parts_1.jpg" height = 200>
</p>

<p align="center">
<img src="/pictures/assembled_1.jpg" height = 400>
</p>


[OnShape](https://cad.onshape.com/documents/391453e964c4cf36b71477fb/w/96218fe9ab75c37b541d1e8c/e/7027b69015998d7833889829?renderMode=0&uiState=64fb2ffe75317b0599136144https://cad.onshape.com/documents/391453e964c4cf36b71477fb/w/96218fe9ab75c37b541d1e8c/e/7027b69015998d7833889829?renderMode=0&uiState=64fb2ffe75317b0599136144) is used for the projecrt for easy collaboration and versioning.


## SOFTWARE
* For easy integration in Home Assistant, the project is written in Arduino framework, this makes it possible to compile it as a ESPHome device

## TODO

### Prove of concept
- [x] 3D printed parts 
- [ ] Arduino test sketch


### Prototype
- [ ] PCB design
  - [ ] Schematic design
  - [ ] Part selection for PCB
  - [ ] PCB layout and Design
  - [ ] PCB ordered
- [ ] Prototype built
- [ ] Prototype tested
- [ ] prototype documentation

### Beta
- [ ] ESPHome code
- [ ] Home Assistant integration
- [ ] Durability test
- [ ] Beta documentation
- [ ] power consumption test


