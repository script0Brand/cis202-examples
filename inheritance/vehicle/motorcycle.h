#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H

#include "vehicle.h"

class Motorcycle : public Vehicle
{
public:
    Motorcycle();
    virtual void drive();
};

#endif
