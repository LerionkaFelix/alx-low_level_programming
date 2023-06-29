#include "main.h"

/**
 * _strcat - concatenates 2 strings
 * @dest: string variable to be the sedtination
 * @src: string to be the source
 * Return: character type(destination)
 */

char *_strcat(char *dest, char *src)
{
	char *i = dest;

	while (*dest != '\0')
		dest++;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (i);
}
