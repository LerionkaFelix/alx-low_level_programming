#include "main.h"

/**
 * print_last_digit - prints the last_digit
 * @n: looks at the last number
 * Return: number
 */

int print_last_digit(int n)
{
	int m;

	m = n % 10;
	if (m  >= 0)
	{
		_putchar('0' + m);
		return (m);
	}
	else
	{
		_putchar('0' - m);
		return (-m);
	}
	_putchar('\n');
}
