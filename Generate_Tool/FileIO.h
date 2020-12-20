/**
 * \file FileIO.h
 * \author: Cory Hodge
 * \date: 12/19/20
 *
 * \brief File Input Output Tools
*/

#ifndef GENERATE_TOOL_FILEIO_H
#define GENERATE_TOOL_FILEIO_H
//! \brief Input Buffer
char BUFFER[MAX_COL_PER_LINE] = {0};

//! \brief Index for parsing string char by char
int BUFFER_INDEX;

//! \brief Charcter Arrays for holding important
//!          info parsed from file

//! \brief  TAG is entire string
//!           including MOD , REG, BF
const int MAX_TAG_SIZE = 50;
char TAG_FULL_NAME[MAX_TAG_SIZE] = {0};

//! \brief  Module Name
const int MAX_MODULE_NAME_SIZE = 50;
char MODULE_NAME[MAX_MODULE_NAME_SIZE] = {0};

//! \brief Register Name
const int MAX_REG_NAME_SIZE = 50;
char REGISTER_NAME[MAX_REG_NAME_SIZE] = {0};

//! \brief Bit Field Name
const int MAX_BF_NAME_SIZE = 50;
char BF_NAME[MAX_BF_NAME_SIZE] = {0};

//! \brief Address as a STRING
const int MAX_VALUE_SIZE = 11;
char MM_VALUE[MAX_VALUE_SIZE] = {0};

//! \brief File pointers
//! \brief Input Memory Map FP
FILE * in_MemoryMap_fp;

//! \brief Output Register File FP
FILE * out_Structure_fp;

// FUNCTIONS
void ASSERT_FP(FILE * fp){
    if(fp == NULL){
        // DEBUG
        printf("ERROR: FILE POINTER IS NULL\n");
        printf("ERROR: Return 1\n");
        while(1){
            // trap empty pointer
        }
    }
}


//! \brief Increment index of Buffer through empty spaces
int skip_spaces(char * array, int index){
    while(array[index] == ' '){
        index++;
    }
    return index;
}

//! \brief flush unused contents of buffer
void flushBUFFER(char * buffer, int max_buff_size){
    int i = 0;
    for(i = 0; i < max_buff_size; i++){
        buffer[i] = 0;
    }
}

#endif //GENERATE_TOOL_FILEIO_H
