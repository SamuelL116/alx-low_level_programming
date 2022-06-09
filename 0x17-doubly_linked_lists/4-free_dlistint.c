#include "lists.h"

/**
 * free_dlistint - frees dlistint_t list
 * @head: pointer of node list
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
if (head == NULL)
return (0);
while (head->next)
{
head = head->next;
free(head->prev);
}
free(head);
}
