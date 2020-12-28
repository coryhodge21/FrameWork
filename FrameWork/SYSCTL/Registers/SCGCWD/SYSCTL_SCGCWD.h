/**********************************
* \file : SCGCWD.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SCGCWD_h_
#define _SCGCWD_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SCGCWD_enums.h" 

// Base Address for this Register
#define SYSCTL_SCGCWD_BASE_ADDR	0x400FE700

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*SCGCWD_Set_fpt)(SCGCWD_e);

typedef void(*SCGCWD_Clear_fpt)(SCGCWD_e);

typedef int(*SCGCWD_Read_fpt)(SCGCWD_e);

typedef void(*SCGCWD_Write_fpt)(SCGCWD_e, int);

// Structure Declaration
struct SYSCTL_SCGCWD_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	SCGCWD_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 SCGCWD_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	SCGCWD_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	SCGCWD_Write_fpt	write;

};

typedef struct SYSCTL_SCGCWD_obj SYSCTL_SCGCWD_t;

// Initializer
SYSCTL_SCGCWD_t init_SYSCTL_SCGCWD(void);


#endif // _SCGCWD_h_

