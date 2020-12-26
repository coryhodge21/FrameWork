/**********************************
* \file : PCPWM.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PCPWM_h_
#define _PCPWM_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PCPWM_enums.h" 

// Base Address for this Register
#define SYSCTL_PCPWM_BASE_ADDR	0x400FE940

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PCPWM_Set_fpt)(PCPWM_e);

typedef void(*PCPWM_Clear_fpt)(PCPWM_e);

typedef int(*PCPWM_Read_fpt)(PCPWM_e);

typedef void(*PCPWM_Write_fpt)(PCPWM_e, int);

// Structure Declaration
struct SYSCTL_PCPWM_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PCPWM_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PCPWM_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PCPWM_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PCPWM_Write_fpt	write;

};

typedef struct SYSCTL_PCPWM_obj SYSCTL_PCPWM_t;

// Initializer
SYSCTL_PCPWM_t init_SYSCTL_PCPWM(void);


#endif // _PCPWM_h_

