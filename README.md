# HomeAutomationPrototype
This repository is a series of tutorials that will help you build your own Smart Home automation system. 

Tutorial 1: Learn to connect sensors to an arduino and collect data with them.

First, we need to connect the sensors to the arduino and start the arduino. Most sensors have a pin for Ground (marked as G or GND), a pin for VCC and another for the data. They can be connected as following (DHT11 used as example):
![Arduino-DHT11-Tutorial-3-Pin-DHT11-Wiring-Diagram](https://user-images.githubusercontent.com/71849675/221504377-7ddafa77-c8d8-4efc-8c06-64518d7589f1.png)

The arduino used in my tutorial is the Arduino Uno but almost any model should work perfectly fine.

We will use Arduino IDE to make the code for the arduino/ESP and read the data collected from the sensors. The IDE looks like following:

![arduino-ide-interface](https://user-images.githubusercontent.com/71849675/221505337-55f96a7f-3638-4bc7-b631-c6858ef9aecb.png)

I will not be showing how to run code on an arduino. For those who need help with this task, here is a link to a guide: https://support.arduino.cc/hc/en-us/articles/4733418441116-Upload-a-sketch-in-Arduino-IDE 

The code samples provided in this branch will allow you to connect to some of the existing sensors, read their data and print it in the console.
