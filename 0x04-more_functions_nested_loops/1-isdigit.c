#include "main.h"

/**
 * _isdigit - checks if a character is a digit
 * @c: the number to be checked
 * Return: returns if number is a digit (1)
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
	_putchar('\n');
}
