# HomeAutomationPrototype
Tutorials for a home automation system

Tutorial 2: Emulating a Raspberry Pi on your computer and using it to do various tasks

There are multiple solutions to emulating a Rapberry Pi on a computer. We will use two different methods: a prepared QEMU file and Virtual Box.

# 1. Installing QEMU
- Download the file from the following link: https://sourceforge.net/projects/rpiqemuwindows/ 
- Extract the files into C:/
- Run the run.bat file
This only works on computers running Windows.

On running for the first time you will see a configuration screen  
The arrow keys take you up and down the list, enter or return selects an item to change
Tab (above Caps Lock key) gets you down to the two options at the bottom so you can finish.

After a few minutes you will see a black screen with the words "raspberrypi login:"  at the bottom of the screen. 

``` Type "pi" and hit enter. ```

You will be prompted for a password, 
``` type "raspberry" and hit enter. ```

You are now on the Raspbian command line.

If you wish to set a root password, type

``` "sudo passwd root" ```

you will have to type in the root password of your choice twice.

From here you can continue to use the command line, but if you would prefer to use a window based desktop,

``` type "startx" ``` 
and you should have the following window appear:
![RaspberryUI](https://user-images.githubusercontent.com/71849675/221509913-16800139-a48f-456e-aba3-9450b3d5104f.png)


# 2. Setting up Virtual Box 

Follow this tutorial: https://roboticsbackend.com/install-raspbian-desktop-on-a-virtual-machine-virtualbox/
