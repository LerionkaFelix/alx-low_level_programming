#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to the listint_t list to be freed
 * Return: head node's data if success, zero otherwise
 */


int pop_listint(listint_t **head)
{
	listint_t *current_node;
	int res;

	if (((*head) == NULL) || head == NULL)
	{
		return (0);
	}
	current_node = *head;
	res = current_node->n;
	*head = (*head)->next;
	free(current_node);
	return (res);
}

