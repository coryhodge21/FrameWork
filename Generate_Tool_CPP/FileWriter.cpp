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

//
int FileWriter::writeFiles(void){

    // path to FrameWork Directory
    string frameWork_PATH = PATH_TO_FRAMEWORK;

    // In FrameWork/ create file "_Directory.h"
    this->_directoryFileStream.open(( frameWork_PATH + "_Directory.h"), std::ios::out);

    // check that the file was opened
    if( !this->_directoryFileStream.is_open()){
        cout << "ERROR Could not open file : " << (frameWork_PATH + "_Directory.h") << endl;
    }

    // while _modules vector not empty
    writeModules();

    return 1;
}

/**   Private:  File Writer Special Functions   */

// write file module
void FileWriter::writeModules(void){

    // for each Module in the data tree
    while( ! this->isEmpty()) {

        /**     MODULE/     */
        // get pointer to last module in data tree
        Module aModule = *_modules.end();

        // create path
        string modPath = aModule->getName();    // Mod

        // create directory Module/
        if (mkdir(modPath.c_str(), 0777) == -1) {
            cerr << "Error :  " << strerror(errno) << endl;
        } else {
            cout << "Directory created : " + modPath;
        }

        /**       MODULE.h    */

        // build path to MODULE header file
        string modHeader_PATH = modPath;
        modHeader_PATH += "/";
        modHeader_PATH += aModule->getName();
        modHeader_PATH += ".h";

        // open for writing, or create if DNE
        this->_moduleFileStream.open((modHeader_PATH), std::ios::out);

        // check that the file was opened
        if( !this->_moduleFileStream.is_open()){
            cout << "ERROR Could not open file : " << modHeader_PATH << endl;
        }

        // WRITE MODULE.H
        writeModule(aModule);

        /**     RECURSIVELY WRITE REGISTER FILES     */
        // while Module register not empty, write registers
        writeRegisters(aModule, modPath);


        // TODO: DESTROY MODULE

        // TODO: close file strea
    }
}


// write file register
void FileWriter::writeRegisters(Module * parentModule, string modPath){

    /**     MOD/REGISTERS/      */
    // each module must have at least one register
    // create path for registers Directory
    string regsPath = modPath + "/Registers";   // Mod/Registers

    // create directory Module/Registers
    if (mkdir(regsPath.c_str(), 0777) == -1) {
        cerr << "Error :  " << strerror(errno) << endl;
    }
    else {
        cout << "Directory created : " + regsPath;
    }

    // for each Register in Module tree
    while ( ! parentModule->isEmpty() ) {

        /**     REGISTERS/Register      */

        // get pointer to last register in module tree
        Register * aRegister = (parentModule->popRegister());

        // build file path
        string regPath = regsPath + "/" + aRegister->getName();   // Mod/Registers/Reg

        // create directory Module/Registers/Register
        if (mkdir(regPath.c_str(), 0777) == -1) {
            cerr << "Error :  " << strerror(errno) << endl;
        }
        else {
            cout << "Directory created : " + regPath;
        }

        /**     REGISTER.h      */

        // create path to file
        string regFilePath = "/" + regPath + ".h";  // Mod/Registers/Reg.h

        // create file register.h (template starter file)
        _registerFileStream.open((regFilePath), std::ios::out);

        // check that the file was opened
        if( !this->_registerFileStream.is_open()){
            cout << "ERROR Could not open file : " << regFilePath << endl;
        }

        // write file register.h ( finish )
        writeRegister(aRegister);

        /**     RECURSIVELY WRITE BIT FIELD FILES FOR REGISTER.h     */
        // append all bit field enums
        writeBitFields(aRegister, regPath);

        // TODO: destroy register

        // TODO: close file stream
    }
}

// write bit fields as enums for parent register
// regPath : Mod/Registers/Reg
void FileWriter::writeBitFields(Register * parentRegister, string regPath){

    // for each bit field in register tree
    while (! parentRegister->isEmpty()){

        // get pointer to last bit field
        BitField * aBitField = (parentRegister->popBitField());

        /**     Reg_enums.h      */

        // create path to file
        string bfFilePath = "/" + regPath + "_enums.h";    // Mod/Registers/Reg_enums.h

        // create file Reg_enums.h
        _bitFieldFileStream.open((bfFilePath), std::ios::out);

        // check that the file was opened
        if( !this->_bitFieldFileStream.is_open()){
            cout << "ERROR Could not open file : " << bfFilePath << endl;
        }

        // write file Register_enums.h ( append )
        writeBitField(aBitField);

        // TODO: destroy bitfield

        // TODO: close file stream
    }
}

//! \brief writeModule
void FileWriter::writeModule(Module * aModule){

    _moduleFileStream << "writing to file \n";
    _moduleFileStream << aModule->getName();
    _moduleFileStream << "\n";
}

//! \brief writeModule
void FileWriter::writeRegister(Register * aRegister){
    _registerFileStream << "writing to file \n";
    _registerFileStream << aRegister->getName();
    _registerFileStream << "\n";
}

//! \brief writeModule
void FileWriter::writeBitField(BitField * aBitField){
    _bitFieldFileStream << "writing to file \n";
    _bitFieldFileStream << aBitField->getName();
    _bitFieldFileStream << "\n";
}