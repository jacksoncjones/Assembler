#include <iostream>
#include"Circuit.h"
#include"Circuit.h"

using namespace std;

int main()
{
    Circuit myCircuit;
    double Voltage;
    double Resistance;
    double Amperage;
    double UserChoice;

    cout << "This program uses Ohm's Law to calculate the Voltage, Resistance, \nand Amperage of a circuit." << endl;
    cout << "\nWould you like to solve for 1) Voltage, 2) Resistance, or 3) Amperage?" << endl;
    cin >> UserChoice;

    if(UserChoice == 1) {
        cout << "\nYou have selected to solve for Voltage." << endl;
        cout << "\nPlease enter the Resistance:" << endl;
        cin >> Resistance;
        myCircuit.SetResistance(Resistance);
        cout << "\nPlease enter Amperage:" << endl;
        cin >> Amperage;
        myCircuit.SetAmperage(Amperage);

        cout << "\nThe Voltage of the circuit = ";
        cout << myCircuit.SolveVoltage();

    } else if(UserChoice == 2) {
         cout << "\nYou have selected to solve for Resistance." << endl;
        cout << "\nPlease enter the Voltage:" << endl;
        cin >> Voltage;
        myCircuit.SetVoltage(Voltage);
        cout << "\nPlease enter Amperage:" << endl;
        cin >> Amperage;
        myCircuit.SetAmperage(Amperage);

        cout << "\nThe Resistance of the circuit = ";
        cout << myCircuit.SolveResistance();

    } else if(UserChoice ==3) {
         cout << "\nYou have selected to solve for Amperage." << endl;
        cout << "\nPlease enter the Voltage:" << endl;
        cin >> Voltage;
        myCircuit.SetVoltage(Voltage);
        cout << "\nPlease enter Resistance:" << endl;
        cin >> Resistance;
        myCircuit.SetResistance(Resistance);

        cout << "\nThe Amperage of the circuit = ";
        cout << myCircuit.SolveAmperage();
    }
}


