#include "main.h"
#include <stdlib.h>

/**
 * free_char_grid - frees a 2 dimensional array.
 * @grid: multidimensional array of char.
 * @height: height of the array.
 *
 * Return: no return
 */
void free_char_grid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}

/**
 * strtow - splits a string into words.
 * @str: string.
 *
 * Return: pointer of an array of integers
 */
char **strtow(char *str)
{
	char **intarr;
	unsigned int a1, i, c, j, height;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
	{
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			height++;
	}
	intarr = malloc((height + 1) * sizeof(char *));
	if (intarr == NULL || height == 0)
	{
		free(intarr);
		return (NULL);
	}
	for (i = a1 = 0; i < height; i++)
	{
		for (c = a1; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				a1++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				intarr[i] = malloc((c - a1 + 2) * sizeof(char));
				if (intarr[i] == NULL)
				{
					free_char_grid(intarr, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; a1 <= c; a1++, j++)
			intarr[i][j] = str[a1];
		intarr[i][j] = '\0';
	}
	intarr[i] = NULL;
	return (intarr);
}
