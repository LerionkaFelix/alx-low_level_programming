#include "main.h"

/**
 * print_line - prints lines
 * @n: determines the number of lines
 * Return: void
 */

void print_line(int n)
{
	int i;

	if (n != 0)
	{
		for (i = 1; 1 <= n; i++)
			_putchar('_');
	}
	else
		_putchar('\n');
}
