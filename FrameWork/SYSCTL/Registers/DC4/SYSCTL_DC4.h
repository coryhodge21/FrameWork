/**********************************
* \file : DC4.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DC4_h_
#define _DC4_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DC4_enums.h" 

// Base Address for this Register
#define SYSCTL_DC4_BASE_ADDR	0x400FE01C

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*DC4_Set_fpt)(DC4_e);

typedef void(*DC4_Clear_fpt)(DC4_e);

typedef int(*DC4_Read_fpt)(DC4_e);

typedef void(*DC4_Write_fpt)(DC4_e, int);

// Structure Declaration
struct SYSCTL_DC4_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	DC4_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 DC4_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	DC4_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	DC4_Write_fpt	write;

};

typedef struct SYSCTL_DC4_obj SYSCTL_DC4_t;

// Initializer
SYSCTL_DC4_t init_SYSCTL_DC4(void);


#endif // _DC4_h_

