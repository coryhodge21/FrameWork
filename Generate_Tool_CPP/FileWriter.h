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

#include "Project_Common.h"
#include <sys/stat.h>   // mkdir()
#include "Module.h"

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

    //! \brief get the last module element in the vector
    Module * getLastModule(void);

    //! \brief destroy the last element in the vector
    void popModule(void);

    //! \brief  write file module
    void writeModules(void);

    //! \brief write file register
    void writeRegisters(void);

    //! \brief write bit fields as enums for parent register
    void writeBitFields();

    //! \brief writeModule
    void writeModule(void);

    //! \brief writeModule
    void writeRegister(Register * aRegister);

    //! \brief writeModule
    void writeBitField(BitField * aBitField);

    //! \brief create directory for module
    void create_Directory_h(void);
    void create_Module_Dir();
    void create_Module_h();
    void create_REGISTERS_Dir();
    void create_REGISTERS_h();
    void create_Register_Dir();
    void create_Register_h();
    void create_RegEnum_h();
    void create_Register_enums();

    //! \brief Generic Header
    void template_Header_Module(Module * aModule);
    void template_Header_Register(Register * aRegister);
    void template_Header_BitField(Register * parentRegister);

    //! \brief Generic Footer
    void template_Footer_Module(Module * aModule);
    void template_Footer_Register(Register * aRegister);
    void template_Footer_BitField();

    //! \brief Module Header Body
    void template_Module_h(Module * aModule);

    //! \brief Register Header Body
    void template_Register_h(Register * aRegister);

    //! \brief BitField Header Body
    void template_BitField_h(BitField * aBitFied);
};

#endif //GENERATE_TOOL_CPP_FILEWRITER_H
