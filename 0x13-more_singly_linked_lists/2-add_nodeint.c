#include "lists.h"

/**
*add_nodeint -  adds a new node at the beginning of listint_t
*@head: first node's address
*@n: integer inserted in the new node
*Return:  adds a new node at the beginning of a listint_t list
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ak;

	ak = malloc(sizeof(listint_t));
	if (!ak)
		return (NULL);

	ak->n = n;
	ak->next = *head;
	*head = ak;
	return (*head);
}

