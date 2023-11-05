/* Praktikum iz mikrokontrolera Vezbe 1 Zadatak 2
 * Copyright (c) 2023 ETF
 * SPDX-License-Identifier: Apache-2.0
 */

// Obavezna biblioteka
#include "mbed.h"


// Vreme izmedju 2 uzastopne provere stanja dugmeta
#define POLL_RATE     200ms


int main()
{
    // Instanciranje led i dugmeta
    DigitalOut led(LED1);
    DigitalIn dugme(BUTTON1);

    while (true) {
        // Namesti stanje diode da odgovara stanju dugmeta
        // Instanca DigitalIn u ovoj situaciji cita da li dugme nije pritisnuto, pa se radi komplementiranje
        led = !dugme;
        // Sacekaj odredjeno vreme izmedju uzastopnih provera
        ThisThread::sleep_for(POLL_RATE);
    }
}

