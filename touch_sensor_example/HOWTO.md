#Making a Touch Sensor

It's possible to turn any metal object into a touch sensor by measuring its *capacitance*. This example
shows how to turn a small sheet of aluminum foil into a touch sensor using the CapacitiveSensor library.

##How To Do It

1. First, download [`CapacitiveSensor.zip`](CapacitiveSensor.zip?raw=true) and follow the instructions in
[`importing_libraries.md`](../importing_libraries.md) to import it into Arduino.

2. Build a circuit like the one shown below. You can use tape and/or a paper clip to attach the wire to a piece of aluminum foil (or any metal object, for that matter).
<br><img src="https://cloud.githubusercontent.com/assets/3172103/9149060/ffd35446-3d63-11e5-9f50-5de922654e4f.png" width="400px">
&nbsp;<img src="https://cloud.githubusercontent.com/assets/3172103/9149061/ffd53fea-3d63-11e5-9942-d2799b83fa62.png" width="400px">

3. Check out the simple example program [`touch_sensor.ino`](touch_sensor.ino), which shows how to use the touch sensor to turn on an LED.

4. Once you have it working, it's time to start using touch sensors! Try improving your piano
program to use touch sensors instead of push buttons, or work on a new project that you think would
make good use of them.

##How It Works

Capacitive touch sensors take advantage of the human body's natural capacitance. It's fairly complicated -
if you're interested, take a look at 
[this explanation.](http://www.pcbheaven.com/wikipages/How_a_Touch_Button_works/?p=1)
