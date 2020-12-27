/**********************************
* \file : DCGCDMA.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DCGCDMA_h_
#define _DCGCDMA_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DCGCDMA_enums.h" 

// Base Address for this Register
#define SYSCTL_DCGCDMA_BASE_ADDR	0x400FE80C

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*DCGCDMA_Set_fpt)(DCGCDMA_e);

typedef void(*DCGCDMA_Clear_fpt)(DCGCDMA_e);

typedef int(*DCGCDMA_Read_fpt)(DCGCDMA_e);

typedef void(*DCGCDMA_Write_fpt)(DCGCDMA_e, int);

// Structure Declaration
struct SYSCTL_DCGCDMA_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	DCGCDMA_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 DCGCDMA_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	DCGCDMA_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	DCGCDMA_Write_fpt	write;

};

typedef struct SYSCTL_DCGCDMA_obj SYSCTL_DCGCDMA_t;

// Initializer
SYSCTL_DCGCDMA_t init_SYSCTL_DCGCDMA(void);


#endif // _DCGCDMA_h_

