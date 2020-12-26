/**********************************
* \file : DCGCPWM.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DCGCPWM_h_
#define _DCGCPWM_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DCGCPWM_enums.h" 

// Base Address for this Register
#define SYSCTL_DCGCPWM_BASE_ADDR	0x400FE840

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*DCGCPWM_Set_fpt)(DCGCPWM_e);

typedef void(*DCGCPWM_Clear_fpt)(DCGCPWM_e);

typedef int(*DCGCPWM_Read_fpt)(DCGCPWM_e);

typedef void(*DCGCPWM_Write_fpt)(DCGCPWM_e, int);

// Structure Declaration
struct SYSCTL_DCGCPWM_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	DCGCPWM_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 DCGCPWM_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	DCGCPWM_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	DCGCPWM_Write_fpt	write;

};

typedef struct SYSCTL_DCGCPWM_obj SYSCTL_DCGCPWM_t;

// Initializer
SYSCTL_DCGCPWM_t init_SYSCTL_DCGCPWM(void);


#endif // _DCGCPWM_h_

