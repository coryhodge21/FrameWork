/**********************************
* \file : MISC.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _MISC_h_
#define _MISC_h_

//! \brief Enumerations for this Register
#include "SYSCTL_MISC_enums.h" 

// Base Address for this Register
#define SYSCTL_MISC_BASE_ADDR	0x400FE058

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*MISC_Set_fpt)(MISC_e);

typedef void(*MISC_Clear_fpt)(MISC_e);

typedef int(*MISC_Read_fpt)(MISC_e);

typedef void(*MISC_Write_fpt)(MISC_e, int);

// Structure Declaration
struct SYSCTL_MISC_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	MISC_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 MISC_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	MISC_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	MISC_Write_fpt	write;

};

typedef struct SYSCTL_MISC_obj SYSCTL_MISC_t;

// Initializer
SYSCTL_MISC_t init_SYSCTL_MISC(void);


#endif // _MISC_h_

