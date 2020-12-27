/**********************************
* \file : DCGCWD.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DCGCWD_h_
#define _DCGCWD_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DCGCWD_enums.h" 

// Base Address for this Register
#define SYSCTL_DCGCWD_BASE_ADDR	0x400FE800

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*DCGCWD_Set_fpt)(DCGCWD_e);

typedef void(*DCGCWD_Clear_fpt)(DCGCWD_e);

typedef int(*DCGCWD_Read_fpt)(DCGCWD_e);

typedef void(*DCGCWD_Write_fpt)(DCGCWD_e, int);

// Structure Declaration
struct SYSCTL_DCGCWD_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	DCGCWD_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 DCGCWD_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	DCGCWD_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	DCGCWD_Write_fpt	write;

};

typedef struct SYSCTL_DCGCWD_obj SYSCTL_DCGCWD_t;

// Initializer
SYSCTL_DCGCWD_t init_SYSCTL_DCGCWD(void);


#endif // _DCGCWD_h_

