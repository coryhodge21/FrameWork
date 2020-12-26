/**********************************
* \file : SYSPROP.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SYSPROP_h_
#define _SYSPROP_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SYSPROP_enums.h" 

// Base Address for this Register
#define SYSCTL_SYSPROP_BASE_ADDR	0x400FE14C

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*SYSPROP_Set_fpt)(SYSPROP_e);

typedef void(*SYSPROP_Clear_fpt)(SYSPROP_e);

typedef int(*SYSPROP_Read_fpt)(SYSPROP_e);

typedef void(*SYSPROP_Write_fpt)(SYSPROP_e, int);

// Structure Declaration
struct SYSCTL_SYSPROP_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	SYSPROP_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 SYSPROP_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	SYSPROP_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	SYSPROP_Write_fpt	write;

};

typedef struct SYSCTL_SYSPROP_obj SYSCTL_SYSPROP_t;

// Initializer
SYSCTL_SYSPROP_t init_SYSCTL_SYSPROP(void);


#endif // _SYSPROP_h_

