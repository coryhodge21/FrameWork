/**
 * \file parseData.c
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

//! \brief Project Definitions
#define MAX_COL_PER_LINE    81
#define MAX_INPUT_LINES     100

/*     Project Resources            */
 
//! \brief Create file pointers
FILE * input_file_ptr;
FILE * outPtr_file_ptr

//! \brief 2 demensional Array for storing each line of input
//!         from a block of the memory map l 
char MEM_MAP_BLOCK[MAX_INPUT_LINES][MAX_COL_PER_LINE] = {0};

//! \brief Array of Registers

//! \brief Array of  

//! \brief

//! \brief String for holding the Objects name

//! \brief String for holding the Objects Address or Mask

//! \brief String for holding the Object Field Descriptor


//! \brief Input Buffer
const int BUFFER_SIZE = MAX_COL_PER_LINE;
char BUFFER[BUFF_SIZE];

char REGISTER_ARRAY[]
int main(void) {

    // arrays for holding data

    /*  Parse the file and fill arrays  */

    // Parsing Pointers
    int slowIndex, medIndex, fastIndex;

    // open file to parse
    //input_file_Ptr = fopen("./team_list.txt", "r");
    //////////////////////////////////////
    // DEBUGGING
    input_file_Ptr = fopen("./Regster.txt", "r");

    // open file to write single occurance list
    // truncate file if it already exists
    outPtr_file_Ptr = fopen("./REGISTER.txt", "w+");

    // Parse file and store strings to array
    // for(int i = 0; i < LIST_ARRAY_LENGTH ; i++ ) {

    //     // Read Line from file
    //     fgets(listArr[i], BUFF_SIZE, input_file_Ptr);

    //     // replace new line symbol with space
    //     listArr[i][strlen(listArr[i]) - 1] = ' ';
    // }

int i = 0;
    // until end of file reached, collect each line in an array of chars
    while(fgets(BUFFER[i], BUFF_SIZE, input_file_ptr) != NULL)){
            i++;
    }

    // check if EOF reached
    if(feof(input_file_ptr)){

    }
    // else some kind of error
    else {
        return 1;
    }



    return 0;
}