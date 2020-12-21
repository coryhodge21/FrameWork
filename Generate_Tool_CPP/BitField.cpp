//
// Created by Cory Hodge on 12/20/20.
//

#include "BitField.h"

BitField::BitField(const string &name, const string &mask, const string &descriptor) :
    _name(name),
    _mask(mask),
    _descriptor(descriptor)
{

}

BitField::~BitField() {

}

const string &BitField::getName() const {
    return _name;
}

void BitField::setName(const string &name) {
    _name = name;
}

const string &BitField::getMask() const {
    return _mask;
}

void BitField::setMask(const string &mask) {
    _mask = mask;
}

const string &BitField::getDescriptor() const {
    return _descriptor;
}

void BitField::setDescriptor(const string &descriptor) {
    _descriptor = descriptor;
}


