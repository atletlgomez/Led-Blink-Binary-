# LED Blink Using Bitmasks and Registers

## Overview

To better understand how microcontrollers interact with hardware, I revisited the classic LED blink project. Instead of using Arduino's `pinMode()` and `digitalWrite()` functions, I controlled the LED directly through AVR registers and bitmasks.

## Concepts Practiced

* GPIO register manipulation
* Bitwise operators (`|`, `&`, `~`, `<<`)
* Hardware registers (`DDRD`, `PORTD`, `PIND`)
* Binary masking techniques

## Challenges

### 1. Understanding Registers

One of the first challenges was learning the purpose of each GPIO register. Unlike Arduino's abstraction layer, direct register programming requires understanding how the microcontroller configures and controls individual pins.

For example:

* `DDRD` configures pins as inputs or outputs.
* `PORTD` controls the output state of pins.
* `PIND` reads the current state of input pins.

Since register names and layouts vary between microcontrollers, learning to navigate the datasheet and understand register functionality was an important part of the project.

### Solution

I created a reference sheet for the AVR GPIO registers and practiced modifying individual bits using binary masks. This helped me understand how high-level Arduino functions are implemented underneath the hood.

## Lessons Learned

This project showed me how microcontrollers interact with hardware at a lower level. While the final result was still a blinking LED, I gained a better understanding of binary operations, bitmasks, and direct register manipulation—skills that are fundamental in embedded software and firmware development.
