#include "lists.h"

/**
*delete_nodeint_at_index - deletes the node at index of a listint_t linked list
*
*@head: pointer to the head node of a list
*@index: is the index of the node that should be deleted
*Return: 1 if it succeeded, otherwise return -1
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    listint_t *curr_node;
    listint_t *next;

    unsigned int i;

    if (!head || !(*head))
    {
        return (-1);
    }
    curr_node = (*head);
    if (!index)
    {
        (*head) = curr_node->next;
        free(curr_node);
        return (1);
    }
    for (i = 0; curr_node && i < index - 1; i++)
    {
        curr_node = curr_node->next;
    }
    if (!curr_node || !(curr_node->next))
    {
        return (-1);
    }
    next = curr_node->next->next;
    free(curr_node->next);
    curr_node->next = next;
    return (1);
}

