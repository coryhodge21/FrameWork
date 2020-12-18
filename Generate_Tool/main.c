/**
 * \file main.c
 * 
 * \author Cory W. Hodge
 * \date 12/7/2020
 * 
 * \brief This program takes general purpose provided 
 * memory maps for Microcontrollers in the format of :
 *              #define Module_Register_BitField 0x0000000000
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

//! \brief External Resources
#include <stdio.h>
#include <stdlib.h>
#include <string.h> // for string length()

// == GEN TOOL RESOURCES =====================

//! \brief Project Definitions
#define MAX_COL_PER_LINE    81
#define ZERO                0
#define TAG_BEGIN_INDEX     8

//! \brief Input Buffer
char BUFFER[MAX_COL_PER_LINE];

//! \brief Index for parsing string char by char
int BUFFER_INDEX;

//! \brief Charcter Arrays for holding important
//!          info parsed from file

//! \brief  TAG is entire string 
//!           including MOD , REG, BF
const int MAX_TAG_SIZE = 20;
char TAG_FULL_NAME[MAX_TAG_SIZE];

//! \brief  Module Name
const int MAX_MODULE_NAME_SIZE = 20;
char MODULE_NAME[MAX_MODULE_NAME_SIZE];

//! \brief Register Name
const int MAX_REG_NAME_SIZE = 20;
char REGISTER_NAME[MAX_REG_NAME_SIZE];

//! \brief Bit Field Name
const int MAX_BF_NAME_SIZE = 20;
char BF_NAME[MAX_BF_NAME_SIZE];

//! \brief Address as a STRING
const int MAX_MM_VALUE_SIZE = 10;
char MM_VALUE[MAX_MM_VALUE_SIZE];

//! \brief File pointers
//! \brief Input Memory Map FP
FILE * in_MemoryMap_fp;

//! \brief Output Register File FP
FILE * out_Structure_fp;

// FUNCTIONS
void ASSERT_FP(FILE * fp){
    if(fp == NULL){
        // DEBUG
        printf("file pointer null\n");
        printf("ERROR: Return 1\n");  
        exit;
    }
}

//! \brief Increment index of Buffer through empty spaces
void skip_spaces(char * array, int index){
    while(array[index] == ' '){
        
        // DEBUG
        //printf("skipping spaces");
        index++;
    }
}

/**
 * 
 *      DEBUGGING
 * 
 */
int lines_skipped = 0;




// ************* MAIN *************************
int main(void) {

    // open file to parse read only, it must exist
    in_MemoryMap_fp = fopen("hw_sysctl_copy.h", "r");
    ASSERT_FP(in_MemoryMap_fp);

    // open file to write, truncate file if it already exists
    out_Structure_fp = fopen("test_Struct.h", "w+");
    ASSERT_FP(out_Structure_fp);

    // DEBUG
    //fprintf(out_Structure_fp, "Writing to new File");

    /**
     * Parse File line by line until EOF reached
     */
    while( fgets(BUFFER, MAX_COL_PER_LINE, in_MemoryMap_fp) != NULL ){
        
        // Reset Index to 0
        BUFFER_INDEX = 0;
        
        // skep spaces up to useable char 
        skip_spaces(BUFFER, BUFFER_INDEX);

        /**
         * Character at BUFFER_INDEX : /
         * Start of Comment
         */
        // DEBUG
        //printf("continuing?\n");
        if ( BUFFER[BUFFER_INDEX] == '/' ) {
            //printf("BUFFER[0] == '/'\n");
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
            
            //printf("lines skipped %d \n", lines_skipped);

            // DEBUG
            //printf("BUFFER[0] == # \n");

            // skip #define 
            BUFFER_INDEX = TAG_BEGIN_INDEX;
                 
            // DEBUG
            //printf("BUFFER[TAG_BEGIN_INDEX] == 8 \n");
/////////////////////////////////////////////////////////////////////////////
            // copy whole tag up to first space
            int tag_index = 0;
            while(BUFFER[BUFFER_INDEX] != ' '){

                // DEBUG
                //printf("Buffer[index] == %c ", BUFFER[BUFFER_INDEX]);

                TAG_FULL_NAME[tag_index] = BUFFER[BUFFER_INDEX];
                tag_index++;
                BUFFER_INDEX++;
            }
        }

        // skep spaces up to useable char 
        skip_spaces(BUFFER, BUFFER_INDEX);
        
        /**
         * Character at BUFFER_INDEX : 0
         * Start of Address
         */
        if(BUFFER[BUFFER_INDEX] == '0'){
           // copy 32 bit address or mask up too space
            int value_index = 0;
            while(BUFFER[BUFFER_INDEX] != ' '){
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
                
        }

        /**
         * Character at BUFFER_INDEX : ' '
         * Empty character
         */
        if ( BUFFER[BUFFER_INDEX] == ' ') {
            //printf("BUFFER[0] == space \n");  


        }

        /**
         * Character at BUFFER_INDEX : unknown
         */
        else {

            printf("BUFFER[BUFFER_INDEX] == ??? \n");
            //printf("%c \n", BUFFER[BUFFER_INDEX]);
            continue;
        }


        printf("\n ACQUIRED VALUES \n\n");
        printf("Full Tag Name : %s \n", TAG_FULL_NAME);
        printf("VALUE : %s \n", MM_VALUE);

    } // End File Parse

    printf("EXIT: Return 0\n");
    return 0;
} // End Main