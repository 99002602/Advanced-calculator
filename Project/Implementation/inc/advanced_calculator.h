/** 
* @file advanced_calculator.h
* Calculator application with 15 mathematical operations
*
*/
#ifndef __ADVANCED_CALCULATOR_H__
#define __ADVANCED_CALCULATOR_H__

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <math.h>
/**
*  adds the operand1 and operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 + operand2
*/
float add(float operand1, float operand2);

/**
*  subtracts the operand1, operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 - operand2
*/
float subtract(float operand1, float operand2);

/**
*  multiply the operand1, operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 * operand2
*/
float multiply(float operand1, float operand2);


/**
* divides the operand1 by operand2 and returns the result 
* @param[in] operand1 
* @param[in] operand2 
* @return floating point value of the operand1 / operand2
* @note returns 0 for divide by 0 error
*/
float divide(float operand1, float operand2);


/**
* divides the operand1 by operand2 and returns the remainder 
* @param[in] operand1 
* @param[in] operand2 
* @return integer value of the operand1 / operand2
* @note returns 0 for divide by 0 error
*/
int modulo(int operand1,int operand2);


/**
* finds the factorial of operand1 and returns the result 
* @param[in] operand1 
* @return integer value of the operand1 factorial
* @note returns 1 for factorial of 0 and negative integers
*/
int factorial(int operand1);


/**
* raises the operand1 to the power operand2 and returns the result 
* @param[in] operand1
* @param[in] operand2
* @return floating point value of operand1 to the power operand2
*/
float power(float operand1, float operand2);


/**
* finds the antilogarithm of operand1 to the base 10 and returns the result 
* @param[in] operand1
* @return floating point value of 10 to the power operand1
*/
float antilog(float operand1);


/**
* finds logarithm of operand1 to the base 10 and returns the result 
* @param[in] operand1
* @return floating point value of logarithm of operand1 to the base 10
* @note returns 0 as invalid input
*/
float base10log(float operand1);


/**
* finds natural logarithm of operand1 and returns the result 
* @param[in] operand1
* @return floating point value of natural logarithm of operand1
* @note returns 0 as invalid input
*/
float naturallog(float operand1);


/**
* finds absolute value of operand1 and returns the result 
* @param[in] operand1
* @return floating point value of absolute value of operand1
*/
float modulus(float operand1);


/**
* finds the reciprocal of operand1 and returns the result 
* @param[in] operand1
* @return floating point value of reciprocal of operand1
* @note returns 0 for divide by 0 error
*/
float inverse(float operand1);


/**
* finds square root of operand1 and returns the result 
* @param[in] operand1
* @return floating point value of square root of operand1
* @note returns 0 for negative numbers
*/
float root(operand1);


/**
* finds square of operand1 and returns the result 
* @param[in] operand1
* @return floating point value of square of operand1
*/
float square(operand1);


/**
* finds cube of operand1 and returns the result 
* @param[in] operand1
* @return floating point value of cube of operand1
*/
float cube(operand1);
#endif  /* #define __ADVANCED_CALCULATOR_H__ */
