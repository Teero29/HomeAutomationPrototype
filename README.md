 HomeAutomationPrototype

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

Here is what it looks like:

![image](https://github.com/Mogreine29/HomeAutomationPrototype/assets/71849675/55f2f18c-6caf-4fc4-8d22-6e6b5266494b)


## Raspberry Pi
I am using a Flask, sqlite3 in Python to create my web-app. The code is provided in this section above. 
I will not be explaining the python part of this project because this is not the aim of this tutorial. I will explain more about the use of Docker in this case. 
The Dockerfile provided lets us deploy this mini-project directly just by pulling the image from Docker Hub and then building it and starting the container.
I will go step-by-step here to explain this procedure:

1. With Docker installed on our Raspberry Pi, we develop our app: webserver, db
2. Create seperate folders for each part: flask app and db
3. Create a Dockerfile for the app with the following contents. 
```
FROM python:3.10-alpine
WORKDIR /iot_app
COPY requirements.txt ./
RUN pip3 install --no-cache-dir -r requirements.txt
COPY static/ ./static/
COPY templates/ ./templates/
COPY app.py ./

CMD ["python3","./app.py"]
```
We are using this file to pull an image of Python and install all the necessery dependencies for our project. This is the beauty of Docker.
P.S: You will need a requirements.txt file with all the dependencies needed.

4. We can create a YAML file that will let us compose our dockerized app:

```
version: "3.8"

services:
  sqlite3:
    container_name: sqlite3_container
    image: nouchka/sqlite3:latest
    stdin_open: true
    tty: true
    volumes:
      - ./db/:/root/db/
    ports:
      - '9000:9000' # expose ports - HOST:CONTAINER
    restart: unless-stopped


  app:
    image: tyemur/webserver:latest
    ports:
      - 8080:8080
    volumes:
      - ./:/app
      - ./db/:/app/db/
```

5. At last, use the following command to build the app:

```
docker compose up
```

6. You can visit your app at localhost:8080!

Here is the result for our simple case:
![image](https://github.com/Mogreine29/HomeAutomationPrototype/assets/71849675/1c8adf28-db32-46b2-bce0-87a870435525)
