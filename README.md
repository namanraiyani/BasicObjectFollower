# basic_object_follower
![image](https://github.com/user-attachments/assets/4e993653-0245-4355-8f40-83f5305ffef2)


## Overview

This project implements a simple **Object Following Robot** using an **Arduino UNO**, **IR proximity sensors**, and **DC motors**. The robot uses two IR sensors to detect objects and adjusts its movement based on the object's position relative to the sensors.

---

## Components Used

- Arduino UNO (ATmega328P)
- 2 x IR Proximity Sensors
- 2 x DC Motors
- Motor Driver Module (e.g., L293D or L298N)
- Power Supply (Battery Pack or USB)
- Chassis and Wheels
- Jumper Wires

---

## Circuit
![image](https://github.com/user-attachments/assets/be76a96d-1cc7-4da9-a4e7-3f031fb7f600)

---

## Theory

This robot uses **IR proximity sensors** for its input. Each IR sensor includes:

- **Transmitter (IR LED)**: Emits infrared light (wavelength: 780nm–1mm)
- **Receiver (Photodiode)**: Detects reflected IR light

When an object is in front of the sensor, the IR light reflects back and is detected by the receiver. This changes the output of the sensor.

**Sensor Output Logic:**

- No object detected → Output: `HIGH (1)`
- Object detected → Output: `LOW (0)`

The sensors are connected to the Arduino as follows:

- `VCC` → Arduino 5V
- `GND` → Arduino GND
- `OUT` → Connected to digital input pins (`A0`, `A1`)

---

## Working Logic

The robot responds to the IR sensor input as follows:

- **Both sensors detect object (0, 0)** → Move **Forward**
- **Left sensor HIGH, Right sensor LOW (1, 0)** → Turn **Right**
- **Left sensor LOW, Right sensor HIGH (0, 1)** → Turn **Left**
- **Both sensors HIGH (1, 1)** → **Stop**

---

## Arduino Code

The Arduino `.ino` file included in this repository reads sensor input and controls the motors accordingly. Motor directions are managed using 4 output pins connected to a motor driver module.

See [`object_follower.ino`](object_follower.ino) for the full code.

---

## Applications

1. Following shopping carts at malls and stores
2. Hands-free camera following systems
3. Industrial automation in factories
4. With simple code changes, can be converted to an **object avoiding robot**

---

## How to Run

1. Connect the sensors and motors as described in the circuit.
2. Upload the `line_follower.ino` file to your Arduino UNO.
3. Power the robot using a battery or USB.
4. Place an object in front of the sensors and observe the robot following it.

---
