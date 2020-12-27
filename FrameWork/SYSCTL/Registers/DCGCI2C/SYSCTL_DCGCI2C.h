/**********************************
* \file : DCGCI2C.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DCGCI2C_h_
#define _DCGCI2C_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DCGCI2C_enums.h" 

// Base Address for this Register
#define SYSCTL_DCGCI2C_BASE_ADDR	0x400FE820

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*DCGCI2C_Set_fpt)(DCGCI2C_e);

typedef void(*DCGCI2C_Clear_fpt)(DCGCI2C_e);

typedef int(*DCGCI2C_Read_fpt)(DCGCI2C_e);

typedef void(*DCGCI2C_Write_fpt)(DCGCI2C_e, int);

// Structure Declaration
struct SYSCTL_DCGCI2C_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	DCGCI2C_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 DCGCI2C_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	DCGCI2C_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	DCGCI2C_Write_fpt	write;

};

typedef struct SYSCTL_DCGCI2C_obj SYSCTL_DCGCI2C_t;

// Initializer
SYSCTL_DCGCI2C_t init_SYSCTL_DCGCI2C(void);


#endif // _DCGCI2C_h_

