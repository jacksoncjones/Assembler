#include <iostream>
#include "Circuit.h"

using namespace std;

int main()
{
    int NumberOfResistors;

    cout << "This program calculates the resistance of a circuit based on the circuit type and its resistors." << endl;
    cout << "Please enter the number of resistors:" << endl;
    cin >> NumberOfResistors;
    Circuit myCircuit(NumberOfResistors);

    cout << "Enter the circuit type: 1) Series 2)Parallel" << endl;
    cin >> myCircuit.CircuitType;

    for (int n=0; n<NumberOfResistors; ++n) {
        cout << "Please enter the resistances for resistor " << (n+1) << endl;
        cin >> myCircuit.Resistances[n];
    }

    cout << "The total resistance is " << myCircuit.TotalResistance() << endl;
    return 0;
}

