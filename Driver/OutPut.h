/**********************************
* \file : RCGC2.h
* \author : Cory W. Hodge
* \brief auto generated file
************************************/

#ifndef _RCGC2_h_
#define _RCGC2_h_

//! \brief Enumerations for this Register
#include "Output_enums.h"

// Base Address for this Register
#define SYSCTL_RCGC2_BASE_ADDR  0x400FE108

// Function pointer types that set/clear/read/write Bit Fields w/n Registers
typedef void(*RCGC2_Set_fpt)(RCGC2_e);

typedef void(*RCGC2_Clear_fpt)(RCGC2_e);

typedef int(*RCGC2_Read_fpt)(RCGC2_e);

typedef void(*RCGC2_Write_fpt)(RCGC2_e, int);

// Structure Declaration
struct SYSCTL_RCGC2_obj {

    // Address of this Vector (Absolute)
    unsigned int BASE_ADDR;

    /** Function Pointers to Register Operations    */

    // Set the Bits of this Register Masked by the enumeration
    RCGC2_Set_fpt    set;

    // Clear the Bits of this Register Masked by the enumeration
     RCGC2_Clear_fpt    clear;

    // Read the Bits of this Register Masked by the enumeration
    RCGC2_Read_fpt  read;

    // Write the Bits of this Register Masked by the enumeration
    RCGC2_Write_fpt write;

};

typedef struct SYSCTL_RCGC2_obj SYSCTL_RCGC2_t;

// Initializer
SYSCTL_RCGC2_t init_SYSCTL_RCGC2(void);


#endif // _RCGC2_h_

