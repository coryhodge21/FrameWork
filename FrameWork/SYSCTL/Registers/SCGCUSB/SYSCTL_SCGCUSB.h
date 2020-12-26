/**********************************
* \file : SCGCUSB.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SCGCUSB_h_
#define _SCGCUSB_h_

//! \brief Enumerations for this Register
#include "SYSCTL_SCGCUSB_enums.h" 

// Base Address for this Register
#define SYSCTL_SCGCUSB_BASE_ADDR	0x400FE728

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*SCGCUSB_Set_fpt)(SCGCUSB_e);

typedef void(*SCGCUSB_Clear_fpt)(SCGCUSB_e);

typedef int(*SCGCUSB_Read_fpt)(SCGCUSB_e);

typedef void(*SCGCUSB_Write_fpt)(SCGCUSB_e, int);

// Structure Declaration
struct SYSCTL_SCGCUSB_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	SCGCUSB_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 SCGCUSB_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	SCGCUSB_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	SCGCUSB_Write_fpt	write;

};

typedef struct SYSCTL_SCGCUSB_obj SYSCTL_SCGCUSB_t;

// Initializer
SYSCTL_SCGCUSB_t init_SYSCTL_SCGCUSB(void);


#endif // _SCGCUSB_h_

