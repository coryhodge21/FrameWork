/**********************************
* \file : SCGCDMA.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SCGCDMA_h_
#define _SCGCDMA_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SCGCDMA_enums.h" 

// Base Address for this Register
#define SYSCTL_SCGCDMA_BASE_ADDR	0x400FE70C

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*SCGCDMA_Set_fpt)(SCGCDMA_e);

typedef void(*SCGCDMA_Clear_fpt)(SCGCDMA_e);

typedef int(*SCGCDMA_Read_fpt)(SCGCDMA_e);

typedef void(*SCGCDMA_Write_fpt)(SCGCDMA_e, int);

// Structure Declaration
struct SYSCTL_SCGCDMA_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	SCGCDMA_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 SCGCDMA_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	SCGCDMA_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	SCGCDMA_Write_fpt	write;

};

typedef struct SYSCTL_SCGCDMA_obj SYSCTL_SCGCDMA_t;

// Initializer
SYSCTL_SCGCDMA_t init_SYSCTL_SCGCDMA(void);


#endif // _SCGCDMA_h_

