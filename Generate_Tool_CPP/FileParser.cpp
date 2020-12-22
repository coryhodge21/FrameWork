//
// Created by Cory Hodge on 12/19/20.
//

#include "FileParser.h"

/**      CONSTRUCTOR / DESTRUCTOR    */

/// Constructor
FileParser::FileParser(void) :
    _inputFileStream(),
    _charBuffer{0},
    _bufferIndex(0),
    _strBuffer(nullptr),
    _modules(),
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

/**      MODULE VECTOR FUNCTIONS     */

//! \brief push module onto module vector
void FileParser::pushModule(Module * aModule){
    _modules.push_back(aModule);
}

//! \brief return pointer to last module in vector
Module * FileParser::popModule() {
    // size() : returns number of elements in vector
    return _modules[_modules.size() - 1];
}

//! \brief find module with this name in vector or rtn null ptr
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

    Module aModule(nameModule, address, descriptor);
    Module * newModule = &aModule;

    // push Bit Field onto Vector
    _modules.push_back(newModule);

    return newModule;
}


/**      FILE PARSER SPECIAL FUNCTIONS    */

/// parse file
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

    /**     Obtain information from string      **/
    // extract tag, populate name fields
    this->extractTag();

    // extract hex code
    this->extractHexCode();

    // extract descriptor
    this->extractDescriptor();

    /* use collected data to create Module / Register / or Bit Field */

    /**    use File Parser members to create data packet     */

    // Check if Module with this name exists
    Module * aModule = this->getModule(_nameModule);

        // if it does not create it
        if ( aModule == nullptr ){
            aModule = createModule(_nameModule, _hexCode, _descriptor);
        }

        // if this is a module, exit here
        if(isModule()){
            return 1;
        }

    // check if register exists
    Register * aRegister = aModule->getRegister(_nameRegister);

        // if not create it
        if ( aRegister == nullptr ){
            aRegister = aModule->createRegister(_nameRegister, _hexCode, _descriptor);
        }

        // if this is a register, exit here
        if ( isRegister()){
            return 1;
        }

    // check if bit field exists
    BitField * aBitField = aRegister->getBitField(_nameBitField);

        // if it does not, create it
        if ( aBitField == nullptr ){
            aBitField = aRegister->createBitField(_nameBitField, _hexCode, _descriptor);
        }

    return 1;
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

/// get next line from input stream
void FileParser::getNextLine(void){

    // extract next line of file, place it in the buffer
    this->_inputFileStream.getline(_charBuffer, MAX_BUFFER_SIZE);

    if(!_inputFileStream.eof()) {

        // convert _charBuffer[] to string type
        _strBuffer.assign(_charBuffer);
    }

    // reset buffer index
    _bufferIndex = 0;
}

/// extract full tag from buffer
int FileParser::extractTag(void){

    // start from buffer index right past the end of the #define
    _bufferIndex = INDEX_END_OF_DEFINE;

    // skip any spaces before tag
    skipSpaces();

    // find index of last char in tag, count up to next occurrence of space
    int tag_length;
    while(_charBuffer[_bufferIndex] != ' ' && _bufferIndex < _strBuffer.size()){
        tag_length++;
    }

    // if no digit or no \, error
    if (_bufferIndex == _strBuffer.size()){
        while(1){
            cout << "ERROR: End of define line and no value or \\ char";
        }
        return 0;
    }

    // copy tag to _tag class member
    _tag = _strBuffer.substr(_bufferIndex, tag_length);

    // return success
    return 1;
}

/// extract hex code from buffer
int FileParser::extractHexCode(void){

    // reset buffer
    _bufferIndex = 0;

    // find position of first digit
    while( ! isValue(_strBuffer[_bufferIndex]) && _bufferIndex < _strBuffer.size()){
        _bufferIndex++;

        // if \ found, address on next line
        if(_strBuffer[_bufferIndex] == '\\'){
            // get next line and reset buffer
            getNextLine();
        }
    }
    // if no digit or no \, error
    if (_bufferIndex == _strBuffer.size()){
        while(1){
            cout << "ERROR: End of define line and no value or \\ char";
        }
        return 0;
    }

    // once digit is found, find position of first space ' '
    int value_length = _bufferIndex;
    while(_strBuffer[value_length] != ' ' && _bufferIndex < _strBuffer.size()){
        value_length++;
    }

    // copy value to _hexCode member
    _hexCode = _strBuffer.substr(_bufferIndex, value_length);

    // return success
    return 1;

}

/// extract descriptor from butter
int FileParser::extractDescriptor(void){


    // reset buffer
    _bufferIndex = 0;

    // find first occurrence of start of comment
    while( _strBuffer[_bufferIndex] != '/' && _bufferIndex < _strBuffer.size()){
        _bufferIndex++;

        // if \ found, comment on next line
        if(_strBuffer[_bufferIndex] == '\\'){
            // get next line and reset buffer
            getNextLine();
        }
    }

    // if no digit or no \, error
    if (_bufferIndex == _strBuffer.size()){
        while(1){
            cout << "ERROR: End of define line and no value or \\ char";
        }
        return 0;
    }

    // check that comment is not part of comment block
    if(_strBuffer[_bufferIndex + 2] == '*'){
        // TODO: handle comment block
        return 0;
    }

    // copy rest of line to comment descriptor
    _descriptor = _strBuffer.substr(_bufferIndex);

    // return success
    return 1;
}

/// check if tag is Module
int FileParser::isModule(void){

    // if substring of _BASE found, this is module base address
    if(_tag.find("_BASE")){
        return 1;
    }

    // else not a module base address
    return 0;
}
/// check if tag is Register
 int FileParser::isRegister(void){

    char underScore = '_';
    int count = 0;

    // if substring of _BASE found, this is module base address
    if(_tag.find("_BASE")){
        return 0;
    }

    // count number of _
    for (int i = 0; i < _tag.length(); i++) {
        if (_tag[i] == underScore) {
            count++;
        }
    }

    // more than 1 _ is a bit field
    if( count != 1 ){
        return 0;
    }

    // this is a register
    return 1;
 }

/// check if tag is bit field
int FileParser::isBitField(void){

    char underScore = '_';
    int count = 0;

    // count number of underscores
    for (int i = 0; i < _tag.length(); i++) {
        if (_tag[i] == underScore) {
            count++;
        }
    }

    // if less than 1 _ , then it is not a bitField
    if(count < 1){
        return 0;
    }

    // this is a bitField
    return 1;
}

/// check if value represents address or mask
int FileParser::isValue(char c){

    // range 0 to 9, decimal
    if( (c >= '0') && (c <= '9')){
        return 1;
    }
    // hex = 0x , binary = b0
    else if ( (c == 'x') || (c == 'b')){
        return 1;
    } else {
        return 0;
    }

}

const vector<Module *> &FileParser::getModules() const {
    return _modules;
}

void FileParser::setModules(const vector<Module *> &modules) {
    _modules = modules;
}

const string &FileParser::getTag() const {
    return _tag;
}

void FileParser::setTag(const string &tag) {
    _tag = tag;
}

const string &FileParser::getHexCode() const {
    return _hexCode;
}

void FileParser::setHexCode(const string &hexCode) {
    _hexCode = hexCode;
}

const string &FileParser::getDescriptor() const {
    return _descriptor;
}

void FileParser::setDescriptor(const string &descriptor) {
    _descriptor = descriptor;
}

const string &FileParser::getNameModule() const {
    return _nameModule;
}

void FileParser::setNameModule(const string &nameModule) {
    _nameModule = nameModule;
}

const string &FileParser::getNameRegister() const {
    return _nameRegister;
}

void FileParser::setNameRegister(const string &nameRegister) {
    _nameRegister = nameRegister;
}

const string &FileParser::getNameBitField() const {
    return _nameBitField;
}

void FileParser::setNameBitField(const string &nameBitField) {
    _nameBitField = nameBitField;
}







