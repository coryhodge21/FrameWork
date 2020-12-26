/**********************************
* \file : HSSR.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _HSSR_h_
#define _HSSR_h_

//! \brief Enumerations for this Register
#include "SYSCTL_HSSR_enums.h" 

// Base Address for this Register
#define SYSCTL_HSSR_BASE_ADDR	0x400FE1F4

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*HSSR_Set_fpt)(HSSR_e);

typedef void(*HSSR_Clear_fpt)(HSSR_e);

typedef int(*HSSR_Read_fpt)(HSSR_e);

typedef void(*HSSR_Write_fpt)(HSSR_e, int);

// Structure Declaration
struct SYSCTL_HSSR_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	HSSR_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 HSSR_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	HSSR_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	HSSR_Write_fpt	write;

};

typedef struct SYSCTL_HSSR_obj SYSCTL_HSSR_t;

// Initializer
SYSCTL_HSSR_t init_SYSCTL_HSSR(void);


#endif // _HSSR_h_

