/**********************************
* \file : PPACMP.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PPACMP_h_
#define _PPACMP_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PPACMP_enums.h" 

// Base Address for this Register
#define SYSCTL_PPACMP_BASE_ADDR	0x400FE33C

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PPACMP_Set_fpt)(PPACMP_e);

typedef void(*PPACMP_Clear_fpt)(PPACMP_e);

typedef int(*PPACMP_Read_fpt)(PPACMP_e);

typedef void(*PPACMP_Write_fpt)(PPACMP_e, int);

// Structure Declaration
struct SYSCTL_PPACMP_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PPACMP_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PPACMP_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PPACMP_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PPACMP_Write_fpt	write;

};

typedef struct SYSCTL_PPACMP_obj SYSCTL_PPACMP_t;

// Initializer
SYSCTL_PPACMP_t init_SYSCTL_PPACMP(void);


#endif // _PPACMP_h_

