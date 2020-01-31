#include <iostream>

using namespace std;

int main()
{
    Circuit myCircuit;
    double NumberOfResistors;
    double UserChoice;
    double[] Resistances;

    cout << "This program calculates the resistance of a circuit based on the circuit type and number of resistors." << endl;
    cout << "Please enter the number of resistors:" << endl;
    cin >> NumberOfResistors;
    myCircuit.SetNumberOfResistors(NumberOfResistors);

    cout << "Enter the circuit type: 1) Parallel 2)Series" << endl;
    cin >> UserChoice;

    if (UserChoice == 1) {

        cout << "You have selected Parallel." << endl;
        cout << "Please enter the resistances of the resistors:" << endl;
        cin >> Resistances[];
    }
}
