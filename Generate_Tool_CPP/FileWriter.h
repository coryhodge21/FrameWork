/**
 * \file : FileWriter.h
 * \author : Cory W. Hodge
 * \date : 12/19/20
 *
 * \brief This is the Clint Facing Interface for using a
 *      vector populated with Module pointers, to write
 *      the files of the Frame Work Library
 */

#ifndef GENERATE_TOOL_CPP_FILEWRITER_H
#define GENERATE_TOOL_CPP_FILEWRITER_H

#include <iostream>
#include <fstream>
#include <sys/stat.h>   // mkdir()
#include "Module.h"

// TODO : Move this to project common
#define PATH_TO_FRAMEWORK   "../../FrameWork/"

using namespace std;

class FileWriter {

public:

    /**     CONSTRUCTOR / DESCTRUCTOR       */
    FileWriter();

    ~FileWriter();

    /**  File Writer Special Functions   */

    //! \brief top level function for prepping the FrameWork directory
    //!        and calling recursive building functions
    int writeFiles(void);

    //! \brief check if file writer data tree is empty
    int isEmpty(void);

    /**     SETTERS / GETTERS       */

    //! \brief Assign Populate vector of modules
    void setModules(vector<Module *> modules);

private:

    //! \brief Array of Modules Created during File Parsing
    vector<Module *> _modules;

    //! \brief output file stream
    ofstream _directoryFileStream;
    ofstream _moduleFileStream;
    ofstream _registerFileStream;
    ofstream _bitFieldFileStream;

    /**   Private:  File Writer Special Functions   */

    //! \brief  write file module
    void writeModules(void);

    //! \brief write file register
    void writeRegisters(Module * module, string modPath);

    //! \brief write bit fields as enums for parent register
    void writeBitFields(Register * aRegister, string regPath);

    //! \brief writeModule
    void writeModule(Module * aModule);

    //! \brief writeModule
    void writeRegister(Register * aRegister);

    //! \brief writeModule
    void writeBitField(BitField * aBitField);

    //! \brief get the last module element in the vector
    Module * getLastModule(void);

    //! \brief destroy the last element in the vector
    void popModule(void);

    //! \brief Generic Header
    void template_Header(Module * aModule);
    void template_Header(Register * aRegister);
    void template_Header(BitField * aBitField);

    //! \brief Generic Footer
    void template_Footer(Module * aModule);
    void template_Footer(Register * aRegister);
    void template_Footer(BitField * aBitFied);

    //! \brief Module Header Body
    void template_Module_h(Module * aModule);

    //! \brief Register Header Body
    void template_Register_h(Register * aRegister);

    //! \brief BitField Header Body
    void template_BitField_h(BitField * aBitFied);
};

#endif //GENERATE_TOOL_CPP_FILEWRITER_H
