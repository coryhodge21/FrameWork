/**********************************
* \file : DCGC1.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DCGC1_h_
#define _DCGC1_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DCGC1_enums.h" 

// Base Address for this Register
#define SYSCTL_DCGC1_BASE_ADDR	0x400FE124

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*DCGC1_Set_fpt)(DCGC1_e);

typedef void(*DCGC1_Clear_fpt)(DCGC1_e);

typedef int(*DCGC1_Read_fpt)(DCGC1_e);

typedef void(*DCGC1_Write_fpt)(DCGC1_e, int);

// Structure Declaration
struct SYSCTL_DCGC1_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	DCGC1_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 DCGC1_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	DCGC1_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	DCGC1_Write_fpt	write;

};

typedef struct SYSCTL_DCGC1_obj SYSCTL_DCGC1_t;

// Initializer
SYSCTL_DCGC1_t init_SYSCTL_DCGC1(void);


#endif // _DCGC1_h_

