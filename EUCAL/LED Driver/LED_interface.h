/******************************************************************************
 *
 * Module: LED
 *
 * Layer : EUCAL
 *
 * File Name: LED_interface.h
 *
 * Description: Header file for ATMEGA32A Microcontroller - LED Driver
 *
 * Author: Mohamed Demrdash
 ******************************************************************************/

#ifndef LED_interface_H_
#define LED_interface_H_

#include "../../utilities/STD_Types.h"


void LED_Init(uint8_t port,uint8_t pin);

void LED_On(uint8_t port,uint8_t pin);

void LED_Off(uint8_t port,uint8_t pin);

void LED_Tog(uint8_t port,uint8_t pin);

//void LED_blink(uint8_t port,uint8_t pin,uint8_t delay);


#endif /* LED_interface_H_ */