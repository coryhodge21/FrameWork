/**********************************
* \file : RESBEHAVCTL.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RESBEHAVCTL_h_
#define _RESBEHAVCTL_h_

//! \brief Enumerations for this Register
#include "SYSCTL_RESBEHAVCTL_enums.h" 

// Base Address for this Register
#define SYSCTL_RESBEHAVCTL_BASE_ADDR	0x400FE1D8

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*RESBEHAVCTL_Set_fpt)(RESBEHAVCTL_e);

typedef void(*RESBEHAVCTL_Clear_fpt)(RESBEHAVCTL_e);

typedef int(*RESBEHAVCTL_Read_fpt)(RESBEHAVCTL_e);

typedef void(*RESBEHAVCTL_Write_fpt)(RESBEHAVCTL_e, int);

// Structure Declaration
struct SYSCTL_RESBEHAVCTL_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	RESBEHAVCTL_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 RESBEHAVCTL_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	RESBEHAVCTL_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	RESBEHAVCTL_Write_fpt	write;

};

typedef struct SYSCTL_RESBEHAVCTL_obj SYSCTL_RESBEHAVCTL_t;

// Initializer
SYSCTL_RESBEHAVCTL_t init_SYSCTL_RESBEHAVCTL(void);


#endif // _RESBEHAVCTL_h_

