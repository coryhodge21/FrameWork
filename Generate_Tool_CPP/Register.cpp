//
// Created by Cory Hodge on 12/19/20.
//

#include "Register.h"

Register::Register(void) :
    name(),
    Base_Address(),
    BitFields()
    {
}

Register::~Register() {

}

const string &Register::getName() const {
    return name;
}

void Register::setName(const string &name) {
    Register::name = name;
}

const string &Register::getBaseAddress() const {
    return Base_Address;
}

void Register::setBaseAddress(const string &baseAddress) {
    Base_Address = baseAddress;
}

const vector<BitField *> &Register::getBitFields() const {
    return BitFields;
}

void Register::setBitFields(const vector<BitField *> &bitFields) {
    BitFields = bitFields;
}

void Register::appendBitField(BitField * bitField_p){
    this->BitFields.push_back(bitField_p);
}