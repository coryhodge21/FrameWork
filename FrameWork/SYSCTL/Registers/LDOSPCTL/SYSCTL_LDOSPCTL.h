/**********************************
* \file : LDOSPCTL.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _LDOSPCTL_h_
#define _LDOSPCTL_h_

//! \brief Enumerations for this Register
#include "SYSCTL_LDOSPCTL_enums.h" 

// Base Address for this Register
#define SYSCTL_LDOSPCTL_BASE_ADDR	0x400FE1B4

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*LDOSPCTL_Set_fpt)(LDOSPCTL_e);

typedef void(*LDOSPCTL_Clear_fpt)(LDOSPCTL_e);

typedef int(*LDOSPCTL_Read_fpt)(LDOSPCTL_e);

typedef void(*LDOSPCTL_Write_fpt)(LDOSPCTL_e, int);

// Structure Declaration
struct SYSCTL_LDOSPCTL_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	LDOSPCTL_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 LDOSPCTL_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	LDOSPCTL_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	LDOSPCTL_Write_fpt	write;

};

typedef struct SYSCTL_LDOSPCTL_obj SYSCTL_LDOSPCTL_t;

// Initializer
SYSCTL_LDOSPCTL_t init_SYSCTL_LDOSPCTL(void);


#endif // _LDOSPCTL_h_

