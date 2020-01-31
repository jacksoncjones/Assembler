#include "Circuit.h"

Circuit::Circuit(int pNumberOfResistors)
{
    NumberOfResistors = pNumberOfResistors;  //Save the value for internal use.  Nice for looping
    Resistances = new double[NumberOfResistors]; // Create a pointer--dynamic array size...
}

Circuit::~Circuit()
{
    delete(Resistances); //Since we manually allocated Resistances with the new keyword, we should manually free up memory.
}

double Circuit::SeriesResistance()
{
    double runningSum = 0;
    for (int n = 0; n < NumberOfResistors; ++n) {
            runningSum += Resistances[n];
    }
    return runningSum;
}

double Circuit::ParallelResistance()
{
    double runningSum = 0;
    for (int n = 0; n < NumberOfResistors; ++n) {
            runningSum += 1/Resistances[n];
    }
    return 1/runningSum;
}

double Circuit::TotalResistance(){
    if (CircuitType == SERIES) {
        return SeriesResistance();
    } else {
        return ParallelResistance();
    }
}


