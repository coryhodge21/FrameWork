/**********************************
* \file : SRGPIO.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SRGPIO_h_
#define _SRGPIO_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SRGPIO_enums.h" 

// Base Address for this Register
#define SYSCTL_SRGPIO_BASE_ADDR	0x400FE508

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*SRGPIO_Set_fpt)(SRGPIO_e);

typedef void(*SRGPIO_Clear_fpt)(SRGPIO_e);

typedef int(*SRGPIO_Read_fpt)(SRGPIO_e);

typedef void(*SRGPIO_Write_fpt)(SRGPIO_e, int);

// Structure Declaration
struct SYSCTL_SRGPIO_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	SRGPIO_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 SRGPIO_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	SRGPIO_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	SRGPIO_Write_fpt	write;

};

typedef struct SYSCTL_SRGPIO_obj SYSCTL_SRGPIO_t;

// Initializer
SYSCTL_SRGPIO_t init_SYSCTL_SRGPIO(void);


#endif // _SRGPIO_h_

