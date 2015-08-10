#Making a Touch Sensor

It's possible to turn any metal object into a touch sensor by measuring its *capacitance*. This example
shows how to turn a small sheet of aluminum foil into a touch sensor using the CapacitiveSensor library.

##How To Do It

1. First, download [`CapacitiveSensor.zip`](CapacitiveSensor.zip?raw=true) and follow the instructions in
[`importing_libraries.md`](../importing_libraries.md) to import it into Arduino.

2. Build a circuit like the one shown below. You can use tape and/or a paper clip to attach the wire to a piece of aluminum foil (or any metal object, for that matter).
<br><img src="https://cloud.githubusercontent.com/assets/3172103/9158476/78f6bb56-3ee5-11e5-9c50-2f5b7d00382c.png" width="400px">
&nbsp;<img src="https://cloud.githubusercontent.com/assets/3172103/9158477/78f7297e-3ee5-11e5-9c72-772a66fcb2c6.png" width="400px">

3. Check out the simple example program [`touch_sensor.ino`](touch_sensor.ino), which shows how to use the touch sensor to turn on an LED.

4. Once you have it working, it's time to start using touch sensors! Try improving your piano
program to use touch sensors instead of push buttons, or work on a new project that you think would
make good use of them.

##How It Works

Capacitive touch sensors take advantage of the human body's natural capacitance. Details are
outside the scope of this tutorial - if you're interested, take a look at 
[this explanation.](http://www.pcbheaven.com/wikipages/How_a_Touch_Button_works/?p=1)
