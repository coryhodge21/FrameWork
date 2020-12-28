/**********************************
* \file : PREPHY.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PREPHY_h_
#define _PREPHY_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PREPHY_enums.h" 

// Base Address for this Register
#define SYSCTL_PREPHY_BASE_ADDR	0x400FEA30

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PREPHY_Set_fpt)(PREPHY_e);

typedef void(*PREPHY_Clear_fpt)(PREPHY_e);

typedef int(*PREPHY_Read_fpt)(PREPHY_e);

typedef void(*PREPHY_Write_fpt)(PREPHY_e, int);

// Structure Declaration
struct SYSCTL_PREPHY_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PREPHY_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PREPHY_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PREPHY_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PREPHY_Write_fpt	write;

};

typedef struct SYSCTL_PREPHY_obj SYSCTL_PREPHY_t;

// Initializer
SYSCTL_PREPHY_t init_SYSCTL_PREPHY(void);


#endif // _PREPHY_h_

