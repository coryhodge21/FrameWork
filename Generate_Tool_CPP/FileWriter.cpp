//
// Created by Cory Hodge on 12/19/20.
//

#include "FileWriter.h"
using namespace std;

/**     CONSTRUCTOR / DESCTRUCTOR       */
FileWriter:: FileWriter() {

}
FileWriter:: ~FileWriter(){
    // TODO : Free data tree
}

/**     SETTERS / GETTERS       */

vector<Module *> &FileWriter::getModules(void) {
    return _modules;
}

void FileWriter::setModules(vector<Module *> modules) {
    _modules = modules;
}

/**   Public :  File Writer Special Functions   */

// check if file writer data tree is empty
int FileWriter::isEmpty(void) {

    // if no modules, data tree is empty
    if (this->_modules.empty()) {
        return 1;
    }
    return 0;
}

// write files using data tree
int FileWriter::writeFile(void){

    // create file, _Directory.h

    // for each Module in the data tree
    while( ! this->isEmpty()) {

        // get pointer to last module in data tree
        Module * aModule = *_modules.end();

        // create directory Module/

        // create directory Module/Registers/

        // for each Register in Module tree
        while ( ! aModule->isEmpty() ) {

            // create directory Module/Registers/Register


            // get pointer to last register in module tree
            Register * aRegister = (aModule->popRegister());

            // for each bit field in register tree
            while (! aRegister->isEmpty()){

                // get pointer to last bit field
                BitField * aBitField = (aRegister->popBitField());

                // write file for bit field, update _Directory.h
                string Reg_BF_PATH = writeBitField(aBitField);

                // TODO: destroy bitfield

            }

            // write file register.h, update _Directory.h

            // TODO: destroy register

        }

        // write file registers.h, update _Directory.h

        // write file module.h, update _Directory.h

        // destroy last Module
        _modules.pop_back();
    }
    return 1;
}

/**   Private:  File Writer Special Functions   */

// write file module
string FileWriter::writeModule(Module * aModule){

    return "path/to/file.h";
}

// write file register
string FileWriter::writeRegister(Register * aRegister){
    return "path/to/file.h";
}

// write bit fields as enums for parent register
string FileWriter::writeBitField(BitField * aBitField){
    return "path/to/file.h";
}