/**********************************
* \file : LDODPCTL.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _LDODPCTL_h_
#define _LDODPCTL_h_

//! \brief Enumerations for this Register
#include "SYSCTL_LDODPCTL_enums.h" 

// Base Address for this Register
#define SYSCTL_LDODPCTL_BASE_ADDR	0x400FE1BC

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*LDODPCTL_Set_fpt)(LDODPCTL_e);

typedef void(*LDODPCTL_Clear_fpt)(LDODPCTL_e);

typedef int(*LDODPCTL_Read_fpt)(LDODPCTL_e);

typedef void(*LDODPCTL_Write_fpt)(LDODPCTL_e, int);

// Structure Declaration
struct SYSCTL_LDODPCTL_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	LDODPCTL_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 LDODPCTL_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	LDODPCTL_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	LDODPCTL_Write_fpt	write;

};

typedef struct SYSCTL_LDODPCTL_obj SYSCTL_LDODPCTL_t;

// Initializer
SYSCTL_LDODPCTL_t init_SYSCTL_LDODPCTL(void);


#endif // _LDODPCTL_h_

