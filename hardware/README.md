# Hardware

These are the designs for the downlink board.

## USB Issues

After assembling V1.2 of the board, it was found trhat the USB functionality of the chip doesn't work. This issue seems to come from having the chip on the board, as flashing the code on STM32's on dev boards worked as intended. 

Further tests to try and isolate the root cause were inconclusive, installing a new chip didn't help; transplating a working chip from a dev board to this board failed, but worked when returned to its original dev board; running wires from a dev board to the 22 ohm resistors worked. So it seems to just affect chips that are mounted directly on the board.

So there is no known root cause, at least these boards can be used as RPi HATs until revised.
