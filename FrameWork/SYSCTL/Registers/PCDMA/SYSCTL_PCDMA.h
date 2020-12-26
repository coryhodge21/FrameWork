/**********************************
* \file : PCDMA.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PCDMA_h_
#define _PCDMA_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PCDMA_enums.h" 

// Base Address for this Register
#define SYSCTL_PCDMA_BASE_ADDR	0x400FE90C

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PCDMA_Set_fpt)(PCDMA_e);

typedef void(*PCDMA_Clear_fpt)(PCDMA_e);

typedef int(*PCDMA_Read_fpt)(PCDMA_e);

typedef void(*PCDMA_Write_fpt)(PCDMA_e, int);

// Structure Declaration
struct SYSCTL_PCDMA_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PCDMA_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PCDMA_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PCDMA_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PCDMA_Write_fpt	write;

};

typedef struct SYSCTL_PCDMA_obj SYSCTL_PCDMA_t;

// Initializer
SYSCTL_PCDMA_t init_SYSCTL_PCDMA(void);


#endif // _PCDMA_h_

