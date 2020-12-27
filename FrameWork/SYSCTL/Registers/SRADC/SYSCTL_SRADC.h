/**********************************
* \file : SRADC.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SRADC_h_
#define _SRADC_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SRADC_enums.h" 

// Base Address for this Register
#define SYSCTL_SRADC_BASE_ADDR	0x400FE538

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*SRADC_Set_fpt)(SRADC_e);

typedef void(*SRADC_Clear_fpt)(SRADC_e);

typedef int(*SRADC_Read_fpt)(SRADC_e);

typedef void(*SRADC_Write_fpt)(SRADC_e, int);

// Structure Declaration
struct SYSCTL_SRADC_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	SRADC_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 SRADC_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	SRADC_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	SRADC_Write_fpt	write;

};

typedef struct SYSCTL_SRADC_obj SYSCTL_SRADC_t;

// Initializer
SYSCTL_SRADC_t init_SYSCTL_SRADC(void);


#endif // _SRADC_h_

