#include "lists.h"

/**
 * @print_dlistint - prints all the elements of a list
 * @h: const value
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *n)
{
size_t node = 0;

while (h)
{
node++;
printf("%d\n", h->n);
h = h->next;
}
return (node);
}
