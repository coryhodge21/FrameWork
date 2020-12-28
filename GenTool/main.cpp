/**
 * \file main.cpp
 * \author Cory W. Hodge
 * \date 12/22/2020
 *
 * \brief This is the entry point into project FrameWork Gen_Tool
 *
 * Using a File Parser, extract the data from ti provided memory maps :
 *      #define MOD_REG_Bit_Field 0x00000000     // description
 *
 * Using File Writer, generate a FrameWork Library for the data collected
 *
 * =======      Dev Notes       =========
 * See Readme.md for project
 *
 */

#include "Project_Common.h"
#include "FileParser.h"
#include "FileWriter.h"

using namespace std;

int main(int argc, char * argv[]) {

    // File system iterator
    string MemoryMaps_PATH = PATH_TO_MEMMAPS;

    for(const auto &entry : filesystem::directory_iterator(MemoryMaps_PATH)){

    // convert to string and cut off directory
    string filePath = entry.path();

    /// if file path contains . before file, skip hidden file
    if ( filePath[SIZE_OF_MM_PATH_STR] == '.' ) {
        //continue to next file
        continue;
    }
    // parse file and build module, register, bit field tree
    FileParser fileParser;

    // use data tree to create files
    FileWriter fileWriter;

    // parse file, build up modules data tree
    fileParser.parseFile(filePath);

    // copy data tree to file writer
    fileWriter.setModules(fileParser.getModules());

    // while modules vector is not empty
    while (!fileWriter.isEmpty()) {

        // write files to FrameWork Directory
        fileWriter.writeFiles();
    }

    }
    // exit success
    return 0;
}
