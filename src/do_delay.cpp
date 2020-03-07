/*
 * 	do_delay.cpp
 * 		Es una funcion independiente del contexto
 */

#include <Arduino.h>

#include "do_delay.h"

const uint32_t long_delay = 1000;
const uint32_t short_delay = 100;

void
do_delay(int push_key)
{
    if (digitalRead(push_key))
        delay(long_delay);
    else
        delay(short_delay);
}
