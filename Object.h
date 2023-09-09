#ifndef OBJECT_H
#define OBJECT_H

#include "Electrician.h"

class Object{
public:

private:
    std::string objectName;
    int minReqExperience;
    int minReqRank;
    Electrician electrician;
};

#endif
