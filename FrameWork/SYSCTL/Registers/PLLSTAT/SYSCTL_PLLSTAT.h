/**********************************
* \file : PLLSTAT.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PLLSTAT_h_
#define _PLLSTAT_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PLLSTAT_enums.h" 

// Base Address for this Register
#define SYSCTL_PLLSTAT_BASE_ADDR	0x400FE168

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PLLSTAT_Set_fpt)(PLLSTAT_e);

typedef void(*PLLSTAT_Clear_fpt)(PLLSTAT_e);

typedef int(*PLLSTAT_Read_fpt)(PLLSTAT_e);

typedef void(*PLLSTAT_Write_fpt)(PLLSTAT_e, int);

// Structure Declaration
struct SYSCTL_PLLSTAT_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PLLSTAT_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PLLSTAT_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PLLSTAT_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PLLSTAT_Write_fpt	write;

};

typedef struct SYSCTL_PLLSTAT_obj SYSCTL_PLLSTAT_t;

// Initializer
SYSCTL_PLLSTAT_t init_SYSCTL_PLLSTAT(void);


#endif // _PLLSTAT_h_

