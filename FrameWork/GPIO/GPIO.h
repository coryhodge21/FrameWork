/**********************************
* \file : GPIO.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _GPIO_h_
#define _GPIO_h_

#include "Registers.h" 

typedef struct GPIO_obj { 

	ADDRESS GPIO_BASE_ADDR;

	REGISTER_t Registers[MAX_REGISTER_ARR_SIZE];

	void(*set)(void);
	void(*clear)(void);
	void(*read)(void);
	void(*write)(void);

} GPIO_t;

GPIO_t CreateModule_GPIO(void);

#endif // _GPIO_h_

