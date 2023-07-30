# SmartValve
open source smarthome radiator thermostat
<p align="center">
<img src="/pictures/openValve_Prototype.jpg" height = 400>
</p>

This project has the goal of developing an open source smarthome valve for radiators. 

## IDEA
* Using “off the shelf” components and 3D printed parts for easy building 
* keep  the cost at a minimum 
* allow programming via common environments (Arduino IDE) 
* integration into smarthome with ESPHome and Home Assistant


##  COMPONENTS
* [MCU](https://www.lilygo.cc/products/t-qt-pro) ESP32S3, currently using a Lilygo TQ-T Pro (ESP32-S3 4mb flash 2 MB psram)
* [Motor](https://www.adafruit.com/product/4641) Adafruit N20 DC Motor with encoder 
* [Driver](https://www.pololu.com/product/2990) - Polulu DRV8838
* Gearbox - 298:1 gearbox with m3 threaded shaft, bought from AliExpress

## Mechanical design
The general idea is to make the mechanical Assembly and the program as simple as possible, to make it accessible and easy to work with. This is the premise for all design decisions   
<p align="center">
<img src="/pictures/printed_parts.png" height = 200>
<img src="/pictures/assambly_cut.png" height = 200>
</p>   
A union nut attaches the assembly to the valve itself. 
The U shaped hanger keeps the motor from rotating, this creates friction and a better solution for it is preferred. 

### Radiator Valve 
<p align="center">
<img src="/pictures/valve.png" height = 200>
</p>

(standard radiator valve, used in Austria)
this sort of valve has a pin with ~2.5mmm travel, this allows for a controlled liquid flow depending on the distance. 
To make the SmartValve adjustable, a mechanism is needed to control the pin in that region. 

### Motor / Drive
Using a n20 DC motor with gearbox has the advantage that they are cheap and generally available. 
It is possible to use other drivers, but this board from Polulu is cheap, and the current limit is not reached in the first iteration. Advanced features for controlling the motor are not needed, enable and direction is sufficient, which makes the program simple. 

### Gearbox
With the use of a DC motor running on low voltage, a high reduction gearbox is needed.   


<p align="center">
<img src="/pictures/n20_motor_with_gearbox.png" height = 200>
</p>

(n20 gearbox Motor with m3 shaft)
Using this kind of shaft allows the use of a m3 embedded brass nut in the 3d print to convert the rotation to linear motion. 

### 3D printed pars
OpenValve is designed to have 3d printed parts that are printable with a standard FTM printer with no supports and assembled with m3 bolts and buts.    

[Fusion360_project](https://a360.co/473V7g9)





## SOFTWARE
* For easy integration in Home Assistant, the project is written in Arduino framework, this makes it possible to compile it as a ESPHome device


## STATE
* First model as a proof of concept, including:
  * 3D model for 3D printed parts
