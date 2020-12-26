/**********************************
* \file : RCGCGPIO.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RCGCGPIO_h_
#define _RCGCGPIO_h_

//! \brief Enumerations for this Register
#include "SYSCTL_RCGCGPIO_enums.h" 

// Base Address for this Register
#define SYSCTL_RCGCGPIO_BASE_ADDR	0x400FE608

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*RCGCGPIO_Set_fpt)(RCGCGPIO_e);

typedef void(*RCGCGPIO_Clear_fpt)(RCGCGPIO_e);

typedef int(*RCGCGPIO_Read_fpt)(RCGCGPIO_e);

typedef void(*RCGCGPIO_Write_fpt)(RCGCGPIO_e, int);

// Structure Declaration
struct SYSCTL_RCGCGPIO_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	RCGCGPIO_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 RCGCGPIO_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	RCGCGPIO_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	RCGCGPIO_Write_fpt	write;

};

typedef struct SYSCTL_RCGCGPIO_obj SYSCTL_RCGCGPIO_t;

// Initializer
SYSCTL_RCGCGPIO_t init_SYSCTL_RCGCGPIO(void);


#endif // _RCGCGPIO_h_

