#include "lists.h"

/**
 * print_dlistint - function to print all the elements of a dlistint_t list
 * @h: pointer to the list
 * Return: number of nodes
 **/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t n_node = 0;

	while (node)
	{
		printf("%i\n", node->n);
		n_node++;
		node = node->next;
	}

	return (n_node);
}
