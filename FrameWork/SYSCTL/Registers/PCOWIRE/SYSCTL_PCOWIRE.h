/**********************************
* \file : PCOWIRE.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PCOWIRE_h_
#define _PCOWIRE_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PCOWIRE_enums.h" 

// Base Address for this Register
#define SYSCTL_PCOWIRE_BASE_ADDR	0x400FE998

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PCOWIRE_Set_fpt)(PCOWIRE_e);

typedef void(*PCOWIRE_Clear_fpt)(PCOWIRE_e);

typedef int(*PCOWIRE_Read_fpt)(PCOWIRE_e);

typedef void(*PCOWIRE_Write_fpt)(PCOWIRE_e, int);

// Structure Declaration
struct SYSCTL_PCOWIRE_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PCOWIRE_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PCOWIRE_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PCOWIRE_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PCOWIRE_Write_fpt	write;

};

typedef struct SYSCTL_PCOWIRE_obj SYSCTL_PCOWIRE_t;

// Initializer
SYSCTL_PCOWIRE_t init_SYSCTL_PCOWIRE(void);


#endif // _PCOWIRE_h_

