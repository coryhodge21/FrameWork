/**********************************
* \file : SCGC2.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SCGC2_h_
#define _SCGC2_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SCGC2_enums.h" 

// Base Address for this Register
#define SYSCTL_SCGC2_BASE_ADDR	0x400FE118

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*SCGC2_Set_fpt)(SCGC2_e);

typedef void(*SCGC2_Clear_fpt)(SCGC2_e);

typedef int(*SCGC2_Read_fpt)(SCGC2_e);

typedef void(*SCGC2_Write_fpt)(SCGC2_e, int);

// Structure Declaration
struct SYSCTL_SCGC2_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	SCGC2_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 SCGC2_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	SCGC2_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	SCGC2_Write_fpt	write;

};

typedef struct SYSCTL_SCGC2_obj SYSCTL_SCGC2_t;

// Initializer
SYSCTL_SCGC2_t init_SYSCTL_SCGC2(void);


#endif // _SCGC2_h_

