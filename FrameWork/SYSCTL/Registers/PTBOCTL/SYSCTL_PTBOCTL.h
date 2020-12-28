/**********************************
* \file : PTBOCTL.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PTBOCTL_h_
#define _PTBOCTL_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PTBOCTL_enums.h" 

// Base Address for this Register
#define SYSCTL_PTBOCTL_BASE_ADDR	0x400FE038

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PTBOCTL_Set_fpt)(PTBOCTL_e);

typedef void(*PTBOCTL_Clear_fpt)(PTBOCTL_e);

typedef int(*PTBOCTL_Read_fpt)(PTBOCTL_e);

typedef void(*PTBOCTL_Write_fpt)(PTBOCTL_e, int);

// Structure Declaration
struct SYSCTL_PTBOCTL_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PTBOCTL_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PTBOCTL_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PTBOCTL_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PTBOCTL_Write_fpt	write;

};

typedef struct SYSCTL_PTBOCTL_obj SYSCTL_PTBOCTL_t;

// Initializer
SYSCTL_PTBOCTL_t init_SYSCTL_PTBOCTL(void);


#endif // _PTBOCTL_h_

