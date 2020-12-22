//
// Created by Cory Hodge on 12/19/20.
//

#ifndef GENERATE_TOOL_CPP_FILEWRITER_H
#define GENERATE_TOOL_CPP_FILEWRITER_H

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sys/stat.h>   // mkdir()

#include "Module.h"

#define PATH_TO_FRAMEWORK   "../../FrameWork/"

using namespace std;

class FileWriter {

private:

    // data tree
    vector<Module *> _modules;

    //! \brief output file stream
    ofstream _directoryFileStream;
    ofstream _moduleFileStream;
    ofstream _registerFileStream;
    ofstream _bitFieldFileStream;

    /**   Private:  File Writer Special Functions   */

    //! \brief  write file module
    // return string file path
    void writeModules(void);

    //! \brief write file register
    // return string file path
    void writeRegisters(Module * module, string modPath);

    //! \brief write bit fields as enums for parent register
    // return string file path
    void writeBitFields(Register * aRegister, string regPath);

    //! \brief writeModule
    void writeModule(Module * aModule);

    //! \brief writeModule
    void writeRegister(Register * aRegister);

    //! \brief writeModule
    void writeBitField(BitField * aBitField);

public:
    /**     CONSTRUCTOR / DESCTRUCTOR       */
    FileWriter();

    ~FileWriter();

    /**   Public :  File Writer Special Functions   */

    // write files using data tree
    int writeFiles(void);

    int writeFile(string path_to_file);

    // check if file writer data tree is empty
    int isEmpty(void);

    /**     SETTERS / GETTERS       */

    vector<Module *> &getModules(void);

    void setModules(vector<Module *> modules);
};


#endif //GENERATE_TOOL_CPP_FILEWRITER_H
