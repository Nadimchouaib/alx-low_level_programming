#include "lists.h"

/**
 * print_listint - function that prints all list elements
 * @h: head of the list
 * Return: numbers of nodes (nodes_count)
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes_count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nodes_count++;
		h = h->next;
	}
	return (nodes_count);
}
