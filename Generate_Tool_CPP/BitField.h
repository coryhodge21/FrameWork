//
// Created by Cory Hodge on 12/20/20.
//

#ifndef GENERATE_TOOL_CPP_BITFIELD_H
#define GENERATE_TOOL_CPP_BITFIELD_H

#include <string>

using namespace std;

class BitField {

private:
    //! \brief Bit Fild name
    string _name;

    //! \brief string value of hex type mask
    string _mask;

    ///! \brief comment following bit field mask value
    string _descriptor;

public:

    /**      CONSTRUCTORS       */

    //! \brief
    BitField(const string &name);

    //! \brief
    virtual ~BitField();

    /**      SETTERS / GETTERS       */

    //! \brief
    const string &getName() const;

    //! \brief
    void setName(const string &name);

    //! \brief
    const string &getMask() const;

    //! \brief
    void setMask(const string &mask);

    //! \brief
    const string &getDescriptor() const;

    //! \brief
    void setDescriptor(const string &descriptor);

    /**      BIT FIELD SPECIAL FUNCTIONS      */

};


#endif //GENERATE_TOOL_CPP_BITFIELD_H
