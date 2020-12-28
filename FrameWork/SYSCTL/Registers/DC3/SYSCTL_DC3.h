/**********************************
* \file : DC3.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DC3_h_
#define _DC3_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DC3_enums.h" 

// Base Address for this Register
#define SYSCTL_DC3_BASE_ADDR	0x400FE018

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*DC3_Set_fpt)(DC3_e);

typedef void(*DC3_Clear_fpt)(DC3_e);

typedef int(*DC3_Read_fpt)(DC3_e);

typedef void(*DC3_Write_fpt)(DC3_e, int);

// Structure Declaration
struct SYSCTL_DC3_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	DC3_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 DC3_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	DC3_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	DC3_Write_fpt	write;

};

typedef struct SYSCTL_DC3_obj SYSCTL_DC3_t;

// Initializer
SYSCTL_DC3_t init_SYSCTL_DC3(void);


#endif // _DC3_h_

