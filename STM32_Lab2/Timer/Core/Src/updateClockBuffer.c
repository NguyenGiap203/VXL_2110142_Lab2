/*
 * updateClockBuffer.c
 *
 *  Created on: Nov 9, 2024
 *      Author: NGUYEN GIAP
 */

#include "main.h"
#include "update7SEG.h"

int hour = 15, minute = 8, second = 50;

void updateClockBuffer(){
	led_buffer[0] = hour / 10;
	led_buffer[1] = hour % 10;
	led_buffer[2] = minute / 10;
	led_buffer[3] = minute % 10;
}
