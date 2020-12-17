/**
 * \file main.c
 * 
 * \author Cory W. Hode
 * \date 12/7/2020
 * 
 * \brief This program takes general purpose provided 
 * memory maps for Microcontrollers in the formate of :
 *              #define Module_Regsiter_BitField 0x0000000000
 * It parses this file
 * and pulls out the key information of the mcu modules address'
 * and the bit masks used to identify each bit field.
 * 
 * This program stores the useful information into arrays
 * and one by one, generates C style API header and source files
 * for accessing all of the Memory Mapped Fields with common functions. 
 * set()
 * clear()
 * read()
 * write() 
 * 
 */

//! \brief External Recources
#include <stdio.h>
#include <stdlib.h>
#include <string.h> // for strlen()

// == GEN TOOL RESOURCES =======================================================

//! \brief Project Definitions
#define MAX_COL_PER_LINE    81

//! \brief Input Buffer
char BUFFER[MAX_COL_PER_LINE];

//! \brief Create file pointers
FILE * in_MemoryMap_fp;
FILE * out_Structure_fp;




// Index for parsing string char by char
int position;

// ************* MAIN **********************************************************
int main(void) {

    // open file to parse
    in_MemoryMap_fp = fopen("../MemMaps/hw_sysctl.h", "r");

    // open file to write truncate file if it already exists
    out_Structure_fp = fopen("../FrameWork/test_Struct.txt", "w+");

    // until end of file reached, 
    // Copy line from file up to 'MAX_COL_PER_LINE' characters
    while( fgets(BUFFER, MAX_COL_PER_LINE, in_MemoryMap_fp) != NULL ){

        /*    Parse String and pull out needed info for building structs    */

        // Reset Index to 0
        position = 0;


        /*
        // if : first character of string is //
        // then this line is a comment
        */
        if ( BUFFER[0] == '/' ) {

            // TODO : implement comment parsing
            continue;
        }

        /*
        // if : first character of string is #
        // then this line is an address or mask
        */
        else if ( BUFFER[position] == '#') {

            // TODO: move these to constants area or define
            int INDEX_MODULE_NAME_BEGIN = 8;
            int MAX_MODULE_NAME_SIZE = 40;
            char FULL_NAME_STRING[MAX_MODULE_NAME_SIZE];
            int full_name_index = 0;
            /**     * *    Mask         * *
            *  I need 6 pieces of information:
            *  Entire_Combo_Name
            *  Module
            *  Register
            *  Bit_Field ( optional )
            *  Address/Mask
            *  Comment String
            */

            // Parse Full Defined Name
            position = INDEX_MODULE_NAME_BEGIN;

            // until a space is reached
            while(BUFFER[position] != ' '){

                // copy characters of FULL_NAME_STRING
                FULL_NAME_STRING[full_name_index] = BUFFER[position];

                // increment index's
                position++;
                full_name_index++;
            }

            // proceed to skip spaces until '/' contiuation key or 0x address begin is found



        }

        /**
         * Line does not begin with # or / 
         */
        else {

        }



    } // End File Parse

    return 0;
} // End Main