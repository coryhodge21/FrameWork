/**********************************
* \file : RCGCPWM.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RCGCPWM_h_
#define _RCGCPWM_h_

//! \brief Enumerations for this Register
#include "SYSCTL_RCGCPWM_enums.h" 

// Base Address for this Register
#define SYSCTL_RCGCPWM_BASE_ADDR	0x400FE640

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*RCGCPWM_Set_fpt)(RCGCPWM_e);

typedef void(*RCGCPWM_Clear_fpt)(RCGCPWM_e);

typedef int(*RCGCPWM_Read_fpt)(RCGCPWM_e);

typedef void(*RCGCPWM_Write_fpt)(RCGCPWM_e, int);

// Structure Declaration
struct SYSCTL_RCGCPWM_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	RCGCPWM_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 RCGCPWM_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	RCGCPWM_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	RCGCPWM_Write_fpt	write;

};

typedef struct SYSCTL_RCGCPWM_obj SYSCTL_RCGCPWM_t;

// Initializer
SYSCTL_RCGCPWM_t init_SYSCTL_RCGCPWM(void);


#endif // _RCGCPWM_h_

