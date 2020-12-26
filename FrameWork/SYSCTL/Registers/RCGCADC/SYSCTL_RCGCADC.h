/**********************************
* \file : RCGCADC.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RCGCADC_h_
#define _RCGCADC_h_

//! \brief Enumerations for this Register
#include "SYSCTL_RCGCADC_enums.h" 

// Base Address for this Register
#define SYSCTL_RCGCADC_BASE_ADDR	0x400FE638

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*RCGCADC_Set_fpt)(RCGCADC_e);

typedef void(*RCGCADC_Clear_fpt)(RCGCADC_e);

typedef int(*RCGCADC_Read_fpt)(RCGCADC_e);

typedef void(*RCGCADC_Write_fpt)(RCGCADC_e, int);

// Structure Declaration
struct SYSCTL_RCGCADC_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	RCGCADC_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 RCGCADC_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	RCGCADC_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	RCGCADC_Write_fpt	write;

};

typedef struct SYSCTL_RCGCADC_obj SYSCTL_RCGCADC_t;

// Initializer
SYSCTL_RCGCADC_t init_SYSCTL_RCGCADC(void);


#endif // _RCGCADC_h_

