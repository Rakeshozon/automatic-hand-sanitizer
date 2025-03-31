# automatic-hand-sanitizer
a DIY automated hand sanitizer using avoid sensor and servo

# purpose of the project
its a kind off DIY project this project took me around 45 min to create from scratch , I got this idea when i was isolated in the covid 19 time and we were spending lot of money of automated sanitizer , thats where i created this DIY automated hand sanitizer 

## working principle

i used the avoid sensor so that its proximity will be moderately good for this project and its cheaper than ultrasonic sensor and it has a good life comparitively to ultrasonic sensor , avoid sensor senses the hand in front of it , and gives signal to servo using arduino nano or uno , and santizer pumps out which already tighed to teh servo
# Automatic Hand Sanitizer Dispenser

This project is an Arduino-based automatic hand sanitizer dispenser that uses an IR sensor to detect a hand and activate a servo motor to dispense sanitizer. An LED indicator is also included to signal activation.

## Features
- Infrared (IR) sensor detects hand presence
- Servo motor activates to dispense sanitizer
- LED indicator lights up when sanitizer is dispensed
- Simple and efficient design

## Hardware Requirements
- Arduino board
- IR sensor
- Servo motor
- LED indicator
- Power source (battery pack or USB)
- Jumper wires

## Wiring Diagram
| Component | Arduino Pin |
|-----------|------------|
| IR Sensor (Avoid) | 2 |
| Servo Motor | 9 |
| LED Indicator | 13 |

## Installation & Usage
1. Clone this repository https://github.com/Rakeshozon/automatic-hand-sanitizer.git
   ```sh
   git clone https://github.com/your-username/your-repo.git
   ```
2. Open the Arduino IDE and upload the provided code to your Arduino board.
3. Connect the components as per the wiring diagram.
4. Power on the system.
5. Place your hand near the IR sensor to trigger the servo motor.

## Code Explanation
- The IR sensor detects hand presence and sets `AvoidState` to LOW when a hand is detected.
- If a hand is detected, the servo motor moves from 0° to 135° and back, mimicking a dispensing motion.
- The LED (connected to pin 13) lights up during the dispensing process.
- If no hand is detected, the system remains idle with the LED off.

## Future Improvements
- Adding a pump mechanism for more efficient sanitizer dispensing
- Adjustable servo angles for different sanitizer bottle types
- Integrating a display to show sanitizer level

## License
This project is open-source under the MIT License. Feel free to modify and enhance it!

---
### Author
Rakesh H 
GitHub: https://github.com/Rakeshozon/

