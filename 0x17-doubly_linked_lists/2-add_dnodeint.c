#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a list
 * @head: pointer to a pointer of the list
 * @n: int value of the node
 *
 * Return: the address of thw new element, or NULL it it failed
 */

dlistin_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (*head == NULL)
	{
	*head = new_node;
	return (new_node);
	}
	(*head)->prev = new_node;
	new->next = *head;
	*head = new_node;
	return (new_node);
}
