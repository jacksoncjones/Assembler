#include <stdio.h>
#include <stdlib.h>

void setVoltage (double amperage, double resistance, double* pvoltage)
{
    *pvoltage = amperage * resistance;
}

int main()
{
    for (int n=0; n<200000000; n++) {
    double* pVoltage = malloc(sizeof(double));

    }
}
