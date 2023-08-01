#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees a listint_t list.
 * @head: Address of the first node of a list.
 **/

void free_listint2(listint_t **head)
{
	listint_t *temp_ptr;

	if (!head || !(*head))
		return; 

	while (*head)
	{
		temp_ptr = *head;
		*head = temp_ptr->next;
		free(temp_ptr);
	}

	*head = NULL;
}

