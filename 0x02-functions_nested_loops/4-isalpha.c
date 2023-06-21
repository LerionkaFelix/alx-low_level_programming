#include "main.h"

/**
 * _isalpha - prints lower case numbers
 * @c: checks for lowercase numbers
 * Return: always 0
 */

int _isalpha(int c)
{
	if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
		return (1);
	else
		return (0);
	_putchar('\n');
}
