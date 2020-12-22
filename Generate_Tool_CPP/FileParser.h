//
// Created by Cory Hodge on 12/19/20.
//

#ifndef GENERATE_TOOL_CPP_FILEPARSER_H
#define GENERATE_TOOL_CPP_FILEPARSER_H

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Module.h"

using namespace std;

#define MAX_BUFFER_SIZE  85
#define INDEX_END_OF_DEFINE 7

class FileParser {

private:

    //! \brief input file stream
    ifstream _inputFileStream;

    //! \brief input buffer as character array
    char _charBuffer[MAX_BUFFER_SIZE];

    //! \brief buffer index
    int _bufferIndex;

    //! \brief input buffer as string
    string _strBuffer;

    //! \brief Vector of Modules
    vector<Module *> _modules;

    //! \brief string for holding full tag name
    string _tag;

    //! \brief string for holding address/mask
    string _hexCode;

    //! \brief string for holding descriptor
    string _descriptor;

    //! \brief string for holding Module portion of tag
    string _nameModule;

    //! \brief string for holding Register portion of tag
    string _nameRegister;

    //! \brief string for holding Bit Field portion of tag
    string _nameBitField;

public:

    /**      CONSTRUCTOR / DESTRUCTOR    */
    //! \brief Constructor
    FileParser();

    //! \brief Destructor
    virtual ~FileParser();

    /**      MODULE VECTOR FUNCTIONS     */

    //! \brief push
    void pushModule(Module * aModule);

    //! \brief pop
    Module * popModule(void);

    //! \brief get
    Module * getModule(string nameModule);

    //! \brief create
    Module * createModule(string nameModule, string address, string descriptor);

    /**      FILE PARSER SPECIAL FUNCTIONS    */
    //! \brief Populate Registers array and return
    vector<Module *> parseFile(char * input_file_path);

    //! \brief parse string from line of input file
    int parseString(void);

    //! \brief skip spaces
    void skipSpaces(void);

    //! \brief continue to next space
    void goToNextSpace(void);

    //! \brief continue parsing on next line
    void getNextLine(void);

    //! \brief extract the tag from current buffer
    int extractTag(void);

    //! \brief extract hex code from current buffer
    int extractHexCode(void);

    //! \brief extract descriptor from current buffer
    int extractDescriptor(void);

    //! \brief using full tag name determine if this is a Module
    //!         if _tag has _BASE in it, it is a module
    int isModule(void);

    //! \brief using full tag name determine if this is a Register
    //! \brief  if _tag has 1 _ and no '_BASE' in the name, it is a register
    int isRegister(void);

    //! \brief using full tag name determine if this is a Bit Field
    //!         if _tag has more than 1 _ , it is a bit field
    int isBitField(void);

    //! \brief if character at index is [0:9] or [x,b] this is
    //!         part of an address or mask
    int isValue(char c);

    /**      SETTERS / GETTERS          */

    //! \brief
    const vector<Module *> &getModules() const;

    //! \brief
    void setModules(const vector<Module *> &modules);

    //! \brief
    const string &getTag() const;

    //! \brief
    void setTag(const string &tag);

    //! \brief
    const string &getHexCode() const;

    //! \brief
    void setHexCode(const string &hexCode);

    //! \brief
    const string &getDescriptor() const;

    //! \brief
    void setDescriptor(const string &descriptor);

    //! \brief
    const string &getNameModule() const;

    //! \brief
    void setNameModule(const string &nameModule);

    //! \brief
    const string &getNameRegister() const;

    //! \brief
    void setNameRegister(const string &nameRegister);

    //! \brief
    const string &getNameBitField() const;

    //! \brief
    void setNameBitField(const string &nameBitField);

};


#endif //GENERATE_TOOL_CPP_FILEPARSER_H
