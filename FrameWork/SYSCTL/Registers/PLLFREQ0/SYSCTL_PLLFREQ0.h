/**********************************
* \file : PLLFREQ0.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PLLFREQ0_h_
#define _PLLFREQ0_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PLLFREQ0_enums.h" 

// Base Address for this Register
#define SYSCTL_PLLFREQ0_BASE_ADDR	0x400FE160

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PLLFREQ0_Set_fpt)(PLLFREQ0_e);

typedef void(*PLLFREQ0_Clear_fpt)(PLLFREQ0_e);

typedef int(*PLLFREQ0_Read_fpt)(PLLFREQ0_e);

typedef void(*PLLFREQ0_Write_fpt)(PLLFREQ0_e, int);

// Structure Declaration
struct SYSCTL_PLLFREQ0_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PLLFREQ0_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PLLFREQ0_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PLLFREQ0_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PLLFREQ0_Write_fpt	write;

};

typedef struct SYSCTL_PLLFREQ0_obj SYSCTL_PLLFREQ0_t;

// Initializer
SYSCTL_PLLFREQ0_t init_SYSCTL_PLLFREQ0(void);


#endif // _PLLFREQ0_h_

