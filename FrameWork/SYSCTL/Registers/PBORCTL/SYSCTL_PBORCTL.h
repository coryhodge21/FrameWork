/**********************************
* \file : PBORCTL.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PBORCTL_h_
#define _PBORCTL_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PBORCTL_enums.h" 

// Base Address for this Register
#define SYSCTL_PBORCTL_BASE_ADDR	0x400FE030

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PBORCTL_Set_fpt)(PBORCTL_e);

typedef void(*PBORCTL_Clear_fpt)(PBORCTL_e);

typedef int(*PBORCTL_Read_fpt)(PBORCTL_e);

typedef void(*PBORCTL_Write_fpt)(PBORCTL_e, int);

// Structure Declaration
struct SYSCTL_PBORCTL_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PBORCTL_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PBORCTL_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PBORCTL_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PBORCTL_Write_fpt	write;

};

typedef struct SYSCTL_PBORCTL_obj SYSCTL_PBORCTL_t;

// Initializer
SYSCTL_PBORCTL_t init_SYSCTL_PBORCTL(void);


#endif // _PBORCTL_h_

