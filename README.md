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

![create_vm_step1](https://user-images.githubusercontent.com/71849675/233925612-fe12988e-941a-4e9b-9bf1-b60970492550.png)
3. Choose a name for your vm and the type: 

![create_vm_name_step2](https://user-images.githubusercontent.com/71849675/233925609-60046356-23e4-4c2e-b434-8ec2f1dc778c.png)
4. Allocate the right amount of RAM. I allocated more RAM to accelerate my work but you can emulate a real Raspberry Pi and put 1GB instead: 

![create_vm_allocate_ram_step3](https://user-images.githubusercontent.com/71849675/233925606-2ac97de3-2697-4589-adc7-4d1e46c4d43f.png)
5. Create a virtual hard disk:

![create_vm_hard_disk_part4](https://user-images.githubusercontent.com/71849675/233925604-bf014331-9dd1-4fdc-a8f1-44ec8ba9f59c.png)
6. Choose enough space for the disk:

![create_vm_hard_disk_size_part5](https://user-images.githubusercontent.com/71849675/233925603-b324ba65-5bf8-4509-b14c-b357c65dee93.png)
7. After this, your vm should be ready but we need to do some extra steps like allocating CPUs for our VM. Go into the setting of your VM and you want to speed up your processes, you can add more CPUs:

![create_vm_allocate_cpus_step3_2](https://user-images.githubusercontent.com/71849675/233925601-ce6d80ae-659b-4b09-9102-cddc6d2487ee.png)
8. At last, in the settings, associate the Raspberry Pi OS Desktop ISO file to your Virtual Machine:

![create_vm_choose_iso_part6](https://user-images.githubusercontent.com/71849675/233925600-ce46d5ac-ad44-4e4e-a0ec-598a942f1beb.png)
9. Follow the normal installation process for a raspberry pi and you should arrive at the following screen:

![raspbian_desktop_welcome_screen](https://user-images.githubusercontent.com/71849675/233925596-5fb64b47-20af-4810-85d6-2fdd08bb7e1c.png)




