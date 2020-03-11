#include <stdio.h>
#include <stdlib.h>

void MultiplyArrays(const double arraySize, const double arrayOne[], const double arrayTwo[], double* answerArray[])
{

    for(int n=0; n<arraySize; n++)
    {
        *answerArray[n] = arrayOne[n] * arrayTwo[n];
    }
}


int main()
{

    double arraySize;
    double* arrayOne;
    double* arrayTwo;
    double* answerArray;


    printf("Enter how many numbers are in the array:  \n");
    scanf("%lf", &arraySize);

    arrayOne = malloc(arraySize * sizeof(double));
    arrayTwo = malloc(arraySize * sizeof(double));

    for(int n=0; n < arraySize; n++)
    {
        printf("Please enter value #%lf  \n", arraySize);
        scanf("%lf", &arrayOne[n]);
    }

    printf("Please enter value #%lf of Array #2  \n", arraySize);
    for(int n=0; n < arraySize; n++)
    {
        printf("Please enter value #%lf  \n", arraySize);
        scanf("%lf", &arrayTwo[n]);
    }

    answerArray = malloc(arraySize * sizeof(double));
    MultiplyArrays(arraySize, arrayOne, arrayTwo, &answerArray);


    for(int n=0; n<=arraySize;n++){

    printf("Value at position %i = %lf",n,answerArray[n]);

    }


}



