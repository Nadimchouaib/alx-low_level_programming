#include "lists.h"

/**
 * dlistint_len - function that returns the number of
 * elements in a linked dlistint_t list
 * @h: pointer to the list
 * Return: number of nodes
 **/

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t n_node = 0;

	while (node)
	{
		n_node++;
		node = node->next;
	}

	return (n_node);
}
