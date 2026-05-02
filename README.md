# Fire Alarm System
Simple fire alarm system with the following components:
-Arduino Uno R3
-Breadboard Small
-Temperature Sensor [TMP36]
-Piezo
-2 LEDs - 1 green, 1 red
-2 220 omega resistors
## Setup
1. Open Tinkercad and create a new circuit
2. Either A - start with the Arduino starter "BreadBoard" or B - connect V5 pin from Arduino to the red + on the breadboard and connect the lower GND pin from ardouno to the black - on the breadboard
3. Connect the Temperature Sensor [TMP36] pins like this:
-Left   -> 5V
-Middle -> A0
-Right  -> GND
4. Green LED pins:
-Anode   -> resistor -> pin 7
-Cathode -> GND
5. Red LED pins:
-Anode   -> resistor -> pin 6
-Cathode -> GND
6. Piezo pins:
+ -> pin 8
- -> GND
7. Replace the text code with the code in alarm.ino
