# IR-lamp
Introduction
This is a remote controlled lamp, that uses an IR sensor for detection. It can be put to use in devices like a night lamp, preventing the need to physically turn off the lamp when not required, allowing you to control the lamp using the remote.

Technical information
Board used - Arduino Leonardo
Components - SM0038 IR receiver and remote
             5V single channel relay
             230VAC to 5VDC module

Working
The SM0038 detects IR radiaton in its surroundings. The code converts those detections into values, which is particularly useful as we need only one particular value to perform switching operations. An IR remote emits IR radiation and if its values are decoded, they are unique i.e., specific to each button
Based on our button preference, the corresponding value for the button is obtained.
A relay performs switching. When a small DC voltage (5V in this case) is supplied, the relay connects the NO (Normally Open) terminal to the COM (Common) terminal
Hence, the AC mains is given to the COM terminal and the bulb to the NO terminal.
The identified code from the remote, will turn on the relay, which switches on the bulb. The same button press also turns off the light as the code detects the state of the bulb (on or off) and performs the operations accordingly.

Things to be noted
1. ESP32 cannot be used as the relay and the IR sensor requires 5v supply
2. The arduino requires power to run. So a 230 VAC to 5 VDC module should be used to provide safe DC power to the board
3. As an IR sensor is being employed, usage in long range applications becomes difficult. In such cases, RF (Radio Frequency) module should be employed as it provides better range.
