/**********************************
* \file : DMACTL.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _DMACTL_h_
#define _DMACTL_h_

//! \brief Enumerations for this Register
#include "GPIO_DMACTL_enums.h" 

// Base Address for this Register
#define GPIO_DMACTL_BASE_ADDR	0x00000534

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*DMACTL_Set_fpt)(DMACTL_e);

typedef void(*DMACTL_Clear_fpt)(DMACTL_e);

typedef int(*DMACTL_Read_fpt)(DMACTL_e);

typedef void(*DMACTL_Write_fpt)(DMACTL_e, int);

// Structure Declaration
struct GPIO_DMACTL_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	DMACTL_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 DMACTL_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	DMACTL_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	DMACTL_Write_fpt	write;

};

typedef struct GPIO_DMACTL_obj GPIO_DMACTL_t;

// Initializer
GPIO_DMACTL_t init_GPIO_DMACTL(void);


#endif // _DMACTL_h_

