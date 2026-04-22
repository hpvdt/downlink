# downlink
General data downlink system for our vehicles

## Known USB Issue

The STM32F103 series of microcontrollers needs an external 1.5&nbsp;kOhm pullup resistor to the 3.3&nbsp;V supply rail on the D+ line for proper used, as per table 3 in section 2.1 of [AN4879](https://www.st.com/resource/en/application_note/an4879-introduction-to-usb-hardware-and-pcb-guidelines-using-stm32-mcus-stmicroelectronics.pdf). 

This explains why previous boards failed to work with USB communications. The TITAN 2022 board managed to work because there was a 10&nbsp;kOhm resistor for this pullup, likely the minimum needed for this.

There is also no need for the 22&nbsp;Ohm resistors on the USB data lines.
