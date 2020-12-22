/**
 * \file Registers.h
 * \author Cory W. Hodge
 * \date 12/14/2020
 *
 * \description this is a generic
 * template for the Frameworks
 * register structure
 *
 *
 * \details
 *      Each register will be represented with a struct.
 *      within this struct will be all the needed info
 *      for reading, writing, setting, and clearing this
 *      registers particular bitfields.
 *
 *      bit fields are represented with enumerations.
 *      the enumerations value's are the register masks
 *
 *      each register will hold 4 function pointers to
 *      generic functions that carry out the operations.
 */

#ifndef _REGISTER_H_
#define _REGISTER_H_

// Project Common Files
#include "prj_common.h"

// Memory Map Providing enum values and reg base address
#include "hw_sysctl.h"

// enums for this register
#include "BitField_enums.h"

// Functions that set/clear/read/write Bit Fields w/n Registers
typedef void(*Set_fpt)(Reg_BF_e);

typedef void(*Clear_fpt)(Reg_BF_e);

typedef int32_t(*Read_fpt)(Reg_BF_e);

typedef void(*Write_fpt)(Reg_BF_e, int32_t);

/**
 * Structure Decleration
 */
struct REGISTER_obj;

typedef struct REGISTER_obj {

    // Address of Register
    Reg_Addr_t REG_BASE_ADDR;

    // function pointers to operations
    // used for modifying Register BitFields

    // Set
    Set_fpt set;

    // Clear
    Clear_fpt clear;

    // Read
    Read_fpt read;

    // Write
    Write_fpt write;

} REGISTER_t;

// Function Declerations
REGISTER_t BUILDER_REGISTER(void);


#endif // _REGISTER_H_
