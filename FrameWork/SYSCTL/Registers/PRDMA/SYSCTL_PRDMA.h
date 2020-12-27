/**********************************
* \file : PRDMA.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PRDMA_h_
#define _PRDMA_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PRDMA_enums.h" 

// Base Address for this Register
#define SYSCTL_PRDMA_BASE_ADDR	0x400FEA0C

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PRDMA_Set_fpt)(PRDMA_e);

typedef void(*PRDMA_Clear_fpt)(PRDMA_e);

typedef int(*PRDMA_Read_fpt)(PRDMA_e);

typedef void(*PRDMA_Write_fpt)(PRDMA_e, int);

// Structure Declaration
struct SYSCTL_PRDMA_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PRDMA_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PRDMA_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PRDMA_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PRDMA_Write_fpt	write;

};

typedef struct SYSCTL_PRDMA_obj SYSCTL_PRDMA_t;

// Initializer
SYSCTL_PRDMA_t init_SYSCTL_PRDMA(void);


#endif // _PRDMA_h_

