#include "list.h"

/**
 * dlistint_len - returns the number of elements
 * @h: prointer const value
 *
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
size_t node_size;

node_size = 0;
if (h==0)
return (size);

while (h)
{
node_size++;
h = h->next;
}
return (size);
}
