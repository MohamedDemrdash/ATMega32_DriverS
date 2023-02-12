/******************************************************************************
 *
 * Module: BUZ
 *
 * Layer : EUCAL
 *
 * File Name: BUZ_interface.h
 *
 * Description: Header file for ATMEGA32A Microcontroller - BUZER Driver
 *
 * Author: Mohamed Demrdash
 ******************************************************************************/

#ifndef BUZ_INTERFACE_H_
#define BUZ_INTERFACE_H_


#include "../../utilities/STD_Types.h"

// Port Defines
#define  BUZ_PORTA  0
#define  BUZ_PORTB  1
#define  BUZ_PORTC  2
#define  BUZ_PORTD  3

//Active State
#define ACTIVE_HIGH    1
#define ACTIVE_LOW     0


typedef struct{
	
	uint8_t Port : 2         ;
	uint8_t Pin  : 3         ;
	uint8_t Active_State : 1 ;
	
}BUZ_Type;


void BUZ_Init(BUZ_Type BUZ);

void BUZ_On(BUZ_Type BUZ);

void BUZ_Off(BUZ_Type BUZ);

void BUZ_Tog(BUZ_Type BUZ);

//void BUZ_alarm(BUZ_Type BUZ,uint8_t delay);


#endif /* BUZ_INTERFACE_H_ */