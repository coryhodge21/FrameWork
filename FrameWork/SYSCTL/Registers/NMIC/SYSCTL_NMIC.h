/**********************************
* \file : NMIC.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _NMIC_h_
#define _NMIC_h_

//! \brief Enumerations for this Register
#include "SYSCTL_NMIC_enums.h" 

// Base Address for this Register
#define SYSCTL_NMIC_BASE_ADDR	0x400FE064

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*NMIC_Set_fpt)(NMIC_e);

typedef void(*NMIC_Clear_fpt)(NMIC_e);

typedef int(*NMIC_Read_fpt)(NMIC_e);

typedef void(*NMIC_Write_fpt)(NMIC_e, int);

// Structure Declaration
struct SYSCTL_NMIC_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	NMIC_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 NMIC_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	NMIC_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	NMIC_Write_fpt	write;

};

typedef struct SYSCTL_NMIC_obj SYSCTL_NMIC_t;

// Initializer
SYSCTL_NMIC_t init_SYSCTL_NMIC(void);


#endif // _NMIC_h_

