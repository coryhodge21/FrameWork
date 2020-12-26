/**********************************
* \file : RCGC1.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RCGC1_h_
#define _RCGC1_h_

//! \brief Enumerations for this Register
#include "SYSCTL_RCGC1_enums.h" 

// Base Address for this Register
#define SYSCTL_RCGC1_BASE_ADDR	0x400FE104

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*RCGC1_Set_fpt)(RCGC1_e);

typedef void(*RCGC1_Clear_fpt)(RCGC1_e);

typedef int(*RCGC1_Read_fpt)(RCGC1_e);

typedef void(*RCGC1_Write_fpt)(RCGC1_e, int);

// Structure Declaration
struct SYSCTL_RCGC1_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	RCGC1_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 RCGC1_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	RCGC1_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	RCGC1_Write_fpt	write;

};

typedef struct SYSCTL_RCGC1_obj SYSCTL_RCGC1_t;

// Initializer
SYSCTL_RCGC1_t init_SYSCTL_RCGC1(void);


#endif // _RCGC1_h_

