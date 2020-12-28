/**********************************
* \file : SCGCEMAC.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SCGCEMAC_h_
#define _SCGCEMAC_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SCGCEMAC_enums.h" 

// Base Address for this Register
#define SYSCTL_SCGCEMAC_BASE_ADDR	0x400FE79C

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*SCGCEMAC_Set_fpt)(SCGCEMAC_e);

typedef void(*SCGCEMAC_Clear_fpt)(SCGCEMAC_e);

typedef int(*SCGCEMAC_Read_fpt)(SCGCEMAC_e);

typedef void(*SCGCEMAC_Write_fpt)(SCGCEMAC_e, int);

// Structure Declaration
struct SYSCTL_SCGCEMAC_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	SCGCEMAC_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 SCGCEMAC_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	SCGCEMAC_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	SCGCEMAC_Write_fpt	write;

};

typedef struct SYSCTL_SCGCEMAC_obj SYSCTL_SCGCEMAC_t;

// Initializer
SYSCTL_SCGCEMAC_t init_SYSCTL_SCGCEMAC(void);


#endif // _SCGCEMAC_h_

