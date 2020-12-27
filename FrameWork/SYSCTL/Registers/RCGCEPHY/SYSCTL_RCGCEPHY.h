/**********************************
* \file : RCGCEPHY.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RCGCEPHY_h_
#define _RCGCEPHY_h_

//! \brief Enumerations for this Register
#include "SYSCTL_RCGCEPHY_enums.h" 

// Base Address for this Register
#define SYSCTL_RCGCEPHY_BASE_ADDR	0x400FE630

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*RCGCEPHY_Set_fpt)(RCGCEPHY_e);

typedef void(*RCGCEPHY_Clear_fpt)(RCGCEPHY_e);

typedef int(*RCGCEPHY_Read_fpt)(RCGCEPHY_e);

typedef void(*RCGCEPHY_Write_fpt)(RCGCEPHY_e, int);

// Structure Declaration
struct SYSCTL_RCGCEPHY_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	RCGCEPHY_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 RCGCEPHY_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	RCGCEPHY_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	RCGCEPHY_Write_fpt	write;

};

typedef struct SYSCTL_RCGCEPHY_obj SYSCTL_RCGCEPHY_t;

// Initializer
SYSCTL_RCGCEPHY_t init_SYSCTL_RCGCEPHY(void);


#endif // _RCGCEPHY_h_

