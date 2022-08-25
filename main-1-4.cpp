#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

extern int *readNumbers() ;
extern bool equalsArray(int *numbers1,int *numbers2,int length) ;
extern int *reverseArray(int *numbers1,int length) ;

int main()
{
    int *numbers1;
    int *printingReversedArray;
    int length = 10;

    numbers1 = readNumbers();

    printingReversedArray = reverseArray(numbers1, length);
    for(int i=0;i<length;i++)
    {
        cout << *(numbers1+i) << " " << *(printingReversedArray + i) << endl;
    }

    delete[] numbers1;
    delete[] printingReversedArray;
    return 0;
}