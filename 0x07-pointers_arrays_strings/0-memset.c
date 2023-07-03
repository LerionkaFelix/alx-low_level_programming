#include "main.h"

/**
 * _memset - fills memory with a cosntant byte
 * @n: bytes
 * @s: memory are pointed to
 * @b: constant byte
 * Return: pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *c;

	c = s;

	while (n > 0)
	{
		c++;
		n--;
		*s = b;
	}
	return (s);
}
