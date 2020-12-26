/**********************************
* \file : DCGCACMP.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DCGCACMP_h_
#define _DCGCACMP_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DCGCACMP_enums.h" 

// Base Address for this Register
#define SYSCTL_DCGCACMP_BASE_ADDR	0x400FE83C

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*DCGCACMP_Set_fpt)(DCGCACMP_e);

typedef void(*DCGCACMP_Clear_fpt)(DCGCACMP_e);

typedef int(*DCGCACMP_Read_fpt)(DCGCACMP_e);

typedef void(*DCGCACMP_Write_fpt)(DCGCACMP_e, int);

// Structure Declaration
struct SYSCTL_DCGCACMP_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	DCGCACMP_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 DCGCACMP_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	DCGCACMP_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	DCGCACMP_Write_fpt	write;

};

typedef struct SYSCTL_DCGCACMP_obj SYSCTL_DCGCACMP_t;

// Initializer
SYSCTL_DCGCACMP_t init_SYSCTL_DCGCACMP(void);


#endif // _DCGCACMP_h_

