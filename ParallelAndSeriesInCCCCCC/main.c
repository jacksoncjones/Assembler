#include <stdio.h>
#include <stdlib.h>

void CalculateResistance(const int circuitType, const int pnumberOfResistors,const double presistances[],double* answer){





    }


int main()
{
int* circuitChoice = malloc(sizeof(int));
int* numberOfResistors = malloc(sizeof(int));
double* resistances[*numberOfResistors];

    printf("This program calculates the resistance of a circuit based on the circuit type and resistors.\n");

    printf("Please enter whether the circuit is in 1)Parallel or 2)Series:");
    scanf("%d", circuitChoice);

    if(*circuitChoice == 1) {
        int* n = malloc(sizeof(int));
        //double* sumOfResistors = malloc(sizeof(int));
        //*sumOfResistors;

        printf("Please enter the number of resistors:\n");
        scanf("%d", numberOfResistors);

        for(*n=0;*n <= *numberOfResistors;*n++) {

        CalculateResistance(const int numberOfResistors,const double presistances[],double* answer)
            printf("Please enter the resistance of resistor #%lf", *resistances[*n+1]);
            scanf("%lf", resistances[*n]);
            //sumOfResistors = resistances[*n] + sumOfResistors;
            printf("%lf", *resistances[*n]);
}
    } else if(*circuitChoice == 2){

            printf("Please enter the number of resistors:\n");
    }

}
