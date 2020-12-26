/**********************************
* \file : SRI2C.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SRI2C_h_
#define _SRI2C_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SRI2C_enums.h" 

// Base Address for this Register
#define SYSCTL_SRI2C_BASE_ADDR	0x400FE520

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*SRI2C_Set_fpt)(SRI2C_e);

typedef void(*SRI2C_Clear_fpt)(SRI2C_e);

typedef int(*SRI2C_Read_fpt)(SRI2C_e);

typedef void(*SRI2C_Write_fpt)(SRI2C_e, int);

// Structure Declaration
struct SYSCTL_SRI2C_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	SRI2C_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 SRI2C_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	SRI2C_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	SRI2C_Write_fpt	write;

};

typedef struct SYSCTL_SRI2C_obj SYSCTL_SRI2C_t;

// Initializer
SYSCTL_SRI2C_t init_SYSCTL_SRI2C(void);


#endif // _SRI2C_h_

