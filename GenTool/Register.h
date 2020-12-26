//
// Created by Cory Hodge on 12/19/20.
//

#ifndef GENERATE_TOOL_CPP_REGISTER_H
#define GENERATE_TOOL_CPP_REGISTER_H

#include "Project_Common.h"
#include "BitField.h"

using namespace std;

class Register {

private:

    //! \brief Register Name
    string _name;

    //! \brief BASE ADDRESS
    string _address;

    //! \brief description of register
    string _descriptor;

    //! \brief vector of bit fields
    vector<BitField *> _bitFields;

public:

    /**      CONSTRUCTOR / DESCTRUCTOR       */

    //! \brief constructor
    Register(string name, string address, string descriptor);

    //! \brief destructor
    virtual ~Register();

    /**      BIT FIELD VECTOR FUNCTIONS     */

    //! \brief pop last item in bit field vector off and destroy
    void popBitField(void);

    //! \brief push
    void pushBitField(BitField * aBitField);

    //! \brief pointer to last bit field in vector
    BitField * getLastBitField(void);

    //! \brief get
    BitField * getBitField(string nameBitField);

    //! \brief create Register and push pointer onto Register Vector
    BitField * createBitField(string nameBitField, string mask, string descriptor);

    /**     SETTERS / GETTERS       */

    //! \brief get name
    const string &getName() const;

    //! \brief check if bit fields vector empty
    int isEmpty(void);

    //! \brief return this registers address
    string getAddress(void);

};


#endif //GENERATE_TOOL_CPP_REGISTER_H
