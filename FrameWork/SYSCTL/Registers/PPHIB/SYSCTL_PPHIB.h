/**********************************
* \file : PPHIB.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PPHIB_h_
#define _PPHIB_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PPHIB_enums.h" 

// Base Address for this Register
#define SYSCTL_PPHIB_BASE_ADDR	0x400FE314

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PPHIB_Set_fpt)(PPHIB_e);

typedef void(*PPHIB_Clear_fpt)(PPHIB_e);

typedef int(*PPHIB_Read_fpt)(PPHIB_e);

typedef void(*PPHIB_Write_fpt)(PPHIB_e, int);

// Structure Declaration
struct SYSCTL_PPHIB_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PPHIB_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PPHIB_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PPHIB_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PPHIB_Write_fpt	write;

};

typedef struct SYSCTL_PPHIB_obj SYSCTL_PPHIB_t;

// Initializer
SYSCTL_PPHIB_t init_SYSCTL_PPHIB(void);


#endif // _PPHIB_h_

