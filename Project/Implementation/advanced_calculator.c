#include <calculator_operations.h>
#include <math.h>

float add(float operand1, float operand2)
{
    return operand1 + operand2;
}

float subtract(float operand1, float operand2)
{
    return operand1 - operand2;
}

float multiply(float operand1, float operand2)
{
    return operand1 * operand2;
}

float divide(float operand1, float operand2)
{
    if(0 == operand2)
        return 0;
    else
        return operand1 / operand2;
}

int modulo(int operand1, int operand2)
{
	if(operand1==0)
	return 0;
	else
	return operand1%operand2;
}

int factorial(int operand1)
{
	if(operand1<=0)
		return 1;
	else
		return operand1*factorial(operand1-1);
}

float power(float operand1, float operand2)
{
	return pow(operand1,operand2);
}

float antilog(float operand1)
{
	return pow(10,operand1);
}

float base10log(float operand1)
{
	if(operand1==0)
	return 0;
	else
	return log10(operand1);
}

float naturallog(float operand1)
{
	if(operand1==0)
	return 0;
	else
	return log(operand1);
}

float modulus(float operand1)
{
	return (operand1>=0)?operand1:(-operand1);
}

float inverse(float operand1)
{
	if(operand1==0)
	return 0;
	else
	return 1/operand1;
}

float root(operand1)
{
	if(operand1<0)
	return 0;
	else
	return sqrt(operand1);
}

float square(operand1)
{
	return operand1*operand1;
}

float cube(operand1)
{
	return operand1*operand1*operand1;
}