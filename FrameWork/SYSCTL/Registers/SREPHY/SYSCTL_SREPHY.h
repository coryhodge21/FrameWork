/**********************************
* \file : SREPHY.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SREPHY_h_
#define _SREPHY_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SREPHY_enums.h" 

// Base Address for this Register
#define SYSCTL_SREPHY_BASE_ADDR	0x400FE530

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*SREPHY_Set_fpt)(SREPHY_e);

typedef void(*SREPHY_Clear_fpt)(SREPHY_e);

typedef int(*SREPHY_Read_fpt)(SREPHY_e);

typedef void(*SREPHY_Write_fpt)(SREPHY_e, int);

// Structure Declaration
struct SYSCTL_SREPHY_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	SREPHY_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 SREPHY_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	SREPHY_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	SREPHY_Write_fpt	write;

};

typedef struct SYSCTL_SREPHY_obj SYSCTL_SREPHY_t;

// Initializer
SYSCTL_SREPHY_t init_SYSCTL_SREPHY(void);


#endif // _SREPHY_h_

