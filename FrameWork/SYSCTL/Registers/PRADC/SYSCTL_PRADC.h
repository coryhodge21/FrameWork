/**********************************
* \file : PRADC.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PRADC_h_
#define _PRADC_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PRADC_enums.h" 

// Base Address for this Register
#define SYSCTL_PRADC_BASE_ADDR	0x400FEA38

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PRADC_Set_fpt)(PRADC_e);

typedef void(*PRADC_Clear_fpt)(PRADC_e);

typedef int(*PRADC_Read_fpt)(PRADC_e);

typedef void(*PRADC_Write_fpt)(PRADC_e, int);

// Structure Declaration
struct SYSCTL_PRADC_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PRADC_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PRADC_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PRADC_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PRADC_Write_fpt	write;

};

typedef struct SYSCTL_PRADC_obj SYSCTL_PRADC_t;

// Initializer
SYSCTL_PRADC_t init_SYSCTL_PRADC(void);


#endif // _PRADC_h_

