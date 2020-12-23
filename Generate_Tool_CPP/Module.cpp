//
// Created by Cory Hodge on 12/19/20.
//

#include "Module.h"

/**     CONSTRUCTOR / DESTRUCTOR       */

/// Constructor
Module::Module(string name, string address, string descriptor) :
    _name(name),
    _address(address),
    _descriptor(descriptor){
}

/// Destructor
Module::~Module() {

}

/**      REGISTER VECTOR FUNCTIONS     */

/// pop and destroy last element
void Module::popRegister() {
    this->_registers.pop_back();
}
//! \brief push register pointer onto register vector
void Module::pushRegister(Register *aRegister) {
    _registers.push_back(aRegister);
}

//! \brief return pointer to last register in register vector
Register *  Module::getLastRegister(void) {

    // size() : returns number of elements in vector
    return _registers[_registers.size() - 1];
}

//! \brief find register with this name in vector or rtn null ptr
Register * Module::getRegister(string nameRegister){

    // if _registers vector not empty
    if ( !_registers.empty()) {

        // for each register
        for (int i = 0; i < _registers.size(); i++) {

            // if name matches name of existing bit field
            // compare() : strings must be the same size && all characters match
            if (_registers[i]->getName().compare(nameRegister) == 0) {
                return _registers[i];
            }
        }
    }
    // if bit field not found
    return nullptr;
}

//! \brief create Register and push pointer onto Register Vector
Register * Module::createRegister(string nameRegister, string address, string descriptor){

    Register * newRegister = new Register(nameRegister, address, descriptor);
    //Register * newRegister = createRegister(nameRegister, address, descriptor);

    // push Bit Field onto Vector
    _registers.push_back(newRegister);

    // return pointer to new register
    return newRegister;
}

// check if registers vector empty
int Module::isEmpty(void){
    if(this->_registers.empty()) {
        return 1;
    }
    return 0;
}

/**     SETTERS / GETTERS       */

/// Get Name
const string &Module::getName() const {
    return _name;
}

/// Set Name
void Module::setName(const string &name) {
    _name = name;
}

/// Get Address
const string &Module::getAddress() const {
    return _address;
}

/// Set Address
void Module::setAddress(const string &address) {
    _address = address;
}

/// Get Descriptor
const string &Module::getDescriptor() const {
    return _descriptor;
}

/// Set Descriptor
void Module::setDescriptor(const string &descriptor) {
    _descriptor = descriptor;
}

/// return vector of Registers
const vector<Register *> &Module::getRegisters() const {
    return _registers;
}

/// assign this module a vector of registers
void Module::setRegisters(const vector<Register *> &registers) {
    _registers = registers;
}

/** Setters / Getters       */
