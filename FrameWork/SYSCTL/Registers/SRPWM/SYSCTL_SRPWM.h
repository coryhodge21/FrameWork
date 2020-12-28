/**********************************
* \file : SRPWM.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SRPWM_h_
#define _SRPWM_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SRPWM_enums.h" 

// Base Address for this Register
#define SYSCTL_SRPWM_BASE_ADDR	0x400FE540

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*SRPWM_Set_fpt)(SRPWM_e);

typedef void(*SRPWM_Clear_fpt)(SRPWM_e);

typedef int(*SRPWM_Read_fpt)(SRPWM_e);

typedef void(*SRPWM_Write_fpt)(SRPWM_e, int);

// Structure Declaration
struct SYSCTL_SRPWM_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	SRPWM_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 SRPWM_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	SRPWM_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	SRPWM_Write_fpt	write;

};

typedef struct SYSCTL_SRPWM_obj SYSCTL_SRPWM_t;

// Initializer
SYSCTL_SRPWM_t init_SYSCTL_SRPWM(void);


#endif // _SRPWM_h_

