/**********************************
* \file : DC2.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DC2_h_
#define _DC2_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DC2_enums.h" 

// Base Address for this Register
#define SYSCTL_DC2_BASE_ADDR	0x400FE014

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*DC2_Set_fpt)(DC2_e);

typedef void(*DC2_Clear_fpt)(DC2_e);

typedef int(*DC2_Read_fpt)(DC2_e);

typedef void(*DC2_Write_fpt)(DC2_e, int);

// Structure Declaration
struct SYSCTL_DC2_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	DC2_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 DC2_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	DC2_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	DC2_Write_fpt	write;

};

typedef struct SYSCTL_DC2_obj SYSCTL_DC2_t;

// Initializer
SYSCTL_DC2_t init_SYSCTL_DC2(void);


#endif // _DC2_h_

