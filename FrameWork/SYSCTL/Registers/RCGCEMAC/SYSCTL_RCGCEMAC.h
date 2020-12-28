/**********************************
* \file : RCGCEMAC.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RCGCEMAC_h_
#define _RCGCEMAC_h_

//! \brief Enumerations for this Register
#include "SYSCTL_RCGCEMAC_enums.h" 

// Base Address for this Register
#define SYSCTL_RCGCEMAC_BASE_ADDR	0x400FE69C

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*RCGCEMAC_Set_fpt)(RCGCEMAC_e);

typedef void(*RCGCEMAC_Clear_fpt)(RCGCEMAC_e);

typedef int(*RCGCEMAC_Read_fpt)(RCGCEMAC_e);

typedef void(*RCGCEMAC_Write_fpt)(RCGCEMAC_e, int);

// Structure Declaration
struct SYSCTL_RCGCEMAC_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	RCGCEMAC_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 RCGCEMAC_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	RCGCEMAC_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	RCGCEMAC_Write_fpt	write;

};

typedef struct SYSCTL_RCGCEMAC_obj SYSCTL_RCGCEMAC_t;

// Initializer
SYSCTL_RCGCEMAC_t init_SYSCTL_RCGCEMAC(void);


#endif // _RCGCEMAC_h_

