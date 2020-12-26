/**********************************
* \file : DC7.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DC7_h_
#define _DC7_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DC7_enums.h" 

// Base Address for this Register
#define SYSCTL_DC7_BASE_ADDR	0x400FE028

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*DC7_Set_fpt)(DC7_e);

typedef void(*DC7_Clear_fpt)(DC7_e);

typedef int(*DC7_Read_fpt)(DC7_e);

typedef void(*DC7_Write_fpt)(DC7_e, int);

// Structure Declaration
struct SYSCTL_DC7_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	DC7_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 DC7_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	DC7_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	DC7_Write_fpt	write;

};

typedef struct SYSCTL_DC7_obj SYSCTL_DC7_t;

// Initializer
SYSCTL_DC7_t init_SYSCTL_DC7(void);


#endif // _DC7_h_

