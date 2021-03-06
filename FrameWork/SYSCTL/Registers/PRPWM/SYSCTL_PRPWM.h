/**********************************
* \file : PRPWM.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _PRPWM_h_
#define _PRPWM_h_

//! \brief Enumerations for this Register
#include "SYSCTL_PRPWM_enums.h" 

// Base Address for this Register
#define SYSCTL_PRPWM_BASE_ADDR	0x400FEA40

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*PRPWM_Set_fpt)(PRPWM_e);

typedef void(*PRPWM_Clear_fpt)(PRPWM_e);

typedef int(*PRPWM_Read_fpt)(PRPWM_e);

typedef void(*PRPWM_Write_fpt)(PRPWM_e, int);

// Structure Declaration
struct SYSCTL_PRPWM_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	PRPWM_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 PRPWM_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	PRPWM_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	PRPWM_Write_fpt	write;

};

typedef struct SYSCTL_PRPWM_obj SYSCTL_PRPWM_t;

// Initializer
SYSCTL_PRPWM_t init_SYSCTL_PRPWM(void);


#endif // _PRPWM_h_

