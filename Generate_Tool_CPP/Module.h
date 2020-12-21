//
// Created by Cory Hodge on 12/20/20.
//

#ifndef GENERATE_TOOL_CPP_MODULE_H
#define GENERATE_TOOL_CPP_MODULE_H

#include <string>
#include <vector>
#include "Register.h"

using namespace std;

class Module {

private:
    ///! \brief Module Name
    string _name;

    //! \brief Module Base Address
    string _address;

    //! \brief descriptor
    string _descriptor;

    //! \brief Vector of Registers associated with this Module
    vector<Register *> _registers;

public:

    /**      CONSTRUCTOR / DESCTRUCTOR       */

    //! \brief Constructor
    Module(string name, string address, string descriptor);

    //! \brief Destructor
    virtual ~Module();

    /**      SETTERS / GETTERS       */

    //! \brief


    //! \brief

    //! \brief

    /**      REGISTER VECTOR FUNCTIONS     */

    //! \brief push
    void pushRegister(Register * aRegister);

    //! \brief pop
    Register * popRegister(string name);

    //! \brief find
    Register * findRegister(string name);

    //! \brief create Register and push pointer onto Register Vector
    Register * createRegister(string name, string address, string descriptor);

    /**      MODULE SPECIAL FUNCTIONS       */

    //! \brief push

    //! \brief pop

    //! \brief find
    Register * findRegister(string regName);

    //! \brief create

};


#endif //GENERATE_TOOL_CPP_MODULE_H
