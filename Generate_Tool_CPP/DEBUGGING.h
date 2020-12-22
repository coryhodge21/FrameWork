//
// Created by Cory Hodge on 12/21/20.
//

#ifndef GENERATE_TOOL_CPP_DEBUGGING_H
#define GENERATE_TOOL_CPP_DEBUGGING_H


class DEBUGGING {

public:

    int modules_created = 0;
    int registers_created = 0;
    int bitFields_created = 0;

    DEBUGGING();
    ~DEBUGGING();

    int getModulesCreated() const;

    void setModulesCreated(int modulesCreated);

    int getRegistersCreated() const;

    void setRegistersCreated(int registersCreated);

    int getBitFieldsCreated() const;

    void setBitFieldsCreated(int bitFieldsCreated);

};



#endif //GENERATE_TOOL_CPP_DEBUGGING_H
