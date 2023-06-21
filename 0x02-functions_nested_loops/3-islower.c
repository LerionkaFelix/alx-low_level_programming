#include "main.h"

/**
 * _islower - prints lower case numbers
 * @c: checks for lowercase numbers
 * Return: always 0
 */

int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
		return (1);
	else
		return (0);
	_putchar('\n');
}
