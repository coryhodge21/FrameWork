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

class FileParser {

private:

    //! \brief input file stream
    ifstream _inputFileStream;

    //! \brief input buffer
    char _charBuffer[MAX_BUFFER_SIZE];

    //! \brief buffer index
    int _bufferIndex;

    //! \brief string class type input line from file
    string _strBuffer;

    //! \brief Vector of Modules (should only be 1 per file)
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

    /**      SETTERS / GETTERS          */


    /**      MODULE VECTOR FUNCTIONS     */

    //! \brief push
    void pushModule(Module * module);

    //! \brief pop
    Module * popModule(string name);

    //! \brief find
    Module * findModule(string name);

    //! \brief create
    Module * createModule(string name, string address, string descriptor);

    /**      FILE PARSER SPECIAL FUNCTIONS    */
    //! \brief Populate Registers array and return
    vector<Module *> parseFile(char * input_file_path);

    //! \brief parse string from line of input file
    int parseString(void);

    //! \brief skip spaces
    void skipSpaces(void);

    //! \brief continue to next space
    void goToNextSpace(void);

    //! \brief
    void getNextLine(void);

    //! \brief
    void extractTag(void);

    //! \brief
    void extractHexCode(void);

    //! \brief
    void extractDescriptor(void);

    //! \brief using full tag name determine if this is a Module
    //!         if the name has _BASE in it, it is a module memory field
    int isModule(void);

    //! \brief using full tag name determine if this is a Register
    int isRegister(void);

    //! \brief using full tag name determine if this is a Bit Field
    int isBitField(void);

};


#endif //GENERATE_TOOL_CPP_FILEPARSER_H
