# Caps Lock LED Indicator – Test Version

**Branch:** `test` – This is a prototype implementation for the Arduino Leonardo.  
The final production code will target an Arduino Micro.

## Overview
This sketch turns on an LED connected to **digital pin 7** when **Caps Lock** is enabled on the host computer.  
It uses the [HID-Project](https://github.com/NicoHood/HID) library to read the host’s keyboard LED status via USB.

The Leonardo (ATmega32u4) was used for this test because it supports native USB HID.  
The Arduino Micro shares the same USB capability and will be used in the final build.

## Features
- Lights LED **only when Caps Lock is active**.
- Polls LED state directly from the host via USB HID reports.
- No keystrokes are sent to the host (read-only HID).

## Hardware
- **Board:** Arduino Leonardo (test) / Arduino Micro (planned)
- **LED:** Standard 5 mm or similar, series resistor (220–330 Ω recommended)
- **Connection:** LED anode → pin 7, cathode → resistor → GND

## Software Requirements
- [Arduino IDE](https://www.arduino.cc/en/software) 2.x or newer
- **HID-Project by NicoHood** (install via **Library Manager**)

## Installation
1. Clone or download this branch:
   ```bash
   git clone -b test https://github.com/<username>/<repo>.git
****
