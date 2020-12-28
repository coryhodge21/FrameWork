/**********************************
* \file : RCGCUSB.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _RCGCUSB_h_
#define _RCGCUSB_h_

//! \brief Enumerations for this Register
#include "SYSCTL_RCGCUSB_enums.h" 

// Base Address for this Register
#define SYSCTL_RCGCUSB_BASE_ADDR	0x400FE628

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*RCGCUSB_Set_fpt)(RCGCUSB_e);

typedef void(*RCGCUSB_Clear_fpt)(RCGCUSB_e);

typedef int(*RCGCUSB_Read_fpt)(RCGCUSB_e);

typedef void(*RCGCUSB_Write_fpt)(RCGCUSB_e, int);

// Structure Declaration
struct SYSCTL_RCGCUSB_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	RCGCUSB_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 RCGCUSB_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	RCGCUSB_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	RCGCUSB_Write_fpt	write;

};

typedef struct SYSCTL_RCGCUSB_obj SYSCTL_RCGCUSB_t;

// Initializer
SYSCTL_RCGCUSB_t init_SYSCTL_RCGCUSB(void);


#endif // _RCGCUSB_h_

