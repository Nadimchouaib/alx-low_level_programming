#include <stdio.h>
#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list
 * @h: pointer parameter to the list
 * Return: number of nodes (count)
 **/

size_t print_list(const list_t *h)
{
	unsigned int nd_count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		nd_count++;
	}

	return (nd_count);
}
