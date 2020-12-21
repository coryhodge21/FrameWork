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

    /**      REGISTER VECTOR FUNCTIONS     */

    //! \brief push
    void pushRegister(Register * aRegister);

    //! \brief pop
    Register * popRegister(void);

    //! \brief find
    Register * getRegister(string name);

    //! \brief create Register and push pointer onto Register Vector
    Register * createRegister(string name, string address, string descriptor);

    /**     Setters / Getters       */
    const string &getName() const;

    void setName(const string &name);

    const string &getAddress() const;

    void setAddress(const string &address);

    const string &getDescriptor() const;

    void setDescriptor(const string &descriptor);

    const vector<Register *> &getRegisters() const;

    void setRegisters(const vector<Register *> &registers);
};


#endif //GENERATE_TOOL_CPP_MODULE_H
