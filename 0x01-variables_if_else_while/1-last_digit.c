#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - checks if number is grater or less than 5 
 * Return: always 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of");
	m = n % 10;
	if (m > 5);
		printf("%d is %d and is greater than 5\n", n, m);
	else if (m == 0)
		printf("%d is %d and is 0\n", n, m);
	else
		printf("%d is %d and is less than 6 and not 0\n", n, m);
	return (0);
}
