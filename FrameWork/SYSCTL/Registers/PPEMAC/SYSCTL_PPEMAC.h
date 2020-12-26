/**********************************
* \file : PPEMAC.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PPEMAC_h_
#define _PPEMAC_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PPEMAC_enums.h" 

// Base Address for this Register
#define SYSCTL_PPEMAC_BASE_ADDR	0x400FE39C

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PPEMAC_Set_fpt)(PPEMAC_e);

typedef void(*PPEMAC_Clear_fpt)(PPEMAC_e);

typedef int(*PPEMAC_Read_fpt)(PPEMAC_e);

typedef void(*PPEMAC_Write_fpt)(PPEMAC_e, int);

// Structure Declaration
struct SYSCTL_PPEMAC_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PPEMAC_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PPEMAC_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PPEMAC_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PPEMAC_Write_fpt	write;

};

typedef struct SYSCTL_PPEMAC_obj SYSCTL_PPEMAC_t;

// Initializer
SYSCTL_PPEMAC_t init_SYSCTL_PPEMAC(void);


#endif // _PPEMAC_h_

