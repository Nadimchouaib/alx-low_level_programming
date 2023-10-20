#include <string.h>
#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list
 * @h: pointer parameter to the list
 * Return: number of nodes (nd_count)
 **/

size_t print_list(const list_t *h)
{
	size_t nd_count = 0;

	while (h != NULL)
	{
		if (h->str)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		nd_count++;
	}

	return (nd_count);
}
