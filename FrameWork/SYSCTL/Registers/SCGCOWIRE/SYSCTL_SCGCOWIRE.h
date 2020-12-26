/**********************************
* \file : SCGCOWIRE.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SCGCOWIRE_h_
#define _SCGCOWIRE_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SCGCOWIRE_enums.h" 

// Base Address for this Register
#define SYSCTL_SCGCOWIRE_BASE_ADDR	0x400FE798

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*SCGCOWIRE_Set_fpt)(SCGCOWIRE_e);

typedef void(*SCGCOWIRE_Clear_fpt)(SCGCOWIRE_e);

typedef int(*SCGCOWIRE_Read_fpt)(SCGCOWIRE_e);

typedef void(*SCGCOWIRE_Write_fpt)(SCGCOWIRE_e, int);

// Structure Declaration
struct SYSCTL_SCGCOWIRE_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	SCGCOWIRE_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 SCGCOWIRE_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	SCGCOWIRE_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	SCGCOWIRE_Write_fpt	write;

};

typedef struct SYSCTL_SCGCOWIRE_obj SYSCTL_SCGCOWIRE_t;

// Initializer
SYSCTL_SCGCOWIRE_t init_SYSCTL_SCGCOWIRE(void);


#endif // _SCGCOWIRE_h_

