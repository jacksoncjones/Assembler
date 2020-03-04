#include <stdio.h>
#include <stdlib.h>

void CalculateTotal(int pFirst,int pLast,int* pSum){

for (int n = pFirst; n <= pLast; n++) {
        *pSum = *pSum + n;
    }
}

int main()
{
 int* first = malloc(sizeof(int));;
 int* last = malloc(sizeof(int));;
 int* sum = malloc(sizeof(int));

 printf("This program calculates the integers between a starting and ending number.\n");
 printf("Please enter the starting number:");
 scanf("%d", first);

 printf("Please enter the ending number:");
 scanf("%d", last);

 CalculateTotal(*first, *last, sum);

 printf("The sum of the numbers between %d and %d, equals %d", *first, *last, *sum);
}
