/**********************************
* \file : PCEMAC.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PCEMAC_h_
#define _PCEMAC_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PCEMAC_enums.h" 

// Base Address for this Register
#define SYSCTL_PCEMAC_BASE_ADDR	0x400FE99C

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PCEMAC_Set_fpt)(PCEMAC_e);

typedef void(*PCEMAC_Clear_fpt)(PCEMAC_e);

typedef int(*PCEMAC_Read_fpt)(PCEMAC_e);

typedef void(*PCEMAC_Write_fpt)(PCEMAC_e, int);

// Structure Declaration
struct SYSCTL_PCEMAC_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PCEMAC_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PCEMAC_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PCEMAC_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PCEMAC_Write_fpt	write;

};

typedef struct SYSCTL_PCEMAC_obj SYSCTL_PCEMAC_t;

// Initializer
SYSCTL_PCEMAC_t init_SYSCTL_PCEMAC(void);


#endif // _PCEMAC_h_

