#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked list
 * @h: pointer parameter to the list
 * Return: number of nodes (nd_count)
 **/
size_t list_len(const list_t *h)
{
	size_t nd_count = 0;

	while (h != NULL)
	{
		h = h->next;
		nd_count++;
	}

	return (nd_count);
}
