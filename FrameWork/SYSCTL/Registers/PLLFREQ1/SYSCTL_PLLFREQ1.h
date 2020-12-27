/**********************************
* \file : PLLFREQ1.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PLLFREQ1_h_
#define _PLLFREQ1_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PLLFREQ1_enums.h" 

// Base Address for this Register
#define SYSCTL_PLLFREQ1_BASE_ADDR	0x400FE164

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PLLFREQ1_Set_fpt)(PLLFREQ1_e);

typedef void(*PLLFREQ1_Clear_fpt)(PLLFREQ1_e);

typedef int(*PLLFREQ1_Read_fpt)(PLLFREQ1_e);

typedef void(*PLLFREQ1_Write_fpt)(PLLFREQ1_e, int);

// Structure Declaration
struct SYSCTL_PLLFREQ1_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PLLFREQ1_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PLLFREQ1_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PLLFREQ1_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PLLFREQ1_Write_fpt	write;

};

typedef struct SYSCTL_PLLFREQ1_obj SYSCTL_PLLFREQ1_t;

// Initializer
SYSCTL_PLLFREQ1_t init_SYSCTL_PLLFREQ1(void);


#endif // _PLLFREQ1_h_

