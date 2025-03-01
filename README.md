# Communication between STM32 and Arduino Uno via USART

This project demonstrates how to establish communication between an STM32 microcontroller and an Arduino Uno using USART. The Arduino Uno receives commands through its serial port and forwards these commands to the STM32.

## Components Required

- STM32 microcontroller
- Arduino Uno
- USB cables
- Jumper wires

## Wiring Diagram

Connect the components as follows:

- Arduino Uno TX (pin 1) to STM32 RX
- Arduino Uno RX (pin 0) to STM32 TX
- Common ground between Arduino Uno and STM32


## Conclusion

This setup allows the Arduino Uno to act as a bridge, receiving commands via its serial port and forwarding them to the STM32 microcontroller for further processing.
