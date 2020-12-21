//
// Created by Cory Hodge on 12/19/20.
//

#include "FileParser.h"

//using namespace std;

/**      CONSTRUCTOR / DESTRUCTOR    */

/// Constructor
FileParser::FileParser(void) :
    _inputFileStream(nullptr),
    _charBuffer{0},
    _bufferIndex(0),
    _strBuffer(nullptr),
    _modules{nullptr},
    _tag(nullptr),
    _hexCode(nullptr),
    _descriptor(nullptr),
    _nameModule(nullptr),
    _nameRegister(nullptr),
    _nameBitField(nullptr)
    {

}

/// Destructor
FileParser::~FileParser() {

}

/**      SETTERS / GETTERS          */


/**      MODULE VECTOR FUNCTIONS     */
/**      BIT FIELD VECTOR FUNCTIONS     */

//! \brief push bitfield onto register vector
void FileParser::pushModule(Module * aModule){
    _modules.push_back(aModule);
}

//! \brief retrun pointer to last module in vector
Module * FileParser::popModule() {

    // size() : returns number of elements in vector
    return _modules[_modules.size() - 1];
}

//! \brief find register with this name in vector or rtn null ptr
Module * FileParser::getModule(string nameModule){
    // for each bit field
    for (int i = 0; i < _modules.size(); i++){

        // if name matches name of existing bit field
        // compare() : strings must be the same size && all characters match
        if ( _modules[i]->getName().compare(nameModule) == 0 ) {
            return _modules[i];
        }
    }
    // if bit field not found
    return nullptr;
}

//! \brief create Module and push pointer onto Module Vector
Module * FileParser::createModule(string nameModule, string address, string descriptor){
    Module * newModule = createModule(nameModule, address, descriptor);

    // push Bit Field onto Vector
    _modules.push_back(newModule);

    return newModule;
}


/**      FILE PARSER SPECIAL FUNCTIONS    */

// parse file
vector<Module *> FileParser::parseFile(char * input_file_path) {

    // use the input file stream clas member to open the file
    //  in read only mode
    this->_inputFileStream.open(input_file_path, std::ios::in);

    // check that the file was opened
    if( !this->_inputFileStream.is_open()){
        cout << "ERROR Could not open file : " <<
             input_file_path << endl;
    }

    // until end of file is reached
    while (!_inputFileStream.eof()) {

        // extract first line of file, place it in the buffer
        _inputFileStream.getline(_charBuffer, MAX_BUFFER_SIZE);

        // convert _charBuffer[] to string type
        _strBuffer.assign(_charBuffer);

        // reset buffer
        _bufferIndex = 0;

        // extract needed info from stream and populate register
        this->parseString();
    }

    return this->_modules;
}

/// Parse String
// TODO: increase flexibility of incoming information
int FileParser::parseString() {

    // check if line begins with a #define
    if (_strBuffer[_bufferIndex] != '#') {

        // if not, get next line
        return 1;
    }

    // extract tag, populate name fields
    this->extractTag();

    // extract hex code
    this->extractHexCode();

    // extract descriptor
    this->extractDescriptor();

    /* use collected data to create Module / Register / or Bit Field */

    // if this is a module, it will have _BASE in the name
    if (this->isModule()) {

        // create pointer to Module type;
        Module *newModule;

        // check that module exists
        newModule = this->getModule(_nameModule);

        // if not, create
        if (newModule == nullptr) {
            newModule = createModule(_nameModule, _hexCode, _descriptor);
        }

        // push module onto Module Vector
        this->pushModule(newModule);

        // if this is a module, continue to next item
        return 1;
    }
    // this is a register
    else if (this->isRegister()) {

        // find parent Module
        Module *parentModule = this->getModule(_nameModule);

        // TODO: if no module exists, create it

        // create a new register object
        parentModule->createRegister(_nameRegister, _hexCode, _descriptor);

        return 1;
    }
    // this is a bit field
    else if (this->isBitField()) {

        // get parent module
        Module * parentModule = getModule(_nameModule);

        // get parent register
        Register * parentRegister = parentModule->getRegister(_nameRegister);

        // create bit field
        parentRegister->createBitField(_nameBitField, _hexCode, _descriptor);

        return 1;
    }
    // unknown
    else {
        // error, must be one of the above
        cout << "\n\n*** ERROR: DATA STREAM NOT COMPATIBLE***\n\n";
        return 0;
    }

    return 0;
}

/// Skip Spaces
void FileParser:: skipSpaces(void){
    while (_strBuffer[_bufferIndex] == ' ' && _strBuffer[_bufferIndex] != '\0') {
        _bufferIndex++;
    }
}

/// go to next space
void FileParser::goToNextSpace() {
    while (this->_strBuffer[this->_bufferIndex] != ' ' && this->_strBuffer[this->_bufferIndex] != '\0'){
        this->_bufferIndex++;
    }
}

///
void FileParser::getNextLine(void){

    // extract next line of file, place it in the buffer
    this->_inputFileStream.getline(_charBuffer, MAX_BUFFER_SIZE);

    if(!_inputFileStream.eof()) {

        // convert _charBuffer[] to string type
        _strBuffer.assign(_charBuffer);
    }
}

///
void FileParser::extractTag(void){
    // TODO:
}

///
void FileParser::extractHexCode(void){
    // TODO:
}

///
void FileParser::extractDescriptor(void){
    // TODO:
}

/// is Module
int FileParser::isModule(void){

    //TODO: implement
    return 1;
}
/// is Register
 int FileParser::isRegister(void){

    char underScore = '_';
    int count = 0;

    for (int i = 0; i < _tag.length(); i++) {
        if (_tag[i] == underScore) {
            count++;
        }
    }

    // if only 1 _ , then it is a register
    if(count == 1){
        return 1;
    }

    // else not a register
    return 0;
 }

/// is bit field
int FileParser::isBitField(void){

    char underScore = '_';
    int count = 0;

    for (int i = 0; i < _tag.length(); i++) {
        if (_tag[i] == underScore) {
            count++;
        }
    }

    // if more than 1 _ , then it is a bitField
    if(count > 1){
        return 1;
    }

    // else not a bitField
    return 0;
}
