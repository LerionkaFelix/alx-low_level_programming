#include "main.h"
/**
*calc_natural_root - calculates and returns the natural square root of a number
*
*@num1: parameter for possible root value
*@num2: parameter for the number whose root is to be calculated
*
*Return: -1 or natural root of a number
*/
int calc_natural_root(int num1, int num2);

/**
*_sqrt_recursion - prints the natural square root of a number
*
*@n: parameter for number to find its square root
*
*Return: -1 or sqrt of a number
*/
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (calc_natural_root(0, n));
}

/**
*calculate_sqrt - prints the natural square root of a number
*
*@num1: iterator
*@num2: parameter for number to find its square root
*
*Return: -1 or sqrt of a number
*/
int calc_natural_root(int num1, int num2)
{
if (num1 * num1 > num2)
{
return (-1);
}

if (num1 * num1 == num2)
return (num1);

return (calc_natural_root(num1 + 1, num2));
}

