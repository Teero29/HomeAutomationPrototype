# HomeAutomationPrototype
Now that we have a Raspberry Pi (or an emulated version), we want to install Docker.
Why Docker? Overall there are many reasons and the most important ones in our case are the following:

1. Consistency: Docker allows you to create a container image that includes all the necessary dependencies, libraries, and configurations required for your project. This ensures that your application runs consistently across different environments, regardless of the underlying system configurations.

2. Isolation: Docker containers provide a level of isolation, separating your application and its dependencies from the underlying host system. This isolation helps prevent conflicts between different applications and ensures that changes made to the host system do not affect your application's behavior.

3. Portability: Docker containers are highly portable and can be run on any system that supports Docker, regardless of the underlying operating system or hardware. This makes it easier to deploy your application on different platforms, such as local development machines, production servers, or cloud environments.

4. Dependency Management: With Docker, you can package all the required dependencies within the container image. This eliminates the need for manual dependency installation on the host system, reducing the risk of version conflicts or configuration issues.

In conclusion, Docker will allow us to develop the required application on any device and then simply transport in onto our Raspberry Pi without having to install anything but Docker on that Raspberry Pi. We can then run the complete application on the device. Additionally, we can repeat this on as many devices as we want. 

# Tutorial 3: Installing Docker on Raspberry Pi 32bits 

First we need to update our device:
```
$ sudo apt update

$ sudo apt upgrade
```
![1](https://github.com/Mogreine29/HomeAutomationPrototype/assets/71849675/3ed35a87-eef8-4246-aa43-6dd53631e490)


Next we need to download the executable and install Docker:
```
$ curl -fsSL https://get.docker.com -o get-docker.sh

$ sudo sh get-docker.sh
```
![2](https://github.com/Mogreine29/HomeAutomationPrototype/assets/71849675/e9d555b4-4bdd-4c89-92c5-802961e19c88)


# How to use Docker

1. Build a Docker Image

Create a new directory for your project and navigate to it in your terminal or command prompt.

Create a file named "Dockerfile" (no file extension) in the project directory.

Open the Dockerfile in a text editor and define the instructions to build your Docker image. For example:
```
# Use a base image
FROM python:3.9

# Set the working directory in the container
WORKDIR /app

# Copy the project files to the working directory
COPY . /app

# Install project dependencies
RUN pip install -r requirements.txt

# Expose a port (if needed)
EXPOSE 8000

# Specify the command to run your application
CMD ["python", "app.py"]

```


Save the Dockerfile and create a file named "requirements.txt" if your project has Python dependencies. List the required packages line by line in this file.

Build the Docker image by running the following command in the project directory (Replace "myproject" with a suitable name for your image.):
```
docker build -t myproject .
```

