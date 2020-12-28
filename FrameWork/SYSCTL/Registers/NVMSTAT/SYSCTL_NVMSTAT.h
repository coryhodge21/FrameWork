/**********************************
* \file : NVMSTAT.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _NVMSTAT_h_
#define _NVMSTAT_h_

//! \brief Enumerations for this Register
#include "SYSCTL_NVMSTAT_enums.h" 

// Base Address for this Register
#define SYSCTL_NVMSTAT_BASE_ADDR	0x400FE1A0

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*NVMSTAT_Set_fpt)(NVMSTAT_e);

typedef void(*NVMSTAT_Clear_fpt)(NVMSTAT_e);

typedef int(*NVMSTAT_Read_fpt)(NVMSTAT_e);

typedef void(*NVMSTAT_Write_fpt)(NVMSTAT_e, int);

// Structure Declaration
struct SYSCTL_NVMSTAT_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	NVMSTAT_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 NVMSTAT_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	NVMSTAT_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	NVMSTAT_Write_fpt	write;

};

typedef struct SYSCTL_NVMSTAT_obj SYSCTL_NVMSTAT_t;

// Initializer
SYSCTL_NVMSTAT_t init_SYSCTL_NVMSTAT(void);


#endif // _NVMSTAT_h_

