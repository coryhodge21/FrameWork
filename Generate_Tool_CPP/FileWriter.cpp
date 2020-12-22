//
// Created by Cory Hodge on 12/19/20.
//

#include "FileWriter.h"

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


    return 1;
}