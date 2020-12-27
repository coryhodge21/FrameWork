/**********************************
* \file : DC9.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DC9_h_
#define _DC9_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DC9_enums.h" 

// Base Address for this Register
#define SYSCTL_DC9_BASE_ADDR	0x400FE190

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*DC9_Set_fpt)(DC9_e);

typedef void(*DC9_Clear_fpt)(DC9_e);

typedef int(*DC9_Read_fpt)(DC9_e);

typedef void(*DC9_Write_fpt)(DC9_e, int);

// Structure Declaration
struct SYSCTL_DC9_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	DC9_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 DC9_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	DC9_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	DC9_Write_fpt	write;

};

typedef struct SYSCTL_DC9_obj SYSCTL_DC9_t;

// Initializer
SYSCTL_DC9_t init_SYSCTL_DC9(void);


#endif // _DC9_h_

