/**********************************
* \file : DC1.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DC1_h_
#define _DC1_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DC1_enums.h" 

// Base Address for this Register
#define SYSCTL_DC1_BASE_ADDR	0x400FE010

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*DC1_Set_fpt)(DC1_e);

typedef void(*DC1_Clear_fpt)(DC1_e);

typedef int(*DC1_Read_fpt)(DC1_e);

typedef void(*DC1_Write_fpt)(DC1_e, int);

// Structure Declaration
struct SYSCTL_DC1_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	DC1_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 DC1_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	DC1_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	DC1_Write_fpt	write;

};

typedef struct SYSCTL_DC1_obj SYSCTL_DC1_t;

// Initializer
SYSCTL_DC1_t init_SYSCTL_DC1(void);


#endif // _DC1_h_

