/**********************************
* \file : SCGCADC.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SCGCADC_h_
#define _SCGCADC_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SCGCADC_enums.h" 

// Base Address for this Register
#define SYSCTL_SCGCADC_BASE_ADDR	0x400FE738

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*SCGCADC_Set_fpt)(SCGCADC_e);

typedef void(*SCGCADC_Clear_fpt)(SCGCADC_e);

typedef int(*SCGCADC_Read_fpt)(SCGCADC_e);

typedef void(*SCGCADC_Write_fpt)(SCGCADC_e, int);

// Structure Declaration
struct SYSCTL_SCGCADC_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	SCGCADC_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 SCGCADC_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	SCGCADC_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	SCGCADC_Write_fpt	write;

};

typedef struct SYSCTL_SCGCADC_obj SYSCTL_SCGCADC_t;

// Initializer
SYSCTL_SCGCADC_t init_SYSCTL_SCGCADC(void);


#endif // _SCGCADC_h_

