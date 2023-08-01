#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of listint_t
 * @head: head node
 * @n: integer to inserted at the end of the list
 * Return: address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp1, *cpy_temp1;

	temp1 = malloc(sizeof(listint_t));
	if (!temp1)
		return (NULL);

	temp1->n = n;
	temp1->next = NULL;

	if (!*head)
	{
		*head = temp1;
		return (temp1);
	}

	cpy_temp1 = *head;
	while (cpy_temp1->next)
		cpy_temp1 = cpy_temp1->next;
	cpy_temp1->next = temp1;
	return (temp1);
}

