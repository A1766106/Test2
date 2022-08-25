#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

extern float add_op(float left, float right);
extern float subtract_op(float left, float right);
extern float multiply_op(float left, float right);
extern float divide_op(float left, float right);
extern float arithmetic_ops(float left, float right, float (*op)(float,float));

int main()
{
    string op;
    int left, right;
    cout << "Please enter the two numbers you wish to perform operations on: ";
    cin >> left >> right;
    cout << endl;
    cout << "What would you like to do? ";
    cin >> op;
    if(op == "+")
    {
        cout << arithmetic_ops(left, right, add_op) << endl;
    }
    else if(op == "-")
    {
        cout << arithmetic_ops(left, right, subtract_op) << endl;
    }
    else if(op == "*")
    {
        cout << arithmetic_ops(left, right, multiply_op) << endl;
    }
    else if(op == "/")
    {
        cout << arithmetic_ops(left, right, divide_op) << endl;
    }
    cout << endl;

    return 0;
}