/**********************************
* \file : PCWD.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PCWD_h_
#define _PCWD_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PCWD_enums.h" 

// Base Address for this Register
#define SYSCTL_PCWD_BASE_ADDR	0x400FE900

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PCWD_Set_fpt)(PCWD_e);

typedef void(*PCWD_Clear_fpt)(PCWD_e);

typedef int(*PCWD_Read_fpt)(PCWD_e);

typedef void(*PCWD_Write_fpt)(PCWD_e, int);

// Structure Declaration
struct SYSCTL_PCWD_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PCWD_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PCWD_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PCWD_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PCWD_Write_fpt	write;

};

typedef struct SYSCTL_PCWD_obj SYSCTL_PCWD_t;

// Initializer
SYSCTL_PCWD_t init_SYSCTL_PCWD(void);


#endif // _PCWD_h_

