/**********************************
* \file : RCGCDMA.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RCGCDMA_h_
#define _RCGCDMA_h_

//! \brief Enumerations for this Register
#include "SYSCTL_RCGCDMA_enums.h" 

// Base Address for this Register
#define SYSCTL_RCGCDMA_BASE_ADDR	0x400FE60C

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*RCGCDMA_Set_fpt)(RCGCDMA_e);

typedef void(*RCGCDMA_Clear_fpt)(RCGCDMA_e);

typedef int(*RCGCDMA_Read_fpt)(RCGCDMA_e);

typedef void(*RCGCDMA_Write_fpt)(RCGCDMA_e, int);

// Structure Declaration
struct SYSCTL_RCGCDMA_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	RCGCDMA_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 RCGCDMA_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	RCGCDMA_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	RCGCDMA_Write_fpt	write;

};

typedef struct SYSCTL_RCGCDMA_obj SYSCTL_RCGCDMA_t;

// Initializer
SYSCTL_RCGCDMA_t init_SYSCTL_RCGCDMA(void);


#endif // _RCGCDMA_h_

