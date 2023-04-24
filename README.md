# HomeAutomationPrototype

Tutorial 2: Emulating a Raspberry Pi on your computer and using it to do various tasks

There are multiple solutions to emulating a Rapberry Pi on a computer. In this tutorial, we will explore two different methods: a prepared QEMU file and Virtual Box.

# 1. Installing QEMU
- Download the file from the following link: https://sourceforge.net/projects/rpiqemuwindows/ 
- Extract the files into C:/
- Run the run.bat file
This only works on computers running Windows.

On running for the first time you will see a configuration screen.  
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

From here on you can use the emulated version of a raspberry pi for your needs. In our case, we want to install Docker inside this emulated version but I was not able to do so. I posted this problem on the following forum in hopes of a response: 

# 2. Setting up Virtual Box 

1. Install Virtual Box on your PC.
2. Click on the “New” button to create a new virtual machine:
https://roboticsbackend.com/wp-content/uploads/2020/01/create_vm_step1.png
3. Choose a name for your vm and the type:
https://roboticsbackend.com/wp-content/uploads/2020/01/create_vm_name_step2.png
4. Allocate the right amount of RAM. I allocated more RAM to accelerate my work but you can emulate a real Raspberry Pi and put 1GB instead:
https://roboticsbackend.com/wp-content/uploads/2020/01/create_vm_allocate_ram_step3.png
5. Create a virtual hard disk:
https://roboticsbackend.com/wp-content/uploads/2020/01/create_vm_hard_disk_part4.png
6. Choose enough space for the disk:
https://roboticsbackend.com/wp-content/uploads/2020/01/create_vm_hard_disk_size_part5.png
7. After this, your vm should be ready but we need to do some extra steps like allocating CPUs for our VM. Go into the setting of your VM and you want to speed up your processes, you can add more CPUs:
https://roboticsbackend.com/wp-content/uploads/2020/01/create_vm_allocate_cpus_step3_2.png
8. At last, in the settings, associate the Raspberry Pi OS Desktop ISO file to your Virtual Machine:
https://roboticsbackend.com/wp-content/uploads/2020/01/create_vm_choose_iso_part6.png
9. Follow the normal installation process for a raspberry pi and you should arrive at the following screen:
https://roboticsbackend.com/wp-content/uploads/2020/01/raspbian_desktop_welcome_screen.png
Follow this tutorial: https://roboticsbackend.com/install-raspbian-desktop-on-a-virtual-machine-virtualbox/




