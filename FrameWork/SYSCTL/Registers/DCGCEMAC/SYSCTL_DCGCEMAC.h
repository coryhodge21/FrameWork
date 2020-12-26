/**********************************
* \file : DCGCEMAC.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DCGCEMAC_h_
#define _DCGCEMAC_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DCGCEMAC_enums.h" 

// Base Address for this Register
#define SYSCTL_DCGCEMAC_BASE_ADDR	0x400FE89C

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*DCGCEMAC_Set_fpt)(DCGCEMAC_e);

typedef void(*DCGCEMAC_Clear_fpt)(DCGCEMAC_e);

typedef int(*DCGCEMAC_Read_fpt)(DCGCEMAC_e);

typedef void(*DCGCEMAC_Write_fpt)(DCGCEMAC_e, int);

// Structure Declaration
struct SYSCTL_DCGCEMAC_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	DCGCEMAC_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 DCGCEMAC_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	DCGCEMAC_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	DCGCEMAC_Write_fpt	write;

};

typedef struct SYSCTL_DCGCEMAC_obj SYSCTL_DCGCEMAC_t;

// Initializer
SYSCTL_DCGCEMAC_t init_SYSCTL_DCGCEMAC(void);


#endif // _DCGCEMAC_h_

