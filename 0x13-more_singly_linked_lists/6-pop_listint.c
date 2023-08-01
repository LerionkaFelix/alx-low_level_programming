#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to the listint_t list to be freed
 * Return: head node's data if success, zero otherwise
 */

int pop_listint(listint_t **head)
{
        listint_t *tempptr;
        int headnum;

        if (!*head)
                return (0);

        headnum = (*head)->n;
        tempptr = (*head)->next;

        free(*head);
        *head = tempptr;

        return (headnum);
}

