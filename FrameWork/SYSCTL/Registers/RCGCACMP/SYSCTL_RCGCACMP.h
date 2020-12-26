/**********************************
* \file : RCGCACMP.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RCGCACMP_h_
#define _RCGCACMP_h_

//! \brief Enumerations for this Register
#include "SYSCTL_RCGCACMP_enums.h" 

// Base Address for this Register
#define SYSCTL_RCGCACMP_BASE_ADDR	0x400FE63C

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*RCGCACMP_Set_fpt)(RCGCACMP_e);

typedef void(*RCGCACMP_Clear_fpt)(RCGCACMP_e);

typedef int(*RCGCACMP_Read_fpt)(RCGCACMP_e);

typedef void(*RCGCACMP_Write_fpt)(RCGCACMP_e, int);

// Structure Declaration
struct SYSCTL_RCGCACMP_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	RCGCACMP_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 RCGCACMP_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	RCGCACMP_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	RCGCACMP_Write_fpt	write;

};

typedef struct SYSCTL_RCGCACMP_obj SYSCTL_RCGCACMP_t;

// Initializer
SYSCTL_RCGCACMP_t init_SYSCTL_RCGCACMP(void);


#endif // _RCGCACMP_h_

