/**********************************
* \file : PPADC.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PPADC_h_
#define _PPADC_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PPADC_enums.h" 

// Base Address for this Register
#define SYSCTL_PPADC_BASE_ADDR	0x400FE338

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PPADC_Set_fpt)(PPADC_e);

typedef void(*PPADC_Clear_fpt)(PPADC_e);

typedef int(*PPADC_Read_fpt)(PPADC_e);

typedef void(*PPADC_Write_fpt)(PPADC_e, int);

// Structure Declaration
struct SYSCTL_PPADC_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PPADC_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PPADC_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PPADC_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PPADC_Write_fpt	write;

};

typedef struct SYSCTL_PPADC_obj SYSCTL_PPADC_t;

// Initializer
SYSCTL_PPADC_t init_SYSCTL_PPADC(void);


#endif // _PPADC_h_

