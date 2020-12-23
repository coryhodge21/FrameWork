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

    /** _Directory.h        */
    // path to FrameWork Directory
    string frameWork_PATH = PATH_TO_FRAMEWORK;

    // In FrameWork/ create file "_Directory.h"
    this->_directoryFileStream.open(( frameWork_PATH + "_Directory.h"), std::ios::out);

    // check that the file was opened
    if( !this->_directoryFileStream.is_open()){
        cout << "ERROR Could not open file : " << (frameWork_PATH + "_Directory.h") << endl;
    }

    /**   while _modules vector not empty  */
    writeModules();

    // close directory stream
    this->_directoryFileStream.close();

    return 1;
}

/**   Private:  File Writer Special Functions   */

// write file module
void FileWriter::writeModules(void){

    // for each Module in the data tree
    while( ! this->isEmpty()) {

        /**     MODULE/ Directory    */
        // get pointer to last module in data tree
        // TODO: replace with this->getLastModule()
        Module * aModule = _modules[ _modules.size() - 1];

        // create path
        string modPath = PATH_TO_FRAMEWORK + aModule->getName();    // Mod

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

        // TODO: replace with this->popModule()
        // DESTROY MODULE
        _modules.pop_back();
    }

    // TODO: close file stream
    _moduleFileStream.close();
}


// write file register
void FileWriter::writeRegisters(Module * parentModule, string modPath){

    /**     MOD/REGISTERS/   Directory   */
    // each module must have at least one register
    // create path for registers Directory
    string regsDirPath = modPath + "/Registers";   // Mod/Registers

    // create directory Module/Registers
    if (mkdir(regsDirPath.c_str(), 0777) == -1) {
        cerr << "Error :  " << strerror(errno) << endl;
    }
    else {
        cout << "Directory created : " + regsDirPath;
    }

    // for each Register in Module tree
    while ( ! parentModule->isEmpty() ) {

        /**     REGISTERS/Register   Directory   */

        // get pointer to last register in module tree
        Register * aRegister = (parentModule->getLastRegister());

        // build directory path
        string regDirPath = regsDirPath + "/" + aRegister->getName();   // Mod/Registers/Reg

        // create directory Module/Registers/Register
        if (mkdir(regDirPath.c_str(), 0777) == -1) {
            cerr << "Error :  " << strerror(errno) << endl;
        }
        else {
            cout << "Directory created : " + regDirPath;
        }

        /**     REGISTER.h      */

        // create path to file
        string regFilePath = regDirPath + "/" + aRegister->getName()+ ".h";  // Mod/Registers/Reg.h

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
        writeBitFields(aRegister, regDirPath);

        // destroy register
        parentModule->popRegister();
    }

    // close file stream
    _registerFileStream.close();
}

// write bit fields as enums for parent register
// regPath : Mod/Registers/Reg
void FileWriter::writeBitFields(Register * parentRegister, string regDirPath){

    // one make 1 reg_enums file
    if (! parentRegister->isEmpty()){

        // get pointer to last bit field
        BitField * aBitField = (parentRegister->getLastBitField());

        /**     Reg_enums.h      */

        // create path to file
        string bfFilePath = regDirPath + "/" + parentRegister->getName() + "_enums.h";    // Mod/Registers/Reg_enums.h

        // create file Reg_enums.h
        _bitFieldFileStream.open((bfFilePath), std::ios::out);

        // check that the file was opened
        if( !this->_bitFieldFileStream.is_open()){
            cout << "ERROR Could not open file : " << bfFilePath << endl;
        }
    }
    // for each bit field in register tree
    while (! parentRegister->isEmpty()){

        // write file Register_enums.h ( append )
        writeBitField(parentRegister->getLastBitField());

        // destroy bitfield
        parentRegister->popBitField();
    }

    // close file stream
    _bitFieldFileStream.close();
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