//
// Created by Cory Hodge on 12/21/20.
//

#include "DEBUGGING.h"

int DEBUGGING::getModulesCreated() const {
    return modules_created;
}

void DEBUGGING::setModulesCreated(int modulesCreated) {
    modules_created = modulesCreated;
}

int DEBUGGING::getRegistersCreated() const {
    return registers_created;
}

void DEBUGGING::setRegistersCreated(int registersCreated) {
    registers_created = registersCreated;
}

int DEBUGGING::getBitFieldsCreated() const {
    return bitFields_created;
}

void DEBUGGING::setBitFieldsCreated(int bitFieldsCreated) {
    bitFields_created = bitFieldsCreated;
}
