#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to the listint_t list to be freed
 * Return: head node's data if success, zero otherwise
 */


int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}

