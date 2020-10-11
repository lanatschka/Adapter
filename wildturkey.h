#ifndef WILDTURKEY_H
#define WILDTURKEY_H

#include "turkey.h"
#include <iostream>
using namespace std;

class WildTurkey : public Turkey
{
public:
    WildTurkey();
    void gobble();
    void fly();
};

#endif // WILDTURKEY_H
