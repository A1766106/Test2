#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

extern void hexDigits(int *numbers,int length) ;
extern int *readNumbers() ;

int main()
{
    int *numbers;
    int length = 10;

    numbers = readNumbers();

    hexDigits(numbers, length);

    return 0;
}