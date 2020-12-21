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
    Register();

    //! \brief
    virtual ~Register();

    /**      SETTERS / GETTERS       */

    //! \brief
    const string &getName() const;

    //! \brief
    void setName(const string &name);

    //! \brief
    const string &getBaseAddress() const;

    //! \brief
    void setBaseAddress(const string &baseAddress);

    //! \brief
    const vector<BitField *> &getBitFields() const;

    //! \brief
    void setBitFields(const vector<BitField *> &bitFields);

    //! \brief
    void appendBitField(BitField * bitField_p);

    /**      BIT FIELD VECTOR FUNCTIONS     */

    //! \brief push
    void pushBitField(BitField * aBitField);

    //! \brief pop
    BitField * popBitField(string nameBitField);

    //! \brief find
    BitField * findBitField(string nameBitField);

    //! \brief create Register and push pointer onto Register Vector
    Register * createBitField(string nameBitField, string mask, string descriptor);

    /**      REGISTER SPECIAL FUNCTIONS       */

    //! \brief push

    //! \brief pop

    //! \brief find

    //! \brief create

};


#endif //GENERATE_TOOL_CPP_REGISTER_H
