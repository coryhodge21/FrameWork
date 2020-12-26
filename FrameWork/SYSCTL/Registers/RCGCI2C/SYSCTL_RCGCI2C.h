/**********************************
* \file : RCGCI2C.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RCGCI2C_h_
#define _RCGCI2C_h_

//! \brief Enumerations for this Register
#include "SYSCTL_RCGCI2C_enums.h" 

// Base Address for this Register
#define SYSCTL_RCGCI2C_BASE_ADDR	0x400FE620

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*RCGCI2C_Set_fpt)(RCGCI2C_e);

typedef void(*RCGCI2C_Clear_fpt)(RCGCI2C_e);

typedef int(*RCGCI2C_Read_fpt)(RCGCI2C_e);

typedef void(*RCGCI2C_Write_fpt)(RCGCI2C_e, int);

// Structure Declaration
struct SYSCTL_RCGCI2C_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	RCGCI2C_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 RCGCI2C_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	RCGCI2C_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	RCGCI2C_Write_fpt	write;

};

typedef struct SYSCTL_RCGCI2C_obj SYSCTL_RCGCI2C_t;

// Initializer
SYSCTL_RCGCI2C_t init_SYSCTL_RCGCI2C(void);


#endif // _RCGCI2C_h_

