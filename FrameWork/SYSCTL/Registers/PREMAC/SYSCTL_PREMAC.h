/**********************************
* \file : PREMAC.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PREMAC_h_
#define _PREMAC_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PREMAC_enums.h" 

// Base Address for this Register
#define SYSCTL_PREMAC_BASE_ADDR	0x400FEA9C

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PREMAC_Set_fpt)(PREMAC_e);

typedef void(*PREMAC_Clear_fpt)(PREMAC_e);

typedef int(*PREMAC_Read_fpt)(PREMAC_e);

typedef void(*PREMAC_Write_fpt)(PREMAC_e, int);

// Structure Declaration
struct SYSCTL_PREMAC_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PREMAC_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PREMAC_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PREMAC_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PREMAC_Write_fpt	write;

};

typedef struct SYSCTL_PREMAC_obj SYSCTL_PREMAC_t;

// Initializer
SYSCTL_PREMAC_t init_SYSCTL_PREMAC(void);


#endif // _PREMAC_h_

