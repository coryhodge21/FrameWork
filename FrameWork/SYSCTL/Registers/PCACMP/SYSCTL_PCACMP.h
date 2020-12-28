/**********************************
* \file : PCACMP.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PCACMP_h_
#define _PCACMP_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PCACMP_enums.h" 

// Base Address for this Register
#define SYSCTL_PCACMP_BASE_ADDR	0x400FE93C

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PCACMP_Set_fpt)(PCACMP_e);

typedef void(*PCACMP_Clear_fpt)(PCACMP_e);

typedef int(*PCACMP_Read_fpt)(PCACMP_e);

typedef void(*PCACMP_Write_fpt)(PCACMP_e, int);

// Structure Declaration
struct SYSCTL_PCACMP_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PCACMP_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PCACMP_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PCACMP_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PCACMP_Write_fpt	write;

};

typedef struct SYSCTL_PCACMP_obj SYSCTL_PCACMP_t;

// Initializer
SYSCTL_PCACMP_t init_SYSCTL_PCACMP(void);


#endif // _PCACMP_h_

