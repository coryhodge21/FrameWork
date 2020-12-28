/**********************************
* \file : PCTL.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PCTL_h_
#define _PCTL_h_

//! \brief Enumerations for this Register
#include "GPIO_PCTL_enums.h" 

// Base Address for this Register
#define GPIO_PCTL_BASE_ADDR	0x0000052C

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PCTL_Set_fpt)(PCTL_e);

typedef void(*PCTL_Clear_fpt)(PCTL_e);

typedef int(*PCTL_Read_fpt)(PCTL_e);

typedef void(*PCTL_Write_fpt)(PCTL_e, int);

// Structure Declaration
struct GPIO_PCTL_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PCTL_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PCTL_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PCTL_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PCTL_Write_fpt	write;

};

typedef struct GPIO_PCTL_obj GPIO_PCTL_t;

// Initializer
GPIO_PCTL_t init_GPIO_PCTL(void);


#endif // _PCTL_h_

