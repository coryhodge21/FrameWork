/**********************************
* \file : DCGCGPIO.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DCGCGPIO_h_
#define _DCGCGPIO_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DCGCGPIO_enums.h" 

// Base Address for this Register
#define SYSCTL_DCGCGPIO_BASE_ADDR	0x400FE808

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*DCGCGPIO_Set_fpt)(DCGCGPIO_e);

typedef void(*DCGCGPIO_Clear_fpt)(DCGCGPIO_e);

typedef int(*DCGCGPIO_Read_fpt)(DCGCGPIO_e);

typedef void(*DCGCGPIO_Write_fpt)(DCGCGPIO_e, int);

// Structure Declaration
struct SYSCTL_DCGCGPIO_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	DCGCGPIO_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 DCGCGPIO_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	DCGCGPIO_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	DCGCGPIO_Write_fpt	write;

};

typedef struct SYSCTL_DCGCGPIO_obj SYSCTL_DCGCGPIO_t;

// Initializer
SYSCTL_DCGCGPIO_t init_SYSCTL_DCGCGPIO(void);


#endif // _DCGCGPIO_h_

