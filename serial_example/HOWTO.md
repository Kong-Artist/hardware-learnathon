#Serial Communication Example

Normally when we use `Serial.print()`, we open the Arduino IDE's built in Serial Monitor and read the output 
strings. However, you can easily write your own computer program that can reads this serial output and act on it.
This isn't so much a single project as a starting point for your own - it includes a useful library and an
example of interfacing with your Arduino in a more versatile way.

*This is a somewhat more advanced topic and assumes some previous programming knowledge. We encourage you 
to give this a read regardless, and if you don't want to use C++ or get stuck along the way, just let 
a Mentor know!*

##What We Need
* Arduino UNO & USB Cable
* serialib serial communication library for C++
* C++ compiler (check out gcc for Linux or mingw for Windows)

##How To Use It

Start by 
[downloading our zip file](serial_example_code.zip),
which contains the serialib library and an example file `SerialPrint.cpp` 
(confirmed to work on Windows and Linux).You might need to change the port - see the Troubleshooting section.
To compile the files and output an executable, open a terminal window, navigate to the directory, and enter 
`g++ serialib.cpp SerialPrint.cpp -o SerialPrint.exe`. You might see some strange warnings, you can probably ignore
them. If you're interested, quickly read through `SerialPrint.cpp` - you'll see that it's rather straightforward.
A serial port is opened and its output is read & printed to screen, one line at a time.

Take a look at our `serial_example.ino` sketch - it displays an animation of an "o" moving back and forth,
and includes a command that clears the console screen. Make sure to stop `SerialPrint.exe` before uploading (hit
ctrl+c in the console window). Although it has a bit of flicker (this isn't really the best way to implement
animation), it shows how you can do some pretty fancy stuff!

This is the part where you come in - you now have the power to make your C++ applications interface with the
real world through your Arduino, so let your imagination run free! You should be able to write 
to the Arduino as well (see serialib's `Example1.cpp`). If you're not comfortable writing C++ or you can't 
get the library to work on your computer, let one of the Mentors know - we'll be happy to help you get set 
up with a different serial communication library.

Some project ideas:
* Classic pong with potentiometer knob inputs
* Upgrade your piano - make it play through your computer speakers, or team up with someone in the 
software stream and connect it to the Internet
* Use Visual C++/GTK+ to make a fancy GUI that displays data for any of your previous projects

###Troubleshooting

| Symptom          | Solution |
| --------         |--------- |
| "Problem uploading to board." | Make sure you didn't leave a program running that's using the USB port. |
| g++ not found | Do you have a C++ compiler installed? See above. |
| SerialPrint.exe unable to connect to port | It's possible that your Arduino is using a differently named port than usual. Try changing the value of DEVICE_PORT near the top of the SerialPrint.cpp to whatever's being used by your Arduino IDE (under Tools > SerialPort) |
| Something else | Yell for help! |

##How It Works

Communication protocols have been in development for decades, since the earliest computers. 
Even though it's somewhat slower,
[serial communication](https://learn.sparkfun.com/tutorials/serial-communication),
has won out over parallel when interfacing between devices because it can use as few as 2 wires. Imagine 
having to use eight of the pins on your Arduino just to send data to your computer!

Instead, many microcontroller chips, including yours, contain a 
[UART](https://en.wikipedia.org/wiki/Universal_asynchronous_receiver/transmitter) that "translates" between
the faster 8-bit parallel protocol used internally and the serial protocol that USB uses. It does this by
temporarily storing each byte of information, outputting a start bit, iterating through your message one bit at a 
time, and ending with a stop bit.
