/**********************************
* \file : SCGCI2C.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SCGCI2C_h_
#define _SCGCI2C_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SCGCI2C_enums.h" 

// Base Address for this Register
#define SYSCTL_SCGCI2C_BASE_ADDR	0x400FE720

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*SCGCI2C_Set_fpt)(SCGCI2C_e);

typedef void(*SCGCI2C_Clear_fpt)(SCGCI2C_e);

typedef int(*SCGCI2C_Read_fpt)(SCGCI2C_e);

typedef void(*SCGCI2C_Write_fpt)(SCGCI2C_e, int);

// Structure Declaration
struct SYSCTL_SCGCI2C_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	SCGCI2C_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 SCGCI2C_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	SCGCI2C_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	SCGCI2C_Write_fpt	write;

};

typedef struct SYSCTL_SCGCI2C_obj SYSCTL_SCGCI2C_t;

// Initializer
SYSCTL_SCGCI2C_t init_SYSCTL_SCGCI2C(void);


#endif // _SCGCI2C_h_

