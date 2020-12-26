/**********************************
* \file : SRHIB.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SRHIB_h_
#define _SRHIB_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SRHIB_enums.h" 

// Base Address for this Register
#define SYSCTL_SRHIB_BASE_ADDR	0x400FE514

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*SRHIB_Set_fpt)(SRHIB_e);

typedef void(*SRHIB_Clear_fpt)(SRHIB_e);

typedef int(*SRHIB_Read_fpt)(SRHIB_e);

typedef void(*SRHIB_Write_fpt)(SRHIB_e, int);

// Structure Declaration
struct SYSCTL_SRHIB_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	SRHIB_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 SRHIB_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	SRHIB_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	SRHIB_Write_fpt	write;

};

typedef struct SYSCTL_SRHIB_obj SYSCTL_SRHIB_t;

// Initializer
SYSCTL_SRHIB_t init_SYSCTL_SRHIB(void);


#endif // _SRHIB_h_

