#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of a lintint_t linked list
 * @head: head node
 * @index: index of the node, starting at 0
 * Return: the current node, otherwise return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	if (!head)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (!head)
			return (NULL);
	}
	return (head);
}

