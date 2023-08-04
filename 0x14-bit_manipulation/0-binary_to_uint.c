#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: pointer to an array of characters
 * Return: converted decimal number or 0 if one or more chars isn't either 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num, power;
	int len;

	if (!b)
		return (0);

	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}

	for (power = 1, num = 0, len--; len >= 0; len--, power *= 2)
	{
		if (b[len] == '1')
			num += power;
	}

	return (num);
}

