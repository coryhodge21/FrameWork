/**********************************
* \file : RCC.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RCC_h_
#define _RCC_h_

//! \brief Enumerations for this Register
#include "SYSCTL_RCC_enums.h" 

// Base Address for this Register
#define SYSCTL_RCC_BASE_ADDR	0x400FE060

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*RCC_Set_fpt)(RCC_e);

typedef void(*RCC_Clear_fpt)(RCC_e);

typedef int(*RCC_Read_fpt)(RCC_e);

typedef void(*RCC_Write_fpt)(RCC_e, int);

// Structure Declaration
struct SYSCTL_RCC_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	RCC_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 RCC_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	RCC_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	RCC_Write_fpt	write;

};

typedef struct SYSCTL_RCC_obj SYSCTL_RCC_t;

// Initializer
SYSCTL_RCC_t init_SYSCTL_RCC(void);


#endif // _RCC_h_

