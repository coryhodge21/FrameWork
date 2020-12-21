//
// Created by Cory Hodge on 12/19/20.
//

#include "Module.h"

Module::Module(string name, string address, string descriptor) :
    _name(name),
    _address(address),
    _descriptor(descriptor),
    _registers{0}
{
}

Module::~Module() {

}

/**      REGISTER VECTOR FUNCTIONS     */

//! \brief push bitfield onto register vector
void Module::pushRegister(Register *aRegister) {
    _registers.push_back(aRegister);
}

//! \brief retrun pointer to last bit field in register
Register *  Module::popRegister(void) {

    // size() : returns number of elements in vector
    return _registers[_registers.size() - 1];
}

//! \brief find register with this name in vector or rtn null ptr
Register * Module::getRegister(string nameRegister){
    // for each bit field
    for (int i = 0; i < _registers.size(); i++){

        // if name matches name of existing bit field
        // compare() : strings must be the same size && all characters match
        if ( _registers[i]->getName().compare(nameRegister) == 0 ) {
            return _registers[i];
        }
    }
    // if bit field not found
    return nullptr;
}

//! \brief create Register and push pointer onto Register Vector
Register * Module::createRegister(string nameRegister, string address, string descriptor){
    Register * newRegister = createRegister(nameRegister, address, descriptor);

    // push Bit Field onto Vector
    _registers.push_back(newRegister);

    return newRegister;
}

const string &Module::getName() const {
    return _name;
}

void Module::setName(const string &name) {
    _name = name;
}

const string &Module::getAddress() const {
    return _address;
}

void Module::setAddress(const string &address) {
    _address = address;
}

const string &Module::getDescriptor() const {
    return _descriptor;
}

void Module::setDescriptor(const string &descriptor) {
    _descriptor = descriptor;
}

const vector<Register *> &Module::getRegisters() const {
    return _registers;
}

void Module::setRegisters(const vector<Register *> &registers) {
    _registers = registers;
}

/** Setters / Getters       */
