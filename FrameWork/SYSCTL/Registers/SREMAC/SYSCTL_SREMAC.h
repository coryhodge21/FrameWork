/**********************************
* \file : SREMAC.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SREMAC_h_
#define _SREMAC_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SREMAC_enums.h" 

// Base Address for this Register
#define SYSCTL_SREMAC_BASE_ADDR	0x400FE59C

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*SREMAC_Set_fpt)(SREMAC_e);

typedef void(*SREMAC_Clear_fpt)(SREMAC_e);

typedef int(*SREMAC_Read_fpt)(SREMAC_e);

typedef void(*SREMAC_Write_fpt)(SREMAC_e, int);

// Structure Declaration
struct SYSCTL_SREMAC_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	SREMAC_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 SREMAC_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	SREMAC_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	SREMAC_Write_fpt	write;

};

typedef struct SYSCTL_SREMAC_obj SYSCTL_SREMAC_t;

// Initializer
SYSCTL_SREMAC_t init_SYSCTL_SREMAC(void);


#endif // _SREMAC_h_

