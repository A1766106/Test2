#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

extern int *readNumbers() ;
extern bool equalsArray(int *numbers1,int *numbers2,int length) ;

int main()
{
    int *numbers1;
    int *numbers2;
    int length = 10;

    numbers1 = readNumbers();
    numbers2 = readNumbers();

    cout << equalsArray(numbers1, numbers2, length) << endl;

    delete[] numbers1;
    delete[] numbers2;

    return 0;
}