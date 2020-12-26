/**********************************
* \file : PCADC.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PCADC_h_
#define _PCADC_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PCADC_enums.h" 

// Base Address for this Register
#define SYSCTL_PCADC_BASE_ADDR	0x400FE938

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PCADC_Set_fpt)(PCADC_e);

typedef void(*PCADC_Clear_fpt)(PCADC_e);

typedef int(*PCADC_Read_fpt)(PCADC_e);

typedef void(*PCADC_Write_fpt)(PCADC_e, int);

// Structure Declaration
struct SYSCTL_PCADC_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PCADC_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PCADC_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PCADC_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PCADC_Write_fpt	write;

};

typedef struct SYSCTL_PCADC_obj SYSCTL_PCADC_t;

// Initializer
SYSCTL_PCADC_t init_SYSCTL_PCADC(void);


#endif // _PCADC_h_

