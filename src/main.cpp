/*
 *    main.cpp - Project 02-push
 *        Muestra el funcionamiento de un pulsador
 *        Al apretar el pulsador, cambia el ritmo del parpadeo
 */

#include <Arduino.h>

#include "do_delay.h"

/*
 *     Definitions in platformio.ini
 *
 *      LED1 for blinking
 *      PUSH for button 
 */


void
setup(void)
{
    pinMode(LED1, OUTPUT);
    pinMode(PUSH, INPUT_PULLUP);
    digitalWrite(LED1, LOW);
}

void
loop(void)
{
    digitalWrite(LED1, HIGH);
    do_delay(PUSH);

    digitalWrite(LED1, LOW);
    do_delay(PUSH);
}
