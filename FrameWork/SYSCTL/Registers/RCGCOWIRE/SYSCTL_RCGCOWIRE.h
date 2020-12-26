/**********************************
* \file : RCGCOWIRE.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RCGCOWIRE_h_
#define _RCGCOWIRE_h_

//! \brief Enumerations for this Register
#include "SYSCTL_RCGCOWIRE_enums.h" 

// Base Address for this Register
#define SYSCTL_RCGCOWIRE_BASE_ADDR	0x400FE698

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*RCGCOWIRE_Set_fpt)(RCGCOWIRE_e);

typedef void(*RCGCOWIRE_Clear_fpt)(RCGCOWIRE_e);

typedef int(*RCGCOWIRE_Read_fpt)(RCGCOWIRE_e);

typedef void(*RCGCOWIRE_Write_fpt)(RCGCOWIRE_e, int);

// Structure Declaration
struct SYSCTL_RCGCOWIRE_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	RCGCOWIRE_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 RCGCOWIRE_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	RCGCOWIRE_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	RCGCOWIRE_Write_fpt	write;

};

typedef struct SYSCTL_RCGCOWIRE_obj SYSCTL_RCGCOWIRE_t;

// Initializer
SYSCTL_RCGCOWIRE_t init_SYSCTL_RCGCOWIRE(void);


#endif // _RCGCOWIRE_h_

