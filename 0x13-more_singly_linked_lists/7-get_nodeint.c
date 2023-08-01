#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of a lintint_t linked list
 * @head: head node
 * @index: index of the node, starting at 0
 * Return: the current node, otherwise return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *nth_node;
unsigned int m;

nth_node = head;
for (m = 0; nth_node != NULL; m++)
{
if (m == index)
return (nth_node);
nth_node = nth_node->next;
}

return (nth_node);
}

