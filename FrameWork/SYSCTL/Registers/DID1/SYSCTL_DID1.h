/**********************************
* \file : DID1.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DID1_h_
#define _DID1_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DID1_enums.h" 

// Base Address for this Register
#define SYSCTL_DID1_BASE_ADDR	0x400FE004

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*DID1_Set_fpt)(DID1_e);

typedef void(*DID1_Clear_fpt)(DID1_e);

typedef int(*DID1_Read_fpt)(DID1_e);

typedef void(*DID1_Write_fpt)(DID1_e, int);

// Structure Declaration
struct SYSCTL_DID1_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	DID1_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 DID1_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	DID1_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	DID1_Write_fpt	write;

};

typedef struct SYSCTL_DID1_obj SYSCTL_DID1_t;

// Initializer
SYSCTL_DID1_t init_SYSCTL_DID1(void);


#endif // _DID1_h_

