#include "lists.h"

/**
*free_listint - a function that frees a listint_t list
*@head: pointer to the list's head node
*Return: void
*/

void free_listint(listint_t *head)
{
	listint_t *tempptr;

	while (!head)
	{
		tempptr = head;
		head = tempptr->next;
		free(tempptr);
	}
}

