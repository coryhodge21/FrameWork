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
    BitField(const string &name, const string &mask, const string &descriptor);

    virtual ~BitField();

    /**      SETTERS / GETTERS       */

    //! \brief
    const string &getName() const;

    void setName(const string &name);

    const string &getMask() const;

    void setMask(const string &mask);

    const string &getDescriptor() const;

    void setDescriptor(const string &descriptor);





};


#endif //GENERATE_TOOL_CPP_BITFIELD_H
