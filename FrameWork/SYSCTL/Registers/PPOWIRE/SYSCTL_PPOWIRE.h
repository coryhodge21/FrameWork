/**********************************
* \file : PPOWIRE.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PPOWIRE_h_
#define _PPOWIRE_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PPOWIRE_enums.h" 

// Base Address for this Register
#define SYSCTL_PPOWIRE_BASE_ADDR	0x400FE398

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PPOWIRE_Set_fpt)(PPOWIRE_e);

typedef void(*PPOWIRE_Clear_fpt)(PPOWIRE_e);

typedef int(*PPOWIRE_Read_fpt)(PPOWIRE_e);

typedef void(*PPOWIRE_Write_fpt)(PPOWIRE_e, int);

// Structure Declaration
struct SYSCTL_PPOWIRE_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PPOWIRE_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PPOWIRE_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PPOWIRE_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PPOWIRE_Write_fpt	write;

};

typedef struct SYSCTL_PPOWIRE_obj SYSCTL_PPOWIRE_t;

// Initializer
SYSCTL_PPOWIRE_t init_SYSCTL_PPOWIRE(void);


#endif // _PPOWIRE_h_

