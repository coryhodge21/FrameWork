/**********************************
* \file : SRCR0.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SRCR0_h_
#define _SRCR0_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SRCR0_enums.h" 

// Base Address for this Register
#define SYSCTL_SRCR0_BASE_ADDR	0x400FE040

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*SRCR0_Set_fpt)(SRCR0_e);

typedef void(*SRCR0_Clear_fpt)(SRCR0_e);

typedef int(*SRCR0_Read_fpt)(SRCR0_e);

typedef void(*SRCR0_Write_fpt)(SRCR0_e, int);

// Structure Declaration
struct SYSCTL_SRCR0_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	SRCR0_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 SRCR0_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	SRCR0_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	SRCR0_Write_fpt	write;

};

typedef struct SYSCTL_SRCR0_obj SYSCTL_SRCR0_t;

// Initializer
SYSCTL_SRCR0_t init_SYSCTL_SRCR0(void);


#endif // _SRCR0_h_

