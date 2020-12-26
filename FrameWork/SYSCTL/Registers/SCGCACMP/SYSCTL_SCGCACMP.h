/**********************************
* \file : SCGCACMP.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SCGCACMP_h_
#define _SCGCACMP_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SCGCACMP_enums.h" 

// Base Address for this Register
#define SYSCTL_SCGCACMP_BASE_ADDR	0x400FE73C

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*SCGCACMP_Set_fpt)(SCGCACMP_e);

typedef void(*SCGCACMP_Clear_fpt)(SCGCACMP_e);

typedef int(*SCGCACMP_Read_fpt)(SCGCACMP_e);

typedef void(*SCGCACMP_Write_fpt)(SCGCACMP_e, int);

// Structure Declaration
struct SYSCTL_SCGCACMP_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	SCGCACMP_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 SCGCACMP_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	SCGCACMP_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	SCGCACMP_Write_fpt	write;

};

typedef struct SYSCTL_SCGCACMP_obj SYSCTL_SCGCACMP_t;

// Initializer
SYSCTL_SCGCACMP_t init_SYSCTL_SCGCACMP(void);


#endif // _SCGCACMP_h_

