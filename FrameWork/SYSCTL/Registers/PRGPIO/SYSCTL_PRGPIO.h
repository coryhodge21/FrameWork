/**********************************
* \file : PRGPIO.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PRGPIO_h_
#define _PRGPIO_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PRGPIO_enums.h" 

// Base Address for this Register
#define SYSCTL_PRGPIO_BASE_ADDR	0x400FEA08

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PRGPIO_Set_fpt)(PRGPIO_e);

typedef void(*PRGPIO_Clear_fpt)(PRGPIO_e);

typedef int(*PRGPIO_Read_fpt)(PRGPIO_e);

typedef void(*PRGPIO_Write_fpt)(PRGPIO_e, int);

// Structure Declaration
struct SYSCTL_PRGPIO_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PRGPIO_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PRGPIO_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PRGPIO_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PRGPIO_Write_fpt	write;

};

typedef struct SYSCTL_PRGPIO_obj SYSCTL_PRGPIO_t;

// Initializer
SYSCTL_PRGPIO_t init_SYSCTL_PRGPIO(void);


#endif // _PRGPIO_h_

