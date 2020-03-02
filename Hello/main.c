#include <stdio.h>
#include <stdlib.h>

void setVoltage (double amperage, double resistance, double* pvoltage)
{
    *pvoltage = amperage * resistance;
}

void setResistance (double amperage, double* resistance, double voltage)
{
    *resistance = voltage / amperage;
}

void setAmperage (double* amperage, double resistance, double voltage)
{
    *amperage = voltage / resistance;
}


int main()
{
    double amperage;
    double resistance;
    double voltage;
    double userChoice;

    printf("Would you like to solve for 1)Voltage, 2)Resistance, 3)Amperage?\n");
    scanf("%lf", &userChoice);

    if ((userChoice == 1)) {

    printf("Please enter the resistance\n");
    scanf("%lf", &resistance);

    printf("Please enter the amperage\n");
    scanf("%lf", &amperage);

    setVoltage(amperage, resistance, &voltage);

    printf("The voltage of the circuit = %lf", voltage);

    } else if ((userChoice == 2)) {

    printf("Please enter the voltage\n");
    scanf("%lf", &voltage);

    printf("Please enter the amperage\n");
    scanf("%lf", &amperage);

    setResistance(amperage, &resistance, voltage);

    printf("The resistance of the circuit = %lf", resistance);

    } else if ((userChoice == 3)) {

    printf("Please enter the voltage\n");
    scanf("%lf", &voltage);

    printf("Please enter the resistance\n");
    scanf("%lf", &resistance);

    setAmperage(&amperage, resistance, voltage);

    printf("The amperage of the circuit = %lf", amperage);

    }
}
