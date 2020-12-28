/**********************************
* \file : DCGC0.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DCGC0_h_
#define _DCGC0_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DCGC0_enums.h" 

// Base Address for this Register
#define SYSCTL_DCGC0_BASE_ADDR	0x400FE120

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*DCGC0_Set_fpt)(DCGC0_e);

typedef void(*DCGC0_Clear_fpt)(DCGC0_e);

typedef int(*DCGC0_Read_fpt)(DCGC0_e);

typedef void(*DCGC0_Write_fpt)(DCGC0_e, int);

// Structure Declaration
struct SYSCTL_DCGC0_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	DCGC0_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 DCGC0_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	DCGC0_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	DCGC0_Write_fpt	write;

};

typedef struct SYSCTL_DCGC0_obj SYSCTL_DCGC0_t;

// Initializer
SYSCTL_DCGC0_t init_SYSCTL_DCGC0(void);


#endif // _DCGC0_h_

