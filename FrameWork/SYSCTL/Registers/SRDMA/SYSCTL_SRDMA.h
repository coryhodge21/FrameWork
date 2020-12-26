/**********************************
* \file : SRDMA.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SRDMA_h_
#define _SRDMA_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SRDMA_enums.h" 

// Base Address for this Register
#define SYSCTL_SRDMA_BASE_ADDR	0x400FE50C

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*SRDMA_Set_fpt)(SRDMA_e);

typedef void(*SRDMA_Clear_fpt)(SRDMA_e);

typedef int(*SRDMA_Read_fpt)(SRDMA_e);

typedef void(*SRDMA_Write_fpt)(SRDMA_e, int);

// Structure Declaration
struct SYSCTL_SRDMA_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	SRDMA_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 SRDMA_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	SRDMA_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	SRDMA_Write_fpt	write;

};

typedef struct SYSCTL_SRDMA_obj SYSCTL_SRDMA_t;

// Initializer
SYSCTL_SRDMA_t init_SYSCTL_SRDMA(void);


#endif // _SRDMA_h_

