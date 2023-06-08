# HomeAutomationPrototype

# Tutorial 5: An Example of using all the knowledge acquired through the past tutorials

We can now interconnect all the different parts of the tutorials to make something cool!
We will use different sensors to setup an Edge Computing device. With only 1 arduino and 1 Raspberry Pi, we will make something nice already. 

For example:
1. I have a motion detector that might be put in some remote place that should not be accessed by unauthorized persons and if someones goes in, we will turn on the LED (we can take any other action ofcourse) to let us know that there has been an infraction.
2. I will be using a temperature and humidity sensor to gather data and send it through bluetooth to my raspberry Pi so I can monitor the temperature in my house through a web-app and take actions accordingly (open/close windows). We will also start a "fan" when it is too hot in the room to avoid getting sweaty. When we have starting sweating, it is already late to turn on the fan. 
3. I have a servo motor so that when I send a signal with a predefined event trigger (see below) on my phone, it will turn on and it can, for example, open the blinds.

![iphone](https://github.com/Mogreine29/HomeAutomationPrototype/assets/71849675/13ac67fe-a9f6-4ac4-bccb-86ad287b7764)


5. There are many other possibilities to explore!

## Arduino
The file final_arduino.ino contains the final code that I use for example. We are using multiple different sensors connected to the arduino:
1. A LED
2. Bluetooth module HC-05
3. Humidity and Temperature sensor DHT11
4. PIR Motion sensor 
5. Servo motor

## Raspberry Pi
I am using a Flask, sqlite3 in Python to create my web-app. The code is provided in this section above. 
I will not be explaining the python part of this project because this is not the aim of this tutorial. I will explain more about the use of Docker in this case. 
The Dockerfile provided lets us deploy this mini-project directly just by pulling the image from Docker Hub and then building it and starting the container.
I will go step-by-step here to explain this procedure:
