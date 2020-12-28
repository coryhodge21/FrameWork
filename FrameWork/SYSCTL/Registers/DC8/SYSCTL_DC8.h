/**********************************
* \file : DC8.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DC8_h_
#define _DC8_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DC8_enums.h" 

// Base Address for this Register
#define SYSCTL_DC8_BASE_ADDR	0x400FE02C

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*DC8_Set_fpt)(DC8_e);

typedef void(*DC8_Clear_fpt)(DC8_e);

typedef int(*DC8_Read_fpt)(DC8_e);

typedef void(*DC8_Write_fpt)(DC8_e, int);

// Structure Declaration
struct SYSCTL_DC8_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	DC8_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 DC8_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	DC8_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	DC8_Write_fpt	write;

};

typedef struct SYSCTL_DC8_obj SYSCTL_DC8_t;

// Initializer
SYSCTL_DC8_t init_SYSCTL_DC8(void);


#endif // _DC8_h_

