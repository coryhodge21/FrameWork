/**********************************
* \file : PPPWM.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PPPWM_h_
#define _PPPWM_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PPPWM_enums.h" 

// Base Address for this Register
#define SYSCTL_PPPWM_BASE_ADDR	0x400FE340

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PPPWM_Set_fpt)(PPPWM_e);

typedef void(*PPPWM_Clear_fpt)(PPPWM_e);

typedef int(*PPPWM_Read_fpt)(PPPWM_e);

typedef void(*PPPWM_Write_fpt)(PPPWM_e, int);

// Structure Declaration
struct SYSCTL_PPPWM_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PPPWM_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PPPWM_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PPPWM_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PPPWM_Write_fpt	write;

};

typedef struct SYSCTL_PPPWM_obj SYSCTL_PPPWM_t;

// Initializer
SYSCTL_PPPWM_t init_SYSCTL_PPPWM(void);


#endif // _PPPWM_h_

