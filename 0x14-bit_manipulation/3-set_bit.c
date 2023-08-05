#include "main.h"

/**
*set_bit - sets bit at a given index to 1
*@n: passed integer
*@index: position to set bit
*Return: 1 if bit is correctly set, or -1 otherwise
*/


int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int val;

	if (index > 64)
		return (-1);

	val = 1UL << index;

	*n |= val;

	return (1);
}

