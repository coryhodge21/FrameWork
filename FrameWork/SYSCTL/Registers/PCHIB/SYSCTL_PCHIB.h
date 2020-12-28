/**********************************
* \file : PCHIB.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PCHIB_h_
#define _PCHIB_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PCHIB_enums.h" 

// Base Address for this Register
#define SYSCTL_PCHIB_BASE_ADDR	0x400FE914

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PCHIB_Set_fpt)(PCHIB_e);

typedef void(*PCHIB_Clear_fpt)(PCHIB_e);

typedef int(*PCHIB_Read_fpt)(PCHIB_e);

typedef void(*PCHIB_Write_fpt)(PCHIB_e, int);

// Structure Declaration
struct SYSCTL_PCHIB_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PCHIB_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PCHIB_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PCHIB_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PCHIB_Write_fpt	write;

};

typedef struct SYSCTL_PCHIB_obj SYSCTL_PCHIB_t;

// Initializer
SYSCTL_PCHIB_t init_SYSCTL_PCHIB(void);


#endif // _PCHIB_h_

