#include <stdio.h>

/**
 * main - begining of the code
 * @void: return value
 * Return: return type
 */

int main(void)
{
	char a;

	for (a = 'z'; a >= 'a'; a--)
		putchar(a);
	putchar('\n');

	return (0);
}
