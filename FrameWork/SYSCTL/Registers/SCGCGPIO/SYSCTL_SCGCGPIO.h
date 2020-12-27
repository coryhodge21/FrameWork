/**********************************
* \file : SCGCGPIO.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SCGCGPIO_h_
#define _SCGCGPIO_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SCGCGPIO_enums.h" 

// Base Address for this Register
#define SYSCTL_SCGCGPIO_BASE_ADDR	0x400FE708

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*SCGCGPIO_Set_fpt)(SCGCGPIO_e);

typedef void(*SCGCGPIO_Clear_fpt)(SCGCGPIO_e);

typedef int(*SCGCGPIO_Read_fpt)(SCGCGPIO_e);

typedef void(*SCGCGPIO_Write_fpt)(SCGCGPIO_e, int);

// Structure Declaration
struct SYSCTL_SCGCGPIO_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	SCGCGPIO_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 SCGCGPIO_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	SCGCGPIO_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	SCGCGPIO_Write_fpt	write;

};

typedef struct SYSCTL_SCGCGPIO_obj SYSCTL_SCGCGPIO_t;

// Initializer
SYSCTL_SCGCGPIO_t init_SYSCTL_SCGCGPIO(void);


#endif // _SCGCGPIO_h_

