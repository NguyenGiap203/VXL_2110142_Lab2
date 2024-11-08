/*
 * update7SEG.h
 *
 *  Created on: Nov 9, 2024
 *      Author: NGUYEN GIAP
 */

#ifndef INC_UPDATE7SEG_H_
#define INC_UPDATE7SEG_H_

extern const int MAX_LED;
extern int index_led;
extern int led_buffer[4];

void update7SEG(int index_led);

#endif /* INC_UPDATE7SEG_H_ */
