/**********************************
* \file : PRWD.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PRWD_h_
#define _PRWD_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PRWD_enums.h" 

// Base Address for this Register
#define SYSCTL_PRWD_BASE_ADDR	0x400FEA00

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PRWD_Set_fpt)(PRWD_e);

typedef void(*PRWD_Clear_fpt)(PRWD_e);

typedef int(*PRWD_Read_fpt)(PRWD_e);

typedef void(*PRWD_Write_fpt)(PRWD_e, int);

// Structure Declaration
struct SYSCTL_PRWD_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PRWD_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PRWD_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PRWD_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PRWD_Write_fpt	write;

};

typedef struct SYSCTL_PRWD_obj SYSCTL_PRWD_t;

// Initializer
SYSCTL_PRWD_t init_SYSCTL_PRWD(void);


#endif // _PRWD_h_

