/**********************************
* \file : DC6.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DC6_h_
#define _DC6_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DC6_enums.h" 

// Base Address for this Register
#define SYSCTL_DC6_BASE_ADDR	0x400FE024

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*DC6_Set_fpt)(DC6_e);

typedef void(*DC6_Clear_fpt)(DC6_e);

typedef int(*DC6_Read_fpt)(DC6_e);

typedef void(*DC6_Write_fpt)(DC6_e, int);

// Structure Declaration
struct SYSCTL_DC6_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	DC6_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 DC6_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	DC6_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	DC6_Write_fpt	write;

};

typedef struct SYSCTL_DC6_obj SYSCTL_DC6_t;

// Initializer
SYSCTL_DC6_t init_SYSCTL_DC6(void);


#endif // _DC6_h_

