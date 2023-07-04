#include "main.h"

/**
 * _strchr - looks for a character in astring
 * @s: pointer to string for evaluation
 * @c: character to be checked
 * Return: the memory or location of the first occurence of character
 */

char *_strchr(char *s, char c)
{
	while (*s != c)
		s++;
	if (*s == '\0')
		return (NULL);
	else
		return (s);
}
