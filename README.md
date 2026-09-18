# Traffic Light with Pedestrian Button

**Student:** Nicolas Santana Lopes  
**Teacher:** Amanda Paul Dull

🔗 **Tinkercad simulation:** [Open project](https://www.tinkercad.com/things/fHD8OdoUfRJ-iot-2?sharecode=1R3f-IN9Vc5MNvmP-gO95qhtvE01utGlQq7CqcO_YXQ)

[![Simulate on Tinkercad](https://img.shields.io/badge/Simulate%20on-Tinkercad-orange?style=for-the-badge&logo=autodesk)](https://www.tinkercad.com/things/fHD8OdoUfRJ-iot-2?sharecode=1R3f-IN9Vc5MNvmP-gO95qhtvE01utGlQq7CqcO_YXQ)

This repository contains an IoT class project developed with an Arduino UNO. It simulates a traffic light system for vehicles and pedestrians, including a push button that allows pedestrians to request permission to cross.

![Traffic light circuit](traffic%20light.png)

## Project Description

Under normal conditions, the green vehicle LED remains on while the red pedestrian LED tells pedestrians to wait. When the pedestrian button is pressed, the system performs the following sequence:

1. The vehicle green LED remains on for 2 seconds.
2. The yellow vehicle LED turns on for 3 seconds.
3. The red vehicle LED turns on and stops vehicle traffic.
4. The green pedestrian LED turns on for 5 seconds.
5. The green pedestrian LED blinks four times to warn that crossing time is ending.
6. The red pedestrian LED turns on again.
7. After 2 seconds, the system returns to its normal state.

## Pin Configuration

| Component | Arduino Pin |
| :--- | :---: |
| Vehicle red LED | 13 |
| Vehicle yellow LED | 12 |
| Vehicle green LED | 11 |
| Pedestrian red LED | 10 |
| Pedestrian green LED | 9 |
| Pedestrian push button | 2 |

The push button uses the Arduino's internal pull-up resistor through `INPUT_PULLUP`. Therefore, the input reads `LOW` when the button is pressed.

## Required Components

| Quantity | Component |
| :---: | :--- |
| 1 | Arduino UNO |
| 1 | USB cable |
| 1 | Breadboard |
| 5 | LEDs: 2 red, 1 yellow, and 2 green |
| 5 | Current-limiting resistors for the LEDs |
| 1 | Push button |
| — | Male-to-male jumper wires |

## Source Code

The complete Arduino C++ source code is available in [`Traffic_Light.cpp`](Traffic_Light.cpp).

## How to Run

1. Assemble the circuit according to the diagram.
2. Open the project using the Tinkercad link above or load the source code into an Arduino project.
3. Start the simulation or upload the program to the Arduino UNO.
4. Press the pedestrian button to begin the crossing sequence.
