#include "lists.h"

/**
*free_listint - a function that frees a listint_t list
*@head: pointer to the list's head node
*Return: void
*/

void free_listint(listint_t *head)
{
	listint_t *tempptr1, *tempptr2;

	tempptr1 = head
	while (tempptr1)
	{
		tempptr2 = tempptr1->next;
		free(tempptr1);
		tempptr1 = tempptr2;
	}
}

