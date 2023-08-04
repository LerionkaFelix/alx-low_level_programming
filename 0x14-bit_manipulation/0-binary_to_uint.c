#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: pointer to an array of characters
 * Return: converted decimal number or 0 if one or more chars isn't either 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	unsigned int base = 1;
	int len, i;

	for (len = 0; b[len] != '\0'; len++)
		;

	if (!b)
		return (0);
	i = 0;

	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		i++;
	}

	while (len)
	{
		num += ((b[len - 1] - '0') * base);
		base *= 2;
		len--;
	}
	return (num);
}

