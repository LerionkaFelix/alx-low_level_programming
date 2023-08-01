#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to the listint_t list to be freed
 */

int pop_listint(listint_t **head)
{
	listint_t *tempptr;
	int headnum;

	if (!*head)
		return (0);

	tempptr = *head;
	*head = tempptr->next;
	headnum = tempptr->n;
	free(tempptr);
	
	return (headnum);
}

