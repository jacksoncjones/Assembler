#include <stdio.h>
#include <stdlib.h>

void CalculateResistance(const int circuitType, const int numberOfResistors,const double resistances[],double* answer)
{
    if(circuitType == 1)
    {
        double runningSum = 0;
        for(int n=0; n<numberOfResistors; n++)
        {
            runningSum = (1/resistances[n]) + runningSum;

        }
        *answer = 1/runningSum;

    }
    else if(circuitType == 2)
    {
        double runningSum = 0;
        for(int n=numberOfResistors-1; n>=0; n--)
        {
            runningSum = resistances[n] + runningSum;
        }
        *answer = runningSum;
    }
}

int main()
{

    int circuitType;
    int numberOfResistors;
    double* resistances;
    double* answer;


    printf("This program calculates the resistance of a circuit based on the circuit type and resistors.\n");

    printf("Please enter whether the circuit is in 1)Parallel or 2)Series:");
    scanf("%i", &circuitType);

    printf("Please enter the number of resistors:\n");
    scanf("%i", &numberOfResistors);
    resistances = malloc(numberOfResistors * sizeof(double));
    answer = malloc(sizeof(double));

    for(int n=0; n < numberOfResistors; n++)
    {

        printf("Please enter the resistance of resistor #%i: \n", n+1);
        scanf("%lf", &resistances[n]);
    }
    CalculateResistance(circuitType, numberOfResistors, resistances, answer);

    printf("%lf", *answer);

}
