/*
 * ESPNOW-Transponder sketch using USB
 *
 * Copyright (C) 2026 Simon D. Levy
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, in version 3.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#include <espnow-transponder.h>

// Change this to the MAC address of the other ESP32
static const uint8_t PEER_ADDRESS[] = {0x58,0xE6,0xC5,0x14,0x0A,0x24};

void setup()
{
    Serial.begin(115200);

    EspNowTransponder::begin(PEER_ADDRESS, &Serial);
}

void loop()
{
    EspNowTransponder::step();
}



