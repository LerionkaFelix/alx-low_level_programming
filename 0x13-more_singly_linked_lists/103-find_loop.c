#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to the head node of the linked list
 *
 * Return: address of the node where the loop starts, or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tp1 = head;
	listint_t *tp2 = head;

	if (!head)
		return (NULL);

	while (tp1 && tp2 && tp2->next)
	{
		tp2 = tp2->next->next;
		tp1 = tp1->next;
		if (tp2 == tp1)
		{
			tp1 = head;
			while (tp1 != tp2)
			{
				tp1 = tp1->next;
				tp2 = tp2->next;
			}
			return (tp2);
		}
	}

	return (NULL);
}

