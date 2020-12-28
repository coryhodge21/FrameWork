/**********************************
* \file : MOSCCTL.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _MOSCCTL_h_
#define _MOSCCTL_h_

//! \brief Enumerations for this Register
#include "SYSCTL_MOSCCTL_enums.h" 

// Base Address for this Register
#define SYSCTL_MOSCCTL_BASE_ADDR	0x400FE07C

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*MOSCCTL_Set_fpt)(MOSCCTL_e);

typedef void(*MOSCCTL_Clear_fpt)(MOSCCTL_e);

typedef int(*MOSCCTL_Read_fpt)(MOSCCTL_e);

typedef void(*MOSCCTL_Write_fpt)(MOSCCTL_e, int);

// Structure Declaration
struct SYSCTL_MOSCCTL_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	MOSCCTL_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 MOSCCTL_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	MOSCCTL_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	MOSCCTL_Write_fpt	write;

};

typedef struct SYSCTL_MOSCCTL_obj SYSCTL_MOSCCTL_t;

// Initializer
SYSCTL_MOSCCTL_t init_SYSCTL_MOSCCTL(void);


#endif // _MOSCCTL_h_

