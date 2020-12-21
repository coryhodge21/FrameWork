//
// Created by Cory Hodge on 12/20/20.
//

#include "BitField.h"

BitField::BitField(const string &name) : name(name) {}

BitField::~BitField() {

}

const string &BitField::getName() const {
    return name;
}

void BitField::setName(const string &name) {
    BitField::name = name;
}

const string &BitField::getMask() const {
    return mask;
}

void BitField::setMask(const string &mask) {
    BitField::mask = mask;
}

const string &BitField::getDescriptor() const {
    return descriptor;
}

void BitField::setDescriptor(const string &descriptor) {
    BitField::descriptor = descriptor;
}
