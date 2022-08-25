#include <string>
#include <iostream>
#include <stdlib.h>

using namespace std;

extern int *readNumbers();
extern int secondSmallestSum(int *numbers,int length) ;

int main()
{
    int *numbers;
    int length = 10;
    
    numbers = readNumbers();
    int TheSecondSmallestSum = secondSmallestSum(numbers, length);

    cout << "The second smallest sum is: " << TheSecondSmallestSum << endl;
    delete[] numbers;
    return 0;
}