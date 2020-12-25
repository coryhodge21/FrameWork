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

    // TODO: remove this and take files as arguments
    // this program expects an input file to be passed in
    // from the calling source via argv[]
    char input_file_path[] = "../hw_sysctl.h";
    char * input_string_p = input_file_path;

    // parse file and build module, register, bit field tree
    FileParser fileParser;

    // use data tree to create files
    FileWriter fileWriter;

    /// TODO: replace this with while( i < argc ) where argc = is num of hw_ mem maps
    //  for (int i = 1; i < argc; i++ ) {

        // parse file, build up modules data tree
        fileParser.parseFile(input_string_p);

        // copy data tree to file writer
        fileWriter.setModules(fileParser.getModules());

        // while modules vector is not empty
        while (!fileWriter.isEmpty()) {

            // write files to FrameWork Directory
            fileWriter.writeFiles();
        }

    // }
    // exit success
    return 0;
}
