#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

int *readNumbers() ;
bool equalsArray(int *numbers1,int *numbers2,int length) ;

int *readNumbers()
{
    int *numbers;
    numbers = new int[10];
    for(int i=0;i<10;i++)
    {
        cin >> *(numbers+i);
    }
    return numbers;
}

bool equalsArray(int *numbers1,int *numbers2,int length)
{
    if(length<1)
    {
        return false;
    }
    int count = 0;
    for(int i=0;i<length;i++)
    {
        if(*(numbers1+i) == *(numbers2+i))
        {
            count = count + 1;
        }
    }
    if(count == length)
    {
        return true;
    }
    return false;
}