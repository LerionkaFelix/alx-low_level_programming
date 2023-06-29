#include "main.h"

/**
 * _strncat - concatenates 2 strngs
 * @src: source string
 * @dest: destination string
 * @n: length of the string to be added
 * Return: cahr with the 2 cocatenated strings
 */

char *_strncat(char *dest, char *src, int n)
{
	int k, l;

	for (k = 0; dest[k] != '\0'; k++)
		continue;
	for (l = 0; src[l] != '\0' && l < n; j++)
		dest[i + j] = src[j];
	dest[i + j] = '\0';
	return (dest);
}
