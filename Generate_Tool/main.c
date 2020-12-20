/**
 * \file main.c
 * 
 * \author Cory W. Hodge
 * \date 12/7/2020
 * 
 * \brief This project takes general purpose factory provided
 * memory map header files for Microcontrollers in the format of :
 *              #define Module_Register_BitField 0x0000000000
 * It parses this file
 * and pulls out the key information of the mcu modules address'
 * and the bit masks used to identify each bit field.
 * 
 * This program stores the useful information into arrays
 * and one by one, generates C style API header and source files
 * for accessing all of the Memory Mapped Fields with common functions.
 *
 * set()
 * clear()
 * read()
 * write()
 */

//! \brief External Resources
#include <stdio.h>
#include <stdlib.h>
#include <string.h> // for string length()
#include "prj_common.h"
#include "FileIO.h"

char * INPUT_FILE_PATH = "../hw_sysctl.h";
char * OUTPUT_FILE_PATH = "../test_Struct.h";

// == GEN TOOL RESOURCES =====================
/**
 *      DEBUGGING
 */
int lines_skipped = 0;

// ************* MAIN *************************
int main(void) {

    // open file to parse read only, it must exist
    in_MemoryMap_fp = fopen(INPUT_FILE_PATH, "r");
    ASSERT_FP(in_MemoryMap_fp);

    // open file to write, truncate file if it already exists
    out_Structure_fp = fopen(OUTPUT_FILE_PATH, "w+");
    ASSERT_FP(out_Structure_fp);

    // DEBUG
    //fprintf(out_Structure_fp, "Writing to new File");

    /**
     * Parse File line by line until EOF reached
     */
    while( fgets(BUFFER, MAX_COL_PER_LINE, in_MemoryMap_fp) != NULL ){
        
        // Reset Index to 0
        BUFFER_INDEX = 0;
        
        // skip spaces up to usable char
        BUFFER_INDEX = skip_spaces(BUFFER, BUFFER_INDEX);

        /**
         * Character at BUFFER_INDEX : /
         * Start of Comment
         */
        if ( BUFFER[BUFFER_INDEX] == '/' ) {
            // TODO: implement comment parsing
            // continue back to while loop, get next line
            lines_skipped++;
            continue;
        }

        /**
         * Character at BUFFER_INDEX : #
         * #define 
         */
        if ( BUFFER[BUFFER_INDEX] == '#') {

            // if # symbol is found, this line contains
            // an address or bit field mask, skip the #define that
            // starts the line. Begin parsing at beginning of tag
            BUFFER_INDEX = TAG_BEGIN_INDEX;

            // copy whole tag up to first space
            int tag_index = 0;
            while(BUFFER[BUFFER_INDEX] != ' ' && tag_index < MAX_TAG_SIZE ){

                TAG_FULL_NAME[tag_index] = BUFFER[BUFFER_INDEX];
                tag_index++;
                BUFFER_INDEX++;
            }
        }

        // skip spaces up to usable char
        BUFFER_INDEX = skip_spaces(BUFFER, BUFFER_INDEX);
        
        /**
         * Character at BUFFER_INDEX : 0
         * Start of Address
         */
        if(BUFFER[BUFFER_INDEX] == '0'){

            // copy 32 bit address or mask up too space
            int value_index = 0;
            while(BUFFER[BUFFER_INDEX] != ' ' && value_index < MAX_VALUE_SIZE){

                MM_VALUE[value_index] = BUFFER[BUFFER_INDEX];
                BUFFER_INDEX++;
                value_index++;
            }
        }

        /**
         * Character at BUFFER_INDEX : \
         * Adress of current buffer on next line
         */
        if(BUFFER[BUFFER_INDEX] == '\\'){
            //TODO: implement seperate line address handling

            // continue to parse next line of file
            continue;
        }

        /**
         * Character at BUFFER_INDEX : ' '
         * Empty character
         * skip spaces
         */
        if ( BUFFER[BUFFER_INDEX] == ' ') {
            BUFFER_INDEX = skip_spaces(BUFFER, BUFFER_INDEX);
        }

        /**
         * Character at BUFFER_INDEX : '\n'
         * new line character
         */
         if (BUFFER[BUFFER_INDEX] == '\n'){

             // Flush Buffer
             flushBUFFER(BUFFER, MAX_COL_PER_LINE);

             // continue to next line
             continue;
         }
        /**
         * Character at BUFFER_INDEX : unknown
         * character in buffer at current index is not
         * \ , / , # , ' ' , 0 , \n'
         */
        else {

            // write warning to console
            //printf("BUFFER[BUFFER_INDEX] == ??? \n");

            // Flush Buffer
            flushBUFFER(BUFFER, MAX_COL_PER_LINE);

//            // continue to next line
//            continue;
        }


        //printf("\n ACQUIRED VALUES FROM INPUT FILE \n\n");
        printf("Full Tag Name : %s \n", TAG_FULL_NAME);
        printf("VALUE : %s \n", MM_VALUE);

        // Flush Buffer
        flushBUFFER(BUFFER, MAX_COL_PER_LINE);
        flushBUFFER(TAG_FULL_NAME, MAX_TAG_SIZE);
        flushBUFFER(MM_VALUE, MAX_VALUE_SIZE);
        flushBUFFER(MM_VALUE, MAX_VALUE_SIZE);

    } // End File Parse

    printf("EXIT: Return 0\n");
    return 0;
} // End Main