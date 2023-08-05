#include "main.h"

/**
*get_bit - returns the bit value at a given index
*@n: passed integer
*@index: index of the bit you want to get
*Return: value of the bit at index index or -1 otherwise
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int val;

	if (index > 64)
		return (-1);

	val = (n >> index) & 1;
	return (val);
}

