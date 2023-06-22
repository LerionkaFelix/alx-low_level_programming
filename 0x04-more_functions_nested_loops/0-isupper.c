#include "main.h"

/**
 * _isupper - checks if a alphabet is in uppercase
 * @c: the number to be checked
 * Return: returns if number is uppercase (1)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
	_putchar('\n');
}
