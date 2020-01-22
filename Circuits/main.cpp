#include <iostream>

using namespace std;

int main()
{
    int Voltage;
    int Resistance;
    int Amperage;
    int UserChoice;

    cout << "Would you like to solve for 1) Voltage, 2) Resistance, 3) Amperage?";
    cin >> UserChoice;

    if(UserChoice == 1) {
        cout << "You have selected to solve for Voltage.";
        cout << "Please enter the Resistance:";
        cin Resistance;
        cout << "Please enter the Amperage:";
        cin Amperage;
        Voltage = Resistance * Amperage;
        cout << "The Voltage of the circuit =" Voltage;

    } else if(UserChoice == 2) {
        cout << "You have selected to solve for Resistance.";
        cout << "Please enter the Voltage:";
        cin Voltage;
        cout << "Please enter the Amperage:";
        cin Amperage;
        Resistance = Voltage / Amperage;
        cout << "The Resistance of the circuit =" Resistance;

    } else if(UserChoice ==3) {
        cout << "You have selected to solve for Amperage.";
        cout << "Please enter the Voltage:";
        cin Voltage;
        cout << "Please enter the Resistance:";
        cin Resistance;
        Amperage = Voltage / Resistance;
        cout << "The Amperage of the circuit =" Amperage;
    }
}
