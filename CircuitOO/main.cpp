#include <iostream>
#include"Circuit.h"
#include"Circuit.h"

using namespace std;

int main()
{
    Circuit myCircuit;
    double Voltage;

    cout << "Please enter voltage" << endl;
    cin >> Voltage;
    myCircuit.SetVoltage(Voltage);

    cout << myCircuit.GetVoltage() << endl;



}


