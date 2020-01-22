#include <iostream>

using namespace std;

int main()
{
    int n;
    int first;
    int last;
    int runningSum = 0;

    cout << "This program calculates the sum of integers between a starting and ending number";
    cout << "Please enter the beginning number:";
    cin >> first;
    cout << "Please enter the ending number:";
    cin  >> last;

        for (n = first; n <= last; n++) {
        runningSum = runningSum + n;
    }

    cout << runningSum;
}
