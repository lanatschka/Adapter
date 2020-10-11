#ifndef MALLARDDUCK_H
#define MALLARDDUCK_H

#include "duck.h"
#include <iostream>
using namespace std;

class MallardDuck : public Duck
{
public:
    MallardDuck();
    void quack();
    void fly();
};

#endif // MALLARDDUCK_H
