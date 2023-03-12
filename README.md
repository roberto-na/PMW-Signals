# PMW-Signals
This is a program written in C for the Atmel AVR ATmega328P microcontroller. It configures pin PB1 as an output and generates a pulse-width modulation (PWM) signal by turning the pin on and off with a variable delay based on the value of the 4 least significant bits of the PIND register.

The program uses the delay_ms() function from the AVR library to generate the delay.

The program does not have any interrupts or timers set up to generate the PWM signal, so the duty cycle of the signal will not be precise or consistent.
