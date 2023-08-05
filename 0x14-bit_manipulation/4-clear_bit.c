#include "main.h"
#include <stdio.h>
/**
 * clear_bit - set the value of a bit at a given index to 0
 * @n: passed integer whose bits are to be altered
 * @index: index position to unset the bit
 * Return: 1 if it worked, -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int val;

	if (index > 64)
		return (-1);

	val = 1UL << index;

	*n &= ~val;

	return (1);
}
