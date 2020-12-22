//
// Created by Cory Hodge on 12/19/20.
//

#include "FileParser.h"

/**      CONSTRUCTOR / DESTRUCTOR    */

/// Constructor
FileParser::FileParser(void) :
    _bufferIndex(0){

}

/// Destructor
FileParser::~FileParser() {
    // TODO : free data, or free in file writer
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

    // if _modules vector not empty
    if ( !_modules.empty()) {

        // for each bit field
        for (int i = 0; i < _modules.size(); i++) {

            // if name matches name of existing bit field
            // compare() : strings must be the same size && all characters match
            if (_modules[i]->getName().compare(nameModule) == 0) {
                return _modules[i];
            }
        }
    }

    // if bit field not found
    return nullptr;
}

//! \brief create Module and push pointer onto Module Vector
Module * FileParser::createModule(string nameModule, string address, string descriptor){

    Module * newModule = new Module(nameModule, address, descriptor);

    // push Bit Field onto Vector
    _modules.push_back(newModule);

    return newModule;
}


/**      FILE PARSER SPECIAL FUNCTIONS    */

/// parse file
vector<Module *> FileParser::parseFile(char * input_file_path) {

    // use the input file stream class member to open the file
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

    /**     Determin if valid input     **/

    // check if line begins with a #define
    if (_strBuffer[_bufferIndex] != '#') {

        // if not, get next line
        return 0;
    }


    /**     Obtain information from string      **/

    // extract tag, hex code, and descriptor
    this->extractData();
    this->setNameFields();

    /**    use File Parser members to create data packet     */

    // Check if Module with this name exists
    Module * aModule = this->getModule(_nameModule);

        // if it does not, create it
        if ( aModule == nullptr ){
            aModule = createModule(_nameModule, _hexCode, _descriptor);
        }

        // if this is a module, exit here
        if(isModule()){
            return 1;
        }

    // check if register exists
    Register * aRegister = aModule->getRegister(_nameRegister);

        // if not, create it
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

    // Iterators
    int tag_size, tag_end;

    // start from buffer index right past the end of the #define
    _bufferIndex = INDEX_END_OF_DEFINE;

    // skip any spaces before tag
    skipSpaces();

    // bufferIndex has incremented to start of tag
    tag_end = _bufferIndex;
    // find index of last char in tag, count up to next occurrence of space
    while(_strBuffer[tag_end] != ' ' && (tag_end) < _strBuffer.length()){
        tag_end++;
    }

    // if end of line reached without a space, there is an error
    if ((tag_end)  == _strBuffer.length()){
        int x = 0;
        x++;
        int breakpoint = x;

        while(1){
            cout << "ERROR: End of define line and no value or \\ char";
        }
        return 0;
    }

    // subtract end position from starting position to get size
    tag_size = ( tag_end - _bufferIndex);

    // else copy tag to _tag class member
    _tag = _strBuffer.substr(_bufferIndex, tag_size);

    // increment buffer past tag
    _bufferIndex = tag_end;

    // return success
    return 1;
}

/// extract hex code from buffer
///  this should only be called after extractTag
int FileParser::extractHexCode(void){

    int value_end, value_size;

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

        return -1;

        while(1){
            cout << "ERROR: End of define line and no value or \\ char";
        }
    }

    // once digit is found, find position of first space ' '
    value_end = _bufferIndex;
    // find index of end of value
    while(_strBuffer[value_end] != ' ' && value_end < _strBuffer.size()){
        value_end++;
    }
    // subtract from starting index to get size
    value_size = ( value_end - _bufferIndex);

    // copy value to _hexCode member
    _hexCode = _strBuffer.substr(_bufferIndex, value_size);

    // increment buffer past value
    _bufferIndex = value_end;

    // return success
    return 1;

}

/// extract descriptor from butter
int FileParser::extractDescriptor(void){

    // find first occurrence of start of comment
    while( _strBuffer[_bufferIndex] != '/' && _bufferIndex < _strBuffer.size()){
        _bufferIndex++;

        // if \ found, comment on next line
        if(_strBuffer[_bufferIndex] == '\\'){
            // get next line and reset buffer
            getNextLine();
        }
    }

    // if no '/' start of comment, or no '\' escape char, error
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

/// extract all data
int FileParser::extractData(void){

    extractTag();

    if ( extractHexCode() == -1) {
        // breakpoint
    }

    extractDescriptor();

    return 1;
}

/// check if tag is Module
int FileParser::isModule(void){

    // if substring of _BASE not found, this is not a module_BASE_ADDRESS define
    if( ( _tag.find("_BASE") ) == -1){
        return 0;
    }

    // else _BASE found in tag, this is a module type
    return 1;
}
/// check if tag is Register
 int FileParser::isRegister(void){

    char underScore = '_';
    int count = 0;

    // if substring of _BASE found, this is module base address
    // -1 = not found
    // n = position of match begin in string
    if(_tag.find("_BASE") != -1){    // _BASE not not found
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

/**     SETTERS / GETTERS       **/

const string &FileParser::getHexCode() const {
    return _hexCode;
}

const string &FileParser::getDescriptor() const {
    return _descriptor;
}

const string &FileParser::getNameModule() const {
    return _nameModule;
}

const string &FileParser::getNameRegister() const {
    return _nameRegister;
}

const string &FileParser::getNameBitField() const {
    return _nameBitField;
}

/// copy tag up to first _
int FileParser::setNameModule(void) {

    // find index of first _
    int modName_end = _tag.find('_');

    // if _ not found
    if ( modName_end == -1){
        return 0;
    }
    // else underscore found
    // copy index from 0 up to last element before _
    _nameModule = _tag.substr(0, modName_end);

    return 1;
}

int FileParser::setNameRegister(void) {

    // find index of first _
    int modName_end = _tag.find('_');

    // if _ not found, make sure module name is not end of string
    if ( modName_end == -1 || modName_end == _tag.length()){
        // no module name, or only module name
        return 0;
    }

    // register name, find next _
    int regName_end = _tag.find('_', modName_end + 2);

    // if no second _
    if ( regName_end == -1){

        // discard _ , copy rest of string
        _nameRegister = _tag.substr(modName_end + 1);
        return 1;
    }

    // if second _ found, copy up to this point
    _nameRegister = _tag.substr(modName_end + 1, (regName_end - (modName_end + 1)));
    return 1;
}

int FileParser::setNameBitField(void) {

    // find index of end of module name  ( after 1st _ )
    int modName_end = _tag.find('_');
    if ( modName_end == -1){
        return 0;
    }
    // find index of end of register name  ( after 2nd _ )
    int regName_end = _tag.find('_', modName_end + 1);
    if ( regName_end == -1){
        return 0;
    }

    // copy rest of string
    _nameBitField = _tag.substr(regName_end + 1);

    return 1;
}

void FileParser::setNameFields(void){
    this->setNameModule();
    this->setNameRegister();
    this->setNameBitField();
}

const vector<Module *> &FileParser::getModules() const {
    return _modules;
}

void FileParser::setModules(const vector<Module *> &modules) {
    _modules = modules;
}
