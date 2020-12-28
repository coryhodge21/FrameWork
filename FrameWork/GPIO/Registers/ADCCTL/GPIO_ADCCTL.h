/**********************************
* \file : ADCCTL.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _ADCCTL_h_
#define _ADCCTL_h_

//! \brief Enumerations for this Register
#include "GPIO_ADCCTL_enums.h" 

// Base Address for this Register
#define GPIO_ADCCTL_BASE_ADDR	0x00000530

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*ADCCTL_Set_fpt)(ADCCTL_e);

typedef void(*ADCCTL_Clear_fpt)(ADCCTL_e);

typedef int(*ADCCTL_Read_fpt)(ADCCTL_e);

typedef void(*ADCCTL_Write_fpt)(ADCCTL_e, int);

// Structure Declaration
struct GPIO_ADCCTL_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	ADCCTL_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 ADCCTL_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	ADCCTL_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	ADCCTL_Write_fpt	write;

};

typedef struct GPIO_ADCCTL_obj GPIO_ADCCTL_t;

// Initializer
GPIO_ADCCTL_t init_GPIO_ADCCTL(void);


#endif // _ADCCTL_h_

