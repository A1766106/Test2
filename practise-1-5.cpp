#include <string>
#include <iostream>
#include <stdlib.h>

using namespace std;

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
int secondSmallestSum(int *numbers,int length)
{
    int smallest;
    int secondSmallest;
    if(*(numbers)<*(numbers+1))
    {
        smallest = *(numbers);
        secondSmallest = *(numbers+1);
    }
    else
    {
        secondSmallest = *(numbers);
        smallest = *(numbers+1);
    }
    for(int i=0;i<length;i++)
    {
        int runningSum = 0;
        for(int j=i;j<length;j++)
        {
            runningSum = runningSum + *(numbers+j);
            if(runningSum < smallest)
            {
                secondSmallest = smallest;
                smallest = runningSum;
            }
            else if(runningSum < secondSmallest && runningSum > smallest)
            {
                secondSmallest = runningSum;
            }
        }

    }
    return secondSmallest;
}
