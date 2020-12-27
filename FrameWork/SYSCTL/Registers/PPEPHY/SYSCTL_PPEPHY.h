/**********************************
* \file : PPEPHY.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PPEPHY_h_
#define _PPEPHY_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PPEPHY_enums.h" 

// Base Address for this Register
#define SYSCTL_PPEPHY_BASE_ADDR	0x400FE330

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PPEPHY_Set_fpt)(PPEPHY_e);

typedef void(*PPEPHY_Clear_fpt)(PPEPHY_e);

typedef int(*PPEPHY_Read_fpt)(PPEPHY_e);

typedef void(*PPEPHY_Write_fpt)(PPEPHY_e, int);

// Structure Declaration
struct SYSCTL_PPEPHY_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PPEPHY_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PPEPHY_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PPEPHY_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PPEPHY_Write_fpt	write;

};

typedef struct SYSCTL_PPEPHY_obj SYSCTL_PPEPHY_t;

// Initializer
SYSCTL_PPEPHY_t init_SYSCTL_PPEPHY(void);


#endif // _PPEPHY_h_

