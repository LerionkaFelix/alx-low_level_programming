#include "main.h"

/**
 * _abs - prints absolute value of a number
 * @n: number to assess
 * Return: number
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n * -1);
	_putchar('\n');
}
