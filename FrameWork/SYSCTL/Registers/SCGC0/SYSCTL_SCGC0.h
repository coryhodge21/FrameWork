/**********************************
* \file : SCGC0.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SCGC0_h_
#define _SCGC0_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SCGC0_enums.h" 

// Base Address for this Register
#define SYSCTL_SCGC0_BASE_ADDR	0x400FE110

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*SCGC0_Set_fpt)(SCGC0_e);

typedef void(*SCGC0_Clear_fpt)(SCGC0_e);

typedef int(*SCGC0_Read_fpt)(SCGC0_e);

typedef void(*SCGC0_Write_fpt)(SCGC0_e, int);

// Structure Declaration
struct SYSCTL_SCGC0_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	SCGC0_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 SCGC0_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	SCGC0_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	SCGC0_Write_fpt	write;

};

typedef struct SYSCTL_SCGC0_obj SYSCTL_SCGC0_t;

// Initializer
SYSCTL_SCGC0_t init_SYSCTL_SCGC0(void);


#endif // _SCGC0_h_

