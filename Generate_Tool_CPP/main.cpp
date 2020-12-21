#include <iostream>

#include "Register.h"
#include "FileParser.h"

using namespace std;

int main(int argc, char * argv[]) {

    // this program expects an input file to be passed in
    // from the calling source
    char input_file_path[] = "../hw_sysctl.h";
    char * input_string_p = input_file_path;

    // TODO: replace this with while( i < argc )
    FileParser fileParser;

    fileParser.parseFile(input_string_p);

    return 0;
}
