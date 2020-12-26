//
// Created by Cory Hodge on 12/20/20.
//

#ifndef GENERATE_TOOL_CPP_MODULE_H
#define GENERATE_TOOL_CPP_MODULE_H

#include "Project_Common.h"
#include "Register.h"

using namespace std;

#define MAX_REGISTERS_SIZE 200

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

    /**      REGISTER VECTOR FUNCTIONS     */

    //! \brief pop last element and destroy
    void popRegister(void);

    //! \brief return pointer to last element
    Register * getLastRegister(void);

    //! \brief find
    Register * getRegister(string name);
    Register * getRegister(int atIndex);

    //! \brief create Register and push pointer onto Register Vector
    Register * createRegister(string name, string address, string descriptor);

    //! \brief get size of _registers vector
    //! size() returns # of elements
    int getRegisterSize(void);

    //! \brief check if vector is empty
    int isEmpty(void);

    /**     Setters / Getters       */

    //! \brief get
    const string &getName() const;

};


#endif //GENERATE_TOOL_CPP_MODULE_H
