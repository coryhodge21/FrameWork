/**********************************
* \file : DCGC2.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DCGC2_h_
#define _DCGC2_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DCGC2_enums.h" 

// Base Address for this Register
#define SYSCTL_DCGC2_BASE_ADDR	0x400FE128

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*DCGC2_Set_fpt)(DCGC2_e);

typedef void(*DCGC2_Clear_fpt)(DCGC2_e);

typedef int(*DCGC2_Read_fpt)(DCGC2_e);

typedef void(*DCGC2_Write_fpt)(DCGC2_e, int);

// Structure Declaration
struct SYSCTL_DCGC2_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	DCGC2_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 DCGC2_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	DCGC2_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	DCGC2_Write_fpt	write;

};

typedef struct SYSCTL_DCGC2_obj SYSCTL_DCGC2_t;

// Initializer
SYSCTL_DCGC2_t init_SYSCTL_DCGC2(void);


#endif // _DCGC2_h_

