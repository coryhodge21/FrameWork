//
// Created by Cory Hodge on 12/19/20.
//

#include "FileWriter.h"

/**     CONSTRUCTOR / DESTRUCTOR       */
FileWriter:: FileWriter() {

}

/// Ensure memory deallocated
FileWriter:: ~FileWriter(){

    // if modules vector is not empty
    if(!_modules.empty()){

        // for each module in _modules vector
        // starting from end of vector
        for(int i = _modules.size(); !_modules.empty(); i--){

            // Call module destructor
            _modules[i]->~Module();
        }
    }

    // close all file streams
    _directoryFileStream.close();
    _moduleFileStream.close();
    _registerFileStream.close();
    _bitFieldFileStream.close();
}

/**         CORE LOGIC          **/

/// prep FrameWork Directory and recursively build data tree
int FileWriter::writeFiles(void){

    /** Create _Directory.h
     *  and open _directoryFileStream
     */
    create_Directory_h();

    /**
     * RECURSIVELY
     * while _modules vector not empty
     * recursively build data tree
     */
    recursively_writeModules();

    /// close directory stream
    this->_directoryFileStream.close();

    /// return success
    return 1;
}

/// write file module
void FileWriter::recursively_writeModules(void){

    /// for each Module in the File Writer
    /// data tree (_modules)
    while( ! this->isEmpty()) {

        /// create directory ../FrameWork/Module
        create_Module_Dir();

        /// create Module.h &&
        /// open this->_moduleFileStream
        create_Module_h();

        /// Write the Module.h file
        write_Module_h();

        /// MODULE/REGISTERS/  general  Directory
        create_REGISTERS_Dir();

        ///    Create Registers.h file
        create_REGISTERS_h();
        // TODO : This also writes Registers.h
        // write_REGSITERS_h();

        /**
         * RECURSIVELY
         * Create //Registers directories
         * && write Registers.h
         * && write Register_enums.h
         */
        recursively_writeRegisters();

        /**    End Module Register Recursion */

        /// DESTROY MODULE
        popModule();

        /// close file stream
        _moduleFileStream.close();
    }
}

/// write file register
void FileWriter::recursively_writeRegisters(){

    /// get pointer to last module in module vector
    Module * parentModule = getLastModule();

    /// build path to module
    string modPath = PATH_TO_FRAMEWORK;
    modPath += parentModule->getName() + "/";

    /**   Specific Register Directory and .h
     *      for each Register in Module tree
     */
    while ( ! parentModule->isEmpty() ) {

        ///     Specific Register Directory
        create_Register_Dir();

        ///     Specific Register .h
        create_Register_h();

        ///   write register .h
        write_Register_h(parentModule);

        /// create register .c


        /// write register .c


        /**
         * REGISTER_enums.h
         * RECURSIVELY WRITE BIT FIELDS in Register_enums.h
         */
        recursively_writeBitFields();

        /** End Recursion of Bit Field Masking for this Register */


        /// destroy register
        parentModule->popRegister();

        /// close file stream
        _registerFileStream.close();
    }
}

/// write bit fields as enums for parent register
void FileWriter::recursively_writeBitFields(){

    /// Create Register_enums header
    create_RegEnum_h();

    /// write Register_enums .h
    write_Register_enums();
}

/// assign file writer a populated vector of Module *
void FileWriter::setModules(vector<Module *> modules) {
    _modules = modules;
}

/// check if file writer data vector is empty
int FileWriter::isEmpty(void) {

    // if no modules, data tree is empty
    if (this->_modules.empty()) {
        return 1;
    }
    return 0;
}

/// get last element of vector
Module * FileWriter::getLastModule(void){
    return _modules[ _modules.size() - 1];
}

//! destroy the last element in the vector
void FileWriter::popModule(void){
    _modules.pop_back();
}

/**     End Core Logic          **/




