#include "lists.h"

/**
 * listint_len - Calculate the number of elements.
 * @h: Pointer to a list.
 * Return: Integer.
 **/

size_t listint_len(const listint_t *h)
{
	const listint_t *ak;
	unsigned int llen = 0;

	ak = h;
	while (ak)
	{
		llen++;
		ak = ak->next;
	}
	return (llen);
}

