//
// Created by Cory Hodge on 12/20/20.
//

#ifndef GENERATE_TOOL_CPP_MODULE_H
#define GENERATE_TOOL_CPP_MODULE_H

#include <string>
#include <vector>
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

    //! \brief push
    void pushRegister(Register * aRegister);

    //! \brief pop
    Register * popRegister(void);

    //! \brief find
    Register * getRegister(string name);

    //! \brief create Register and push pointer onto Register Vector
    Register * createRegister(string name, string address, string descriptor);

    /**     Setters / Getters       */

    //! \brief get
    const string &getName() const;

    //! \brief set name
    void setName(const string &name);

    //! \brief get address
    const string &getAddress() const;

    //! \brief set address
    void setAddress(const string &address);

    //! \brief get descriptor
    const string &getDescriptor() const;

    //! \brief set descriptor
    void setDescriptor(const string &descriptor);

    //! \brief get vector of Registers
    const vector<Register *> &getRegisters() const;

    //! \brief assign this register a vector of Regsiters
    void setRegisters(const vector<Register *> &registers);
};


#endif //GENERATE_TOOL_CPP_MODULE_H
