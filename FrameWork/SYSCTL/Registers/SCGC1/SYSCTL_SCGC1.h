/**********************************
* \file : SCGC1.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SCGC1_h_
#define _SCGC1_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SCGC1_enums.h" 

// Base Address for this Register
#define SYSCTL_SCGC1_BASE_ADDR	0x400FE114

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*SCGC1_Set_fpt)(SCGC1_e);

typedef void(*SCGC1_Clear_fpt)(SCGC1_e);

typedef int(*SCGC1_Read_fpt)(SCGC1_e);

typedef void(*SCGC1_Write_fpt)(SCGC1_e, int);

// Structure Declaration
struct SYSCTL_SCGC1_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	SCGC1_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 SCGC1_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	SCGC1_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	SCGC1_Write_fpt	write;

};

typedef struct SYSCTL_SCGC1_obj SYSCTL_SCGC1_t;

// Initializer
SYSCTL_SCGC1_t init_SYSCTL_SCGC1(void);


#endif // _SCGC1_h_

