#include "lists.h"

/**
 * listint_len - function that
 * returns the number of elements in a linked list
 * @h: pointer to the head of a list
 *
 * Return: numbers of elements (node_count)
 */

size_t listint_len(const listint_t *h)
{
	size_t node_count = 0;

	while (h)
	{
		node_count++;
		h = h->next;
	}
	return (node_count);
}
