/**********************************
* \file : RCGC0.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RCGC0_h_
#define _RCGC0_h_

//! \brief Enumerations for this Register
#include "SYSCTL_RCGC0_enums.h" 

// Base Address for this Register
#define SYSCTL_RCGC0_BASE_ADDR	0x400FE100

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*RCGC0_Set_fpt)(RCGC0_e);

typedef void(*RCGC0_Clear_fpt)(RCGC0_e);

typedef int(*RCGC0_Read_fpt)(RCGC0_e);

typedef void(*RCGC0_Write_fpt)(RCGC0_e, int);

// Structure Declaration
struct SYSCTL_RCGC0_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	RCGC0_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 RCGC0_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	RCGC0_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	RCGC0_Write_fpt	write;

};

typedef struct SYSCTL_RCGC0_obj SYSCTL_RCGC0_t;

// Initializer
SYSCTL_RCGC0_t init_SYSCTL_RCGC0(void);


#endif // _RCGC0_h_

