/******************************************************************************
 *
 * Module: BUZ
 *
 * Layer : EUCAL
 *
 * File Name: BUZ_program.c
 *
 * Description: Source file for ATMEGA32A Microcontroller - BUZER Driver
 *
 * Author: Mohamed Demrdash
 ******************************************************************************/
#include "../../utilities/STD_Types.h"
#include "../../MCAL/DIO Driver/DIO_interface.h"
#include "BUZ_interface.h"

void BUZ_Init(BUZ_Type BUZ)
{
	if (BUZ.Active_State == ACTIVE_HIGH)
	{
		DIO_Type PIN = {BUZ.Port,BUZ.Pin,OUTPUT,LOW};
		DIO_VoidSetPinDir(PIN);
		DIO_VoidWritePin(PIN);
	}
	else if (BUZ.Active_State == ACTIVE_LOW)
	{
		DIO_Type PIN = {BUZ.Port,BUZ.Pin,OUTPUT,HIGH};
		DIO_VoidSetPinDir(PIN);
		DIO_VoidWritePin(PIN);
	}
}

void BUZ_On(BUZ_Type BUZ)
{
	if (BUZ.Active_State == ACTIVE_HIGH)
	{
		DIO_Type PIN = {BUZ.Port,BUZ.Pin,OUTPUT,HIGH};
		DIO_VoidWritePin(PIN);
	}
	else if (BUZ.Active_State == ACTIVE_LOW)
	{
		DIO_Type PIN = {BUZ.Port,BUZ.Pin,OUTPUT,LOW};
		DIO_VoidWritePin(PIN);
	}
}

void BUZ_Off(BUZ_Type BUZ)
{
	if (BUZ.Active_State == ACTIVE_HIGH)
	{
		DIO_Type PIN = {BUZ.Port,BUZ.Pin,OUTPUT,LOW};
		DIO_VoidWritePin(PIN);
	}
	else if (BUZ.Active_State == ACTIVE_LOW)
	{
		DIO_Type PIN = {BUZ.Port,BUZ.Pin,OUTPUT,HIGH};
		DIO_VoidWritePin(PIN);
	}
}

void BUZ_Tog(BUZ_Type BUZ)
{
	DIO_Type PIN = {BUZ.Port,BUZ.Pin,OUTPUT,LOW};
	DIO_VoidTogglePin(PIN);
}

/*void BUZ_alarm(BUZ_Type BUZ,uint8_t delay)
{
	DIO_Type PIN = {BUZ.Port,BUZ.Pin,OUTPUT,LOW};
	DIO_toggle_pin(PIN);
	//Delay(delay):
}*/

