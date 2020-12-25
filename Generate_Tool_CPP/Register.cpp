//
// Created by Cory Hodge on 12/19/20.
//

#include "Register.h"
#define MAX_BITFIELDS_SIZE  200
/**     CONSTRUCTOR / DESTRUCTOR       */

/// Constructor
Register::Register(string name, string address, string descriptor) :
    _name(name),
    _address(address),
    _descriptor(descriptor){
}

/// Destructor
Register::~Register() {
    // TODO : deallocate memory and safe pointers
}

/**      BIT FIELD VECTOR FUNCTIONS     */

//! \brief
void Register::popBitField(void){
    this->_bitFields.pop_back();
}

//! \brief push bitfield onto register vector
void Register::pushBitField(BitField * aBitField){
    _bitFields.push_back(aBitField);
}

//! \brief return pointer to last bit field in register
BitField *  Register::getLastBitField(void){
    // size() : returns number of elements in vector
    return _bitFields[_bitFields.size() - 1];
}

//! \brief find register with this name in vector or rtn null ptr
BitField * Register::getBitField(string nameBitField){
    // for each bit field in vector
    for (int i = 0; i < _bitFields.size(); i++){

        // if name agr matches name of existing bit field, return pointer
        // compare() : strings must be the same size && all characters match
        if ( _bitFields[i]->getName().compare(nameBitField) == 0 ) {
            return _bitFields[i];
        }
    }
    // if bit field not found
    return nullptr;
}

//! \brief create Register and push its pointer onto Register Vector
BitField * Register::createBitField(string nameBitField, string mask, string descriptor){
    BitField * newBitField = new BitField(nameBitField, mask, descriptor);

    // push Bit Field onto Vector
    _bitFields.push_back(newBitField);

    return newBitField;
}

// check if bit fields vector empty
int Register::isEmpty(void){
    if(this->_bitFields.empty()) {
        return 1;
    }
    return 0;
}

/**     SETTERS / GETTERS       */

/// Get Name
const string &Register::getName() const {
    return _name;
}

string Register::getAddress() {
    return _address;
}


