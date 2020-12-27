/**********************************
* \file : DCGCADC.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DCGCADC_h_
#define _DCGCADC_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DCGCADC_enums.h" 

// Base Address for this Register
#define SYSCTL_DCGCADC_BASE_ADDR	0x400FE838

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*DCGCADC_Set_fpt)(DCGCADC_e);

typedef void(*DCGCADC_Clear_fpt)(DCGCADC_e);

typedef int(*DCGCADC_Read_fpt)(DCGCADC_e);

typedef void(*DCGCADC_Write_fpt)(DCGCADC_e, int);

// Structure Declaration
struct SYSCTL_DCGCADC_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	DCGCADC_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 DCGCADC_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	DCGCADC_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	DCGCADC_Write_fpt	write;

};

typedef struct SYSCTL_DCGCADC_obj SYSCTL_DCGCADC_t;

// Initializer
SYSCTL_DCGCADC_t init_SYSCTL_DCGCADC(void);


#endif // _DCGCADC_h_

