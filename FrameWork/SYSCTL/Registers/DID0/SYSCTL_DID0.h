/**********************************
* \file : DID0.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DID0_h_
#define _DID0_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DID0_enums.h" 

// Base Address for this Register
#define SYSCTL_DID0_BASE_ADDR	0x400FE000

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*DID0_Set_fpt)(DID0_e);

typedef void(*DID0_Clear_fpt)(DID0_e);

typedef int(*DID0_Read_fpt)(DID0_e);

typedef void(*DID0_Write_fpt)(DID0_e, int);

// Structure Declaration
struct SYSCTL_DID0_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	DID0_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 DID0_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	DID0_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	DID0_Write_fpt	write;

};

typedef struct SYSCTL_DID0_obj SYSCTL_DID0_t;

// Initializer
SYSCTL_DID0_t init_SYSCTL_DID0(void);


#endif // _DID0_h_

