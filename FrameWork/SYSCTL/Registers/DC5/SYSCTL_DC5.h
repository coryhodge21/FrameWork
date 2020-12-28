/**********************************
* \file : DC5.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DC5_h_
#define _DC5_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DC5_enums.h" 

// Base Address for this Register
#define SYSCTL_DC5_BASE_ADDR	0x400FE020

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*DC5_Set_fpt)(DC5_e);

typedef void(*DC5_Clear_fpt)(DC5_e);

typedef int(*DC5_Read_fpt)(DC5_e);

typedef void(*DC5_Write_fpt)(DC5_e, int);

// Structure Declaration
struct SYSCTL_DC5_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	DC5_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 DC5_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	DC5_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	DC5_Write_fpt	write;

};

typedef struct SYSCTL_DC5_obj SYSCTL_DC5_t;

// Initializer
SYSCTL_DC5_t init_SYSCTL_DC5(void);


#endif // _DC5_h_

