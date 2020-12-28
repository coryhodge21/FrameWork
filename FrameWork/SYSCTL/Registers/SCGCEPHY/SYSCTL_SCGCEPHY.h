/**********************************
* \file : SCGCEPHY.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SCGCEPHY_h_
#define _SCGCEPHY_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SCGCEPHY_enums.h" 

// Base Address for this Register
#define SYSCTL_SCGCEPHY_BASE_ADDR	0x400FE730

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*SCGCEPHY_Set_fpt)(SCGCEPHY_e);

typedef void(*SCGCEPHY_Clear_fpt)(SCGCEPHY_e);

typedef int(*SCGCEPHY_Read_fpt)(SCGCEPHY_e);

typedef void(*SCGCEPHY_Write_fpt)(SCGCEPHY_e, int);

// Structure Declaration
struct SYSCTL_SCGCEPHY_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	SCGCEPHY_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 SCGCEPHY_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	SCGCEPHY_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	SCGCEPHY_Write_fpt	write;

};

typedef struct SYSCTL_SCGCEPHY_obj SYSCTL_SCGCEPHY_t;

// Initializer
SYSCTL_SCGCEPHY_t init_SYSCTL_SCGCEPHY(void);


#endif // _SCGCEPHY_h_

