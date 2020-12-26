/**********************************
* \file : SRCR2.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SRCR2_h_
#define _SRCR2_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SRCR2_enums.h" 

// Base Address for this Register
#define SYSCTL_SRCR2_BASE_ADDR	0x400FE048

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*SRCR2_Set_fpt)(SRCR2_e);

typedef void(*SRCR2_Clear_fpt)(SRCR2_e);

typedef int(*SRCR2_Read_fpt)(SRCR2_e);

typedef void(*SRCR2_Write_fpt)(SRCR2_e, int);

// Structure Declaration
struct SYSCTL_SRCR2_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	SRCR2_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 SRCR2_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	SRCR2_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	SRCR2_Write_fpt	write;

};

typedef struct SYSCTL_SRCR2_obj SYSCTL_SRCR2_t;

// Initializer
SYSCTL_SRCR2_t init_SYSCTL_SRCR2(void);


#endif // _SRCR2_h_

