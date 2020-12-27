/**********************************
* \file : SRCR1.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SRCR1_h_
#define _SRCR1_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SRCR1_enums.h" 

// Base Address for this Register
#define SYSCTL_SRCR1_BASE_ADDR	0x400FE044

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*SRCR1_Set_fpt)(SRCR1_e);

typedef void(*SRCR1_Clear_fpt)(SRCR1_e);

typedef int(*SRCR1_Read_fpt)(SRCR1_e);

typedef void(*SRCR1_Write_fpt)(SRCR1_e, int);

// Structure Declaration
struct SYSCTL_SRCR1_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	SRCR1_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 SRCR1_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	SRCR1_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	SRCR1_Write_fpt	write;

};

typedef struct SYSCTL_SRCR1_obj SYSCTL_SRCR1_t;

// Initializer
SYSCTL_SRCR1_t init_SYSCTL_SRCR1(void);


#endif // _SRCR1_h_

