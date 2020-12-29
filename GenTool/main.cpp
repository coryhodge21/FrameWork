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

    // Convert Hardcoded Memory Maps Directory Path To String
    string MemoryMaps_PATH = PATH_TO_MEMMAPS_DIRECTORY;

    // Create File Parser
    FileParser fileParser;

    // Create File Writer
    FileWriter fileWriter;

    // Iterate through each file in given directory with directory iterator 'entry'
    for(const auto &entry : filesystem::directory_iterator(MemoryMaps_PATH)){

        // convert file path to string
        string filePath = entry.path();

        // skip hidden files
        // if file contains . before file name
        if ( filePath[SIZE_OF_MM_PATH_STR] == '.' ) {
            //continue to next file
            continue;
        }

        // parse file, build up modules data tree
        fileParser.parseFile(filePath);

        // copy _modules data tree to file writer
        fileWriter.setModules(fileParser.getModules());

        // while file writer modules vector is not empty
        while (!fileWriter.isEmpty()) {

            // write files to FrameWork Directory
            fileWriter.writeFiles();
        }
    } // end file iteration

    // exit success
    return 0;
}
