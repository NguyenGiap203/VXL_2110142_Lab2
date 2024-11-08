/*
 * update7SEG.c
 *
 *  Created on: Nov 9, 2024
 *      Author: NGUYEN GIAP
 */

#include "main.h"
#include "update7SEG.h"
#include "display7SEG.h"

const int MAX_LED = 4;
int index_led = 0;
int led_buffer[4] = {1, 2, 3, 4};

void update7SEG(int index_led){
	switch(index_led){
	case 0:
		HAL_GPIO_WritePin(GPIOA, EN0_Pin, RESET);
		HAL_GPIO_WritePin(GPIOA, EN1_Pin|EN2_Pin|EN3_Pin, SET);
		display7SEG(led_buffer[0]);
		break;
	case 1:
		HAL_GPIO_WritePin(GPIOA, EN1_Pin, RESET);
		HAL_GPIO_WritePin(GPIOA, EN0_Pin|EN2_Pin|EN3_Pin, SET);
		display7SEG(led_buffer[1]);
		break;
	case 2:
		HAL_GPIO_WritePin(GPIOA, EN2_Pin, RESET);
		HAL_GPIO_WritePin(GPIOA, EN0_Pin|EN1_Pin|EN3_Pin, SET);
		display7SEG(led_buffer[2]);
		break;
	case 3:
		HAL_GPIO_WritePin(GPIOA, EN3_Pin, RESET);
		HAL_GPIO_WritePin(GPIOA, EN0_Pin|EN1_Pin|EN2_Pin, SET);
		display7SEG(led_buffer[3]);
		break;
	default:
		break;
	}
}
