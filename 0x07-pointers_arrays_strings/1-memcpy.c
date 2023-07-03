#include "main.h"
/**
 * _memcpy - copies memory area
 * @src: memory area to be copied
 * @dest: memory area to be copied to
 * @n: bytes to be copied
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

