/**********************************
* \file : USBMPC.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _USBMPC_h_
#define _USBMPC_h_

//! \brief Enumerations for this Register
#include "SYSCTL_USBMPC_enums.h" 

// Base Address for this Register
#define SYSCTL_USBMPC_BASE_ADDR	0x400FE284

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*USBMPC_Set_fpt)(USBMPC_e);

typedef void(*USBMPC_Clear_fpt)(USBMPC_e);

typedef int(*USBMPC_Read_fpt)(USBMPC_e);

typedef void(*USBMPC_Write_fpt)(USBMPC_e, int);

// Structure Declaration
struct SYSCTL_USBMPC_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	USBMPC_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 USBMPC_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	USBMPC_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	USBMPC_Write_fpt	write;

};

typedef struct SYSCTL_USBMPC_obj SYSCTL_USBMPC_t;

// Initializer
SYSCTL_USBMPC_t init_SYSCTL_USBMPC(void);


#endif // _USBMPC_h_

