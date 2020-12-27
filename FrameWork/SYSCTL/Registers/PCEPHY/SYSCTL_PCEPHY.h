/**********************************
* \file : PCEPHY.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PCEPHY_h_
#define _PCEPHY_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PCEPHY_enums.h" 

// Base Address for this Register
#define SYSCTL_PCEPHY_BASE_ADDR	0x400FE930

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PCEPHY_Set_fpt)(PCEPHY_e);

typedef void(*PCEPHY_Clear_fpt)(PCEPHY_e);

typedef int(*PCEPHY_Read_fpt)(PCEPHY_e);

typedef void(*PCEPHY_Write_fpt)(PCEPHY_e, int);

// Structure Declaration
struct SYSCTL_PCEPHY_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PCEPHY_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PCEPHY_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PCEPHY_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PCEPHY_Write_fpt	write;

};

typedef struct SYSCTL_PCEPHY_obj SYSCTL_PCEPHY_t;

// Initializer
SYSCTL_PCEPHY_t init_SYSCTL_PCEPHY(void);


#endif // _PCEPHY_h_

