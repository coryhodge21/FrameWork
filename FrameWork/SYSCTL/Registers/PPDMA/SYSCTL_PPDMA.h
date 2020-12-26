/**********************************
* \file : PPDMA.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PPDMA_h_
#define _PPDMA_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PPDMA_enums.h" 

// Base Address for this Register
#define SYSCTL_PPDMA_BASE_ADDR	0x400FE30C

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PPDMA_Set_fpt)(PPDMA_e);

typedef void(*PPDMA_Clear_fpt)(PPDMA_e);

typedef int(*PPDMA_Read_fpt)(PPDMA_e);

typedef void(*PPDMA_Write_fpt)(PPDMA_e, int);

// Structure Declaration
struct SYSCTL_PPDMA_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PPDMA_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PPDMA_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PPDMA_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PPDMA_Write_fpt	write;

};

typedef struct SYSCTL_PPDMA_obj SYSCTL_PPDMA_t;

// Initializer
SYSCTL_PPDMA_t init_SYSCTL_PPDMA(void);


#endif // _PPDMA_h_

