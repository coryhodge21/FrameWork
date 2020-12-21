//
// Created by Cory Hodge on 12/20/20.
//

#include "BitField.h"
/**     CONSTRUCTOR / DESTRUCTOR       */

/// Constructor
BitField::BitField(const string &name, const string &mask, const string &descriptor) :
    _name(name),
    _mask(mask),
    _descriptor(descriptor)
{

}

/// Destructor
BitField::~BitField() {

}

/**     SETTERS / GETTERS       */
/// Get Name
const string &BitField::getName() const {
    return _name;
}

/// Set Name
void BitField::setName(const string &name) {
    _name = name;
}

/// Get Mask
const string &BitField::getMask() const {
    return _mask;
}

/// Set Mask
void BitField::setMask(const string &mask) {
    _mask = mask;
}

/// Get Descriptor
const string &BitField::getDescriptor() const {
    return _descriptor;
}

/// Set Descriptor
void BitField::setDescriptor(const string &descriptor) {
    _descriptor = descriptor;
}


