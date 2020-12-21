//
// Created by Cory Hodge on 12/19/20.
//

#ifndef GENERATE_TOOL_CPP_REGISTER_H
#define GENERATE_TOOL_CPP_REGISTER_H

#include <string>
#include <vector>
#include "BitField.h"

using namespace std;

class Register {

private:

    //! \brief Register Name
    string _name;

    //! \brief BASE ADDRESS
    string _address;

    //! \brief
    string _descriptor;

    //! \brief vector of bit fields
    vector<BitField *> _bitFields;

public:

    /**      CONSTRUCTOR / DESCTRUCTOR       */

    //! \brief
    Register(string name, string address, string descriptor);

    //! \brief
    virtual ~Register();

    /**      BIT FIELD VECTOR FUNCTIONS     */

    //! \brief push
    void pushBitField(BitField * aBitField);

    //! \brief pop
    BitField * popBitField(void);

    //! \brief get
    BitField * getBitField(string nameBitField);

    //! \brief create Register and push pointer onto Register Vector
    BitField * createBitField(string nameBitField, string mask, string descriptor);

    /**     SETTERS / GETTERS       */

    //! \brief get name of register

    const string &getName() const;

    void setName(const string &name);

    const string &getAddress() const;

    void setAddress(const string &address);

    const string &getDescriptor() const;

    void setDescriptor(const string &descriptor);

    const vector<BitField *> &getBitFields() const;

    void setBitFields(const vector<BitField *> &bitFields);


};


#endif //GENERATE_TOOL_CPP_REGISTER_H
