#include "lists.h"

/**
*free_listint - a function that frees a listint_t list
*@head: pointer to the list's head node
*/

void free_listint(listint_t *head)
{
	listint_t *temp_ptr;

	while (head)
	{
		temp_ptr = head->next;
		free(head);
		head = temp_ptr;
	}
}

