/**********************************
* \file : PPGPIO.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PPGPIO_h_
#define _PPGPIO_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PPGPIO_enums.h" 

// Base Address for this Register
#define SYSCTL_PPGPIO_BASE_ADDR	0x400FE308

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PPGPIO_Set_fpt)(PPGPIO_e);

typedef void(*PPGPIO_Clear_fpt)(PPGPIO_e);

typedef int(*PPGPIO_Read_fpt)(PPGPIO_e);

typedef void(*PPGPIO_Write_fpt)(PPGPIO_e, int);

// Structure Declaration
struct SYSCTL_PPGPIO_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PPGPIO_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PPGPIO_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PPGPIO_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PPGPIO_Write_fpt	write;

};

typedef struct SYSCTL_PPGPIO_obj SYSCTL_PPGPIO_t;

// Initializer
SYSCTL_PPGPIO_t init_SYSCTL_PPGPIO(void);


#endif // _PPGPIO_h_

