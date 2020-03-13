#include <stdio.h>
#include <stdlib.h>

void MultiplyArrays(const double arraySize, const double arrayOne[], const double arrayTwo[], double* answerArray[])
{

    for(int n=0; n<arraySize; n++)
    {
        *answerArray[n] = arrayOne[n] * arrayTwo[n];

        printf("%lf", *answerArray[n]);
    }
}


int main()
{

    int arraySize;
    double* arrayOne;
    double* arrayTwo;
    double* answerArray;


    printf("Enter how many positions are in the arrays:  \n");
    scanf("%i", &arraySize);

    arrayOne = malloc(arraySize * sizeof(double));
    arrayTwo = malloc(arraySize * sizeof(double));

    for(int n=0; n < arraySize; n++)
    {
        printf("Please enter value #%i  \n", n+1);
        scanf("%lf", &arrayOne[n]);
    }

    printf("Please enter values of Array #2  \n");
    for(int n=0; n < arraySize; n++)
    {
        printf("Please enter value #%i  \n", n+1);
        scanf("%lf", &arrayTwo[n]);
    }

    answerArray = malloc(arraySize * sizeof(double));
    MultiplyArrays(arraySize, arrayOne, arrayTwo, &answerArray);


    for(int n=0; n<arraySize; n++)
    {
        printf("\n  Value at position %i = %lf   \n",(n+1),*answerArray[n]);

    }
}



