/**********************************
* \file : DC0.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DC0_h_
#define _DC0_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DC0_enums.h" 

// Base Address for this Register
#define SYSCTL_DC0_BASE_ADDR	0x400FE008

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*DC0_Set_fpt)(DC0_e);

typedef void(*DC0_Clear_fpt)(DC0_e);

typedef int(*DC0_Read_fpt)(DC0_e);

typedef void(*DC0_Write_fpt)(DC0_e, int);

// Structure Declaration
struct SYSCTL_DC0_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	DC0_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 DC0_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	DC0_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	DC0_Write_fpt	write;

};

typedef struct SYSCTL_DC0_obj SYSCTL_DC0_t;

// Initializer
SYSCTL_DC0_t init_SYSCTL_DC0(void);


#endif // _DC0_h_

