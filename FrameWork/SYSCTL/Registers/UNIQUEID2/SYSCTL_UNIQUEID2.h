/**********************************
* \file : UNIQUEID2.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _UNIQUEID2_h_
#define _UNIQUEID2_h_

//! \brief Enumerations for this Register
#include "SYSCTL_UNIQUEID2_enums.h" 

// Base Address for this Register
#define SYSCTL_UNIQUEID2_BASE_ADDR	0x400FEF28

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*UNIQUEID2_Set_fpt)(UNIQUEID2_e);

typedef void(*UNIQUEID2_Clear_fpt)(UNIQUEID2_e);

typedef int(*UNIQUEID2_Read_fpt)(UNIQUEID2_e);

typedef void(*UNIQUEID2_Write_fpt)(UNIQUEID2_e, int);

// Structure Declaration
struct SYSCTL_UNIQUEID2_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	UNIQUEID2_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 UNIQUEID2_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	UNIQUEID2_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	UNIQUEID2_Write_fpt	write;

};

typedef struct SYSCTL_UNIQUEID2_obj SYSCTL_UNIQUEID2_t;

// Initializer
SYSCTL_UNIQUEID2_t init_SYSCTL_UNIQUEID2(void);


#endif // _UNIQUEID2_h_

