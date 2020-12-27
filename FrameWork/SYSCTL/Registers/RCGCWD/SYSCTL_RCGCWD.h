/**********************************
* \file : RCGCWD.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RCGCWD_h_
#define _RCGCWD_h_

//! \brief Enumerations for this Register
#include "SYSCTL_RCGCWD_enums.h" 

// Base Address for this Register
#define SYSCTL_RCGCWD_BASE_ADDR	0x400FE600

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*RCGCWD_Set_fpt)(RCGCWD_e);

typedef void(*RCGCWD_Clear_fpt)(RCGCWD_e);

typedef int(*RCGCWD_Read_fpt)(RCGCWD_e);

typedef void(*RCGCWD_Write_fpt)(RCGCWD_e, int);

// Structure Declaration
struct SYSCTL_RCGCWD_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	RCGCWD_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 RCGCWD_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	RCGCWD_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	RCGCWD_Write_fpt	write;

};

typedef struct SYSCTL_RCGCWD_obj SYSCTL_RCGCWD_t;

// Initializer
SYSCTL_RCGCWD_t init_SYSCTL_RCGCWD(void);


#endif // _RCGCWD_h_

