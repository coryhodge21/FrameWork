/**********************************
* \file : PRHIB.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PRHIB_h_
#define _PRHIB_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PRHIB_enums.h" 

// Base Address for this Register
#define SYSCTL_PRHIB_BASE_ADDR	0x400FEA14

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PRHIB_Set_fpt)(PRHIB_e);

typedef void(*PRHIB_Clear_fpt)(PRHIB_e);

typedef int(*PRHIB_Read_fpt)(PRHIB_e);

typedef void(*PRHIB_Write_fpt)(PRHIB_e, int);

// Structure Declaration
struct SYSCTL_PRHIB_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PRHIB_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PRHIB_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PRHIB_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PRHIB_Write_fpt	write;

};

typedef struct SYSCTL_PRHIB_obj SYSCTL_PRHIB_t;

// Initializer
SYSCTL_PRHIB_t init_SYSCTL_PRHIB(void);


#endif // _PRHIB_h_

