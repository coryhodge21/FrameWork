/**********************************
* \file : DCGCOWIRE.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DCGCOWIRE_h_
#define _DCGCOWIRE_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DCGCOWIRE_enums.h" 

// Base Address for this Register
#define SYSCTL_DCGCOWIRE_BASE_ADDR	0x400FE898

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*DCGCOWIRE_Set_fpt)(DCGCOWIRE_e);

typedef void(*DCGCOWIRE_Clear_fpt)(DCGCOWIRE_e);

typedef int(*DCGCOWIRE_Read_fpt)(DCGCOWIRE_e);

typedef void(*DCGCOWIRE_Write_fpt)(DCGCOWIRE_e, int);

// Structure Declaration
struct SYSCTL_DCGCOWIRE_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	DCGCOWIRE_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 DCGCOWIRE_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	DCGCOWIRE_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	DCGCOWIRE_Write_fpt	write;

};

typedef struct SYSCTL_DCGCOWIRE_obj SYSCTL_DCGCOWIRE_t;

// Initializer
SYSCTL_DCGCOWIRE_t init_SYSCTL_DCGCOWIRE(void);


#endif // _DCGCOWIRE_h_

