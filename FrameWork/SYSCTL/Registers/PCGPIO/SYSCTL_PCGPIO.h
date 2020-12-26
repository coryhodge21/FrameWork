/**********************************
* \file : PCGPIO.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PCGPIO_h_
#define _PCGPIO_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PCGPIO_enums.h" 

// Base Address for this Register
#define SYSCTL_PCGPIO_BASE_ADDR	0x400FE908

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PCGPIO_Set_fpt)(PCGPIO_e);

typedef void(*PCGPIO_Clear_fpt)(PCGPIO_e);

typedef int(*PCGPIO_Read_fpt)(PCGPIO_e);

typedef void(*PCGPIO_Write_fpt)(PCGPIO_e, int);

// Structure Declaration
struct SYSCTL_PCGPIO_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PCGPIO_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PCGPIO_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PCGPIO_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PCGPIO_Write_fpt	write;

};

typedef struct SYSCTL_PCGPIO_obj SYSCTL_PCGPIO_t;

// Initializer
SYSCTL_PCGPIO_t init_SYSCTL_PCGPIO(void);


#endif // _PCGPIO_h_

