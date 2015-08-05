# Arduino Set-Up guide

# Drivers
For the event we will be giving you an Arduino Uno and if you can set up the drivers before the event it would save a lot of time!

**Mac:**

- Download the [driver](CH341SER_MAC.ZIP?raw=true)

- Double click the ZIP file and unzip it

- Open the folder ~/Downloads/CH341SER_MAC

- Run installer found in that folder

- If asked to restart, do not restart just yet.

- This next step is only needed if you are on OS-X Yosemite. For older versions of OS-X you do not need it:

  - Open Terminal Application (it's located in /Application/Utilities) and type this command once you see a prompt:
`sudo nvram boot-args="kext-dev-mode=1"`

  - See [this post](https://www.cindori.org/enabling-trim-on-os-x-yosemite/) if you wish to know why we need to run this command. I believe you need to do this because the driver is not signed properly, or is simply too old for Yosemite. Hopefully newer versions won't require this step and will automatically become enabled.
- Now restart your Mac

**Windows:**

- Download the [driver](CH341SER_WIN.ZIP?raw=true)

- Double click the ZIP file and unzip it

- Open the folder and run the installer 

- Select INSTALL

- Now restart your PC

**Linux:**

- No drivers needed! Just plug and play.

# Arduino IDE

Please download & install the Arduino IDE from [the official site](https://www.arduino.cc/en/Main/Software). This is a program that we will be using during the day of the event to program our circuit!