#include "Circuit.h"

Circuit::Circuit()
{
    //ctor
}

Circuit::~Circuit()
{
    //dtor
}

double Circuit::SolveVoltage(){
    Voltage = Amperage * Resistance;
    return Voltage;
}

double Circuit::SolveResistance(){
    Voltage = Voltage / Amperage;
    return Voltage;
}

double Circuit::SolveAmperage(){
    Voltage = Voltage / Resistance;
    return Voltage;
}
