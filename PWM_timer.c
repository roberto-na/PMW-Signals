/*
 * PWM_timer.c
 *
 * Created: 23/03/2018 12:00:38 p. m.
 * Author: 
 */

#include <mega328p.h>

void main(void)
{
    DDRB.1=1; //PB1 de salida motor
    TCCR1A=0x81;
    TCCR1B=0x01; //OxO1 para phase correct y 0x09 para fast PWM
while (1)
    {
        OCR1AH=0;   //Need to have a value of 0
        OCR1AL=PIND;

    }
}
