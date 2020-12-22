//
// Created by Cory Hodge on 12/19/20.
//

#ifndef GENERATE_TOOL_CPP_FILEWRITER_H
#define GENERATE_TOOL_CPP_FILEWRITER_H

#include <fstream>
#include <string>
#include <vector>
#include "Module.h"

class FileWriter {

private:

    // data tree
    vector<Module *> _modules;

    // output stream
    ofstream _outStream;

    /**   Private:  File Writer Special Functions   */

    // write file module
    void writeModule();

    // write file register
    void writeRegister();

    // write bit fields as enums for parent register
    void writeBitField();

public:
    /**     CONSTRUCTOR / DESCTRUCTOR       */
    FileWriter();

    ~FileWriter();

    /**   Public :  File Writer Special Functions   */

    // write files using data tree
    int writeFile(void);

    // check if file writer data tree is empty
    int isEmpty(void);

    /**     SETTERS / GETTERS       */

    vector<Module *> &getModules(void);

    void setModules(vector<Module *> modules);
};


#endif //GENERATE_TOOL_CPP_FILEWRITER_H
