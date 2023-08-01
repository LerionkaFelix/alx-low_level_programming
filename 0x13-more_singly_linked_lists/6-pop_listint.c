#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to the listint_t list to be freed
 */

int pop_listint(listint_t **head)
{
	listint_t *tempptr;
	int headnode_data;

	if (*head)
		return (0);

	tempptr = *head;
	*head = tempptr->next;
	headnode_data = tempptr->n;
	free(tempptr);
	
	return (headnode_data);
}

