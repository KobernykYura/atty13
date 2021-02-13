#ifndef __AVR_ATtiny13__
#define __AVR_ATtiny13__
#endif

// #define F_CPU 4800000UL // 4.8MHz clock
#define F_CPU 1000000UL // 1MHz clock

#include <avr/io.h>
#include <util/delay.h>

/*
Make sure you have the correct fuses:
if run with Internal 8 Mhz div by 8 = 1 Mhz; Lfuse 0x62 Hfuse 0xD9
if run with External oscillator 16mhz; Lfuse 0xFF Hfuse 0xD9
*/

int main(void)
{
    /* setup */

    DDRB = 0x01;  // set LED pin as OUTPUT
    PORTB = 0x00; // set all pins to LOW

    // DDRB |= (1 << DDB3); // set LED pin as OUTPUT
    // PORTB ^= (1 << PORTB3); // set all pins to LOW

    /* loop */
    while (1)
    {
        // PORTB ^= (1 << PB3); // toggle LED pin
        // _delay_us(5000);

        PINB |= (1 << PINB3); // toggle LED pin
        _delay_ms(500);
    }
}