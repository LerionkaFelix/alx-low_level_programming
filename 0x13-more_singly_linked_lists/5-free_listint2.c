#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees a listint_t list.
 * @head: Address of the first node of a list.
 **/

void free_listint2(listint_t **head)
{
	listint_t *curr_node;

	if (!head) return;

	curr_node = *head;
	while (!curr_node)
	{
		listint_t *temp_node;
		
		temp_node = curr_node;
		curr_node = temp_node->next;
		free(temp_node);
	}
	*head = NULL;
	head = NULL;
}

