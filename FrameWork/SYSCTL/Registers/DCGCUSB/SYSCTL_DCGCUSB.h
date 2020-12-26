/**********************************
* \file : DCGCUSB.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DCGCUSB_h_
#define _DCGCUSB_h_

//! \brief Enumerations for this Register
#include "SYSCTL_DCGCUSB_enums.h" 

// Base Address for this Register
#define SYSCTL_DCGCUSB_BASE_ADDR	0x400FE828

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*DCGCUSB_Set_fpt)(DCGCUSB_e);

typedef void(*DCGCUSB_Clear_fpt)(DCGCUSB_e);

typedef int(*DCGCUSB_Read_fpt)(DCGCUSB_e);

typedef void(*DCGCUSB_Write_fpt)(DCGCUSB_e, int);

// Structure Declaration
struct SYSCTL_DCGCUSB_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	DCGCUSB_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 DCGCUSB_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	DCGCUSB_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	DCGCUSB_Write_fpt	write;

};

typedef struct SYSCTL_DCGCUSB_obj SYSCTL_DCGCUSB_t;

// Initializer
SYSCTL_DCGCUSB_t init_SYSCTL_DCGCUSB(void);


#endif // _DCGCUSB_h_

