#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to head node of the list
 * Return: address of the head node of the new list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}

