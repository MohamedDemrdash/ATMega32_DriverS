/******************************************************************************
 *
 * Module: LED
 *
 * Layer : EUCAL
 *
 * File Name: LED_interface.c
 *
 * Description: Source file for ATMEGA32A Microcontroller - LED Driver
 *
 * Author: Mohamed Demrdash
 ******************************************************************************/
#include "../../utilities/STD_Types.h"
#include "../../MCAL/DIO Driver/DIO_interface.h"
#include "LED_interface.h"

void LED_Init(uint8_t port,uint8_t pin)
{
	DIO_set_pin_dir(port,pin,OUTPUT);
}

void LED_On(uint8_t port,uint8_t pin)
{
	DIO_write_pin(port,pin,HIGH);
}

void LED_Off(uint8_t port,uint8_t pin)
{
	DIO_write_pin(port,pin,LOW);
}

void LED_Tog(uint8_t port,uint8_t pin)
{
	DIO_toggle_pin(port,pin);
}

/*void LED_blink(uint8_t port,uint8_t pin,uint8_t delay)
{
	DIO_toggle_pin(port,pin);
	//Delay(delay):
}*/