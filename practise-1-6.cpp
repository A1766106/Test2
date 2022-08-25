#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

float add_op(float left, float right);
float subtract_op(float left, float right);
float multiply_op(float left, float right);
float divide_op(float left, float right);
float arithmetic_ops(float left, float right, float (*op)(float,float));

float add_op(float left, float right)
{
    return left + right;
}
float subtract_op(float left, float right)
{
    return left - right;
}
float multiply_op(float left, float right)
{
    return left * right;
}
float divide_op(float left, float right)
{
    return left / right;
}
float arithmetic_ops(float left, float right, float (*op)(float,float))
{
    return (*op)(left, right);
}