/**********************************
* \file : SCGCPWM.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SCGCPWM_h_
#define _SCGCPWM_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SCGCPWM_enums.h" 

// Base Address for this Register
#define SYSCTL_SCGCPWM_BASE_ADDR	0x400FE740

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*SCGCPWM_Set_fpt)(SCGCPWM_e);

typedef void(*SCGCPWM_Clear_fpt)(SCGCPWM_e);

typedef int(*SCGCPWM_Read_fpt)(SCGCPWM_e);

typedef void(*SCGCPWM_Write_fpt)(SCGCPWM_e, int);

// Structure Declaration
struct SYSCTL_SCGCPWM_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	SCGCPWM_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 SCGCPWM_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	SCGCPWM_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	SCGCPWM_Write_fpt	write;

};

typedef struct SYSCTL_SCGCPWM_obj SYSCTL_SCGCPWM_t;

// Initializer
SYSCTL_SCGCPWM_t init_SYSCTL_SCGCPWM(void);


#endif // _SCGCPWM_h_

