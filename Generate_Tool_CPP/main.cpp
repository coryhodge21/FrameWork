

#include <iostream>
#include "DEBUGGING.h"
#include "Register.h"
#include "FileParser.h"
#include "FileWriter.h"

using namespace std;


int main(int argc, char * argv[]) {

    // this program expects an input file to be passed in
    // from the calling source
    char input_file_path[] = "../hw_sysctl.h";
    char * input_string_p = input_file_path;

    // parse file and build module, register, bit field tree
    FileParser fileParser;

    // use data tree to create files
    FileWriter fileWriter;

    /// TODO: replace this with while( i < argc )

    // parse file
    fileParser.parseFile(input_string_p);

    // copy data tree to file writer
    fileWriter.setModules( fileParser.getModules() );

    // write files
    while (!fileWriter.isEmpty()){

        // TODO : implement file writer
        fileWriter.writeFile();
    }

    // exit success
    return 0;
}
