//
// Created by Cory Hodge on 12/24/20.
//

#include "FileWriter.h"

/// create _directory header file
void FileWriter::create_Directory_h(){

    /// path to FrameWork Directory
    string frameWork_PATH = PATH_TO_FRAMEWORK;

    /// In FrameWork/ create file "_Directory.h"
    this->_directoryFileStream.open(( frameWork_PATH + "_Directory.h"), std::ios::out);

    /// check that the file was opened
    if( !this->_directoryFileStream.is_open()){
        cout << "ERROR Could not open file : " << (frameWork_PATH + "_Directory.h") << endl;
    }
}

/// Create Directory for Module
void FileWriter::create_Module_Dir(){

    /// get pointer to last module in data tree
    Module * aModule = getLastModule();

    /// create path ../fwdir/Mod
    string modPath = PATH_TO_FRAMEWORK + aModule->getName();

    /// create directory Module/
    if (mkdir(modPath.c_str(), 0777) == -1) {
        cerr << "Error :  Could not open Directory" << strerror(errno) << endl;
    }
}

/// Create Module.h File
void FileWriter::create_Module_h(){

    /// get pointer to last module in data tree
    Module * aModule = getLastModule();

    /// build path to MODULE header file  "PATH/ModName/ModName.h
    string modHeader_PATH = PATH_TO_FRAMEWORK; //../FrameWork/
    modHeader_PATH += aModule->getName()       // Module
                      + "/"                      //
                      + aModule->getName()       //
                      + ".h";                    // /Module.h

    /// open for writing, or create if DNE
    this->_moduleFileStream.open((modHeader_PATH), std::ios::out);

    /// check that the file was opened
    if( !this->_moduleFileStream.is_open()){
        cout << "ERROR Could not open file : " << modHeader_PATH << endl;
    }
}

void FileWriter::create_REGISTERS_Dir(){

    // get pointer to last module in data tree
    Module * aModule = getLastModule();

    string modPath = PATH_TO_FRAMEWORK;
    modPath += "/" + aModule->getName();

    /// create REGISTERS_PATH : "../../FrameWork/Mod/Registers
    string REGISTERS_DIR_PATH = modPath + "/Registers";   // Mod/Registers

    /// create directory Module/Registers
    if (mkdir(REGISTERS_DIR_PATH.c_str(), 0777) == -1) {
        cerr << "Error :  Could not create Registers/" << strerror(errno) << endl;
    }
}

/// Create Registers.h File,
/// including all the registers in the module
void FileWriter::create_REGISTERS_h(){

    /// get pointer to last module in data tree
    Module * aModule = getLastModule();

    /// Build Path
    /// ../FrameWork/Module/Registers.h
    string REGISTERS_H_PATH = PATH_TO_FRAMEWORK; // ../FrameWork/
    REGISTERS_H_PATH += aModule->getName()       // Module
                        + "/Registers.h";        // /Registers.h
    // open file stream
    ofstream registersFileStream;
    registersFileStream.open(REGISTERS_H_PATH, std::ios::out);

    // check that the file was opened
    if( !registersFileStream.is_open()){
        cout << "ERROR Could not open file : " << REGISTERS_H_PATH << endl;
    }

    /// write the register.h file (this is the only write call made inside a create call) TODO: Move when file stream decided
    /**           TODO : Function : Write Registers.h   */
    registersFileStream << "/***************\n";
    registersFileStream << "* \\file : Registers.h\n";
    registersFileStream << "* \\author : Cory W. Hodge\n";
    registersFileStream << "* \\brief : auto generated file\n";
    registersFileStream << "***************/\n\n";

    registersFileStream << "#ifndef _REGISTERS_H_\n";
    registersFileStream << "#define _REGISTERS_H_\n\n";

    /**
     * Generate #include's for each register
     */
    for( int i = 0; i < aModule->getRegisterSize(); i++){
        registersFileStream << "#include \""                            // #include "
                                << "Registers/"                        // /Registers/
                                << aModule->getRegister(i)->getName()   // RegName
                                << "/"                                  // /
                                << aModule->getRegister(i)->getName()   // RegName
                                <<".h\" \n";                            // .h"

        // append to directory file
        _directoryFileStream << "#include \""                           // #include "
                                << aModule->getName()                   // Module
                                << "/Registers/"                        // /Registers/
                                << aModule->getRegister(i)->getName()   // RegName
                                << "/"                                  // /
                                << aModule->getRegister(i)->getName()   // RegName
                                <<".h\" \n";                            // .h"
    }

    registersFileStream << "\n";
    registersFileStream << "#endif // _REGISTERS_H_\n";


}

/// Create Registers/ for all module registers
void FileWriter::create_Register_Dir(){

    /// get pointer to last module in data tree
    Module * parentModule = getLastModule();

    /// get pointer to last register in parent module tree
    Register * aRegister = (parentModule->getLastRegister());

    /// build directory path :  "../../FrameWork/Mod/Registers/RegName"
    string regDirPath = PATH_TO_FRAMEWORK; // ../FrameWork/
    regDirPath += parentModule->getName()  // Module
                  + "/Registers/"            // /Registers/
                  + aRegister->getName();    // RegName

    /// create directory Module/Registers/Register
    if (mkdir(regDirPath.c_str(), 0777) == -1) {
        cerr << "Error :  " << strerror(errno) << endl;
    }
}

/// Create Register.h , This is a specific register
/// that belongs to a parent module
void FileWriter::create_Register_h(){

    /// get pointer to last module in data tree
    Module * parentModule = getLastModule();

    /// get pointer to last register in module tree
    Register * aRegister = (parentModule->getLastRegister());

    /// build Register h path :  "../../FrameWork/Mod/Registers/RegName/Mod_RegName.h"
    string regFilePath = PATH_TO_FRAMEWORK;  // ../FrameWork/
    regFilePath += parentModule->getName()   // Module
                   + "/Registers/"           // /Registers/
                   + aRegister->getName()    // RegName
                   + "/"                     // /
                   + parentModule->getName() // Mod
                   + "_"                     // _
                   + aRegister->getName()    // RegName
                   + ".h";                   // .h

    /// create file register.h (template starter file)
    _registerFileStream.open( regFilePath, std::ios::out);

    // check that the file was opened
    if( !this->_registerFileStream.is_open()){
        cout << "ERROR Could not open file : " << regFilePath << endl;
    }
}

/// Create Register_enums.h
/// This is a set of enumerations unique to the
/// parent register
void FileWriter::create_RegEnum_h(){

    /// get pointer to last module in data tree
    Module *parentModule = getLastModule();

    /// get pointer to last register in module tree
    Register *parentRegister = (parentModule->getLastRegister());

    /// if this register has bif fileds to convert to enums
    if (! parentRegister->isEmpty()) {

        /// create Path enum : ../FrameWork/Mod/Registers/RegName/Register_enums.h
        string regEnum_Path = PATH_TO_FRAMEWORK;    // ../FrameWork/
        regEnum_Path += parentModule->getName()     // Module
                        + "/Registers/"               // /Registers/
                        + parentRegister->getName()   // RegName
                        + "/"                         // /
                        + parentModule->getName()     // Mod
                        + "_"                         // _
                        + parentRegister->getName()   // RegName
                        + "_enums.h";                 // _enums.h

        /// create file Reg_enums.h
        _bitFieldFileStream.open(regEnum_Path, std::ios::out);

        /// check that the file was opened
        if (!this->_bitFieldFileStream.is_open()) {
            cout << "ERROR Could not open file : " << regEnum_Path << endl;
        }
    }
}

/// Create the Module.c file
void FileWriter::create_Module_c(){

    /// get pointer to last module in data tree
    Module * aModule = getLastModule();

    /// create Path enum : ../FrameWork/Mod/Module.c
    string mod_c_Path = PATH_TO_FRAMEWORK;    // ../FrameWork/
    mod_c_Path += aModule->getName()          // Module
            + "/"                             // /
            + aModule->getName()              // ModName
            + ".c";                           // .c

    /// create file Reg_enums.h
    _moduleFileStream.open(mod_c_Path, std::ios::out);

    /// check that the file was opened
    if (!this->_bitFieldFileStream.is_open()) {
        cout << "ERROR Could not open file : " << mod_c_Path << endl;
    }

}

/// Create Register.c file
void FileWriter::create_Register_c(){

    /// get pointer to last module in data tree
    Module * aModule = getLastModule();
    string regName = aModule->getLastRegister()->getName();

    /// create Path enum : ../FrameWork/Module/REGISTERS/Register/Register.c
    string reg_c_Path = PATH_TO_FRAMEWORK;      // ../FrameWork/
    reg_c_Path += aModule->getName()            // Module
                  + "/Registers/"               // /Registers/
                  + regName                     // RegName
                  + "/"                         // /
                  + aModule->getName()          // Mod
                  + "_"                         // _
                  + regName                     // RegName
                  +".c";                        // .c

    /// create file Reg_enums.h
    _registerFileStream.open(reg_c_Path, std::ios::out);

    /// check that the file was opened
    if (!this->_registerFileStream.is_open()) {
        cout << "ERROR Could not open file : " << reg_c_Path << endl;
    }
}