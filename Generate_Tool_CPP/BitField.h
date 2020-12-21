//
// Created by Cory Hodge on 12/20/20.
//

#ifndef GENERATE_TOOL_CPP_BITFIELD_H
#define GENERATE_TOOL_CPP_BITFIELD_H

#include <string>

using namespace std;

class BitField {

private:
    //! \brief Bit Field name
    string _name;

    //! \brief string value of hex mask
    string _mask;

    ///! \brief comment following bit field mask value
    string _descriptor;

public:

    /**      CONSTRUCTORS       */

    //! \brief Constructor
    BitField(const string &name, const string &mask, const string &descriptor);

    //! \brief Destructor
    virtual ~BitField();

    /**      SETTERS / GETTERS       */

    //! \brief get name
    const string &getName() const;

    //! \brief Set Name
    void setName(const string &name);

    //! \brief get mask
    const string &getMask() const;

    //! \brief set mask
    void setMask(const string &mask);

    //! \brief get descriptor
    const string &getDescriptor() const;

    //! \brief set descriptor
    void setDescriptor(const string &descriptor);
};


#endif //GENERATE_TOOL_CPP_BITFIELD_H
