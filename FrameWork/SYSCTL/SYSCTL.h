/**********************************
* \file : SYSCTL.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SYSCTL_h_
#define _SYSCTL_h_

#include "Registers.h" 

typedef struct SYSCTL_obj { 

	ADDRESS SYSCTL_BASE_ADDR;

	REGISTER_t Registers[MAX_REGISTER_ARR_SIZE];

	void(*set)(void);
	void(*clear)(void);
	void(*read)(void);
	void(*write)(void);

} SYSCTL_t;

SYSCTL_t CreateModule_SYSCTL(void);

#endif // _SYSCTL_h_

