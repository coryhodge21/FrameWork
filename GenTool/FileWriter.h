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

    //! \brief RECURSIVE Functions
    void recursively_writeModules(void);
    void recursively_writeRegisters(void);
    void recursively_writeBitFields();

    //! \brief create directories and open files
    void create_Directory_h(void);
    void create_Module_Dir();
    void create_Module_h();
    void create_REGISTERS_Dir();
    void create_REGISTERS_h();
    void create_Register_Dir();
    void create_Register_h();
    void create_RegEnum_h();
    void create_Module_c();
    void create_Register_c();

    /// \brief Write the contents to a file
    void write_Module_h(void);
    void write_REGISTERS_h();
    void write_Register_h(Module * parentModule);
    void write_Register_enums();
    void write_Module_c();
    void write_Register_c();


    /**     Templates       */
    //! \brief Generic Header
    void template_Module_Header(Module * aModule);
    void template_Register_Header(Register * aRegister);
    void template_BitField_Header(Register * parentRegister);

    //! \brief Body
    void template_Module_Body(Module * aModule);
    void template_Register_Body(Module * parentModule);
    void template_BitField_Body(BitField * aBitFied);

    //! \brief Generic Footer
    void template_Module_Footer(Module * aModule);
    void template_Register_Footer(Register * aRegister);
    void template_BitField_Footer(Module * aModule);


};

#endif //GENERATE_TOOL_CPP_FILEWRITER_H
