/**********************************
* \file : SI.h 
* \author : Cory W. Hodge 
* \brief auto generated file 
************************************/

#ifndef _SI_h_
#define _SI_h_

//! \brief Enumerations for this Register
#include "GPIO_SI_enums.h" 

// Base Address for this Register
#define GPIO_SI_BASE_ADDR	0x00000538

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*SI_Set_fpt)(SI_e);

typedef void(*SI_Clear_fpt)(SI_e);

typedef int(*SI_Read_fpt)(SI_e);

typedef void(*SI_Write_fpt)(SI_e, int);

// Structure Declaration
struct GPIO_SI_obj {

	// Address of this Vector (Absolute)
	unsigned int BASE_ADDR;

	/** Function Pointers to Register Operations    */

	// Set the Bits of this Register Masked by the enumeration
	SI_Set_fpt	 set;

	// Clear the Bits of this Register Masked by the enumeration
	 SI_Clear_fpt	clear;

	// Read the Bits of this Register Masked by the enumeration
	SI_Read_fpt	read;

	// Write the Bits of this Register Masked by the enumeration
	SI_Write_fpt	write;

};

typedef struct GPIO_SI_obj GPIO_SI_t;

// Initializer
GPIO_SI_t init_GPIO_SI(void);


#endif // _SI_h_

