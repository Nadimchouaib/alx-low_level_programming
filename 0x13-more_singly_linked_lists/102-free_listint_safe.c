#include "lists.h"

/**
 * free_listint_safe - Function that free a listint_t linked list
 * @h: Pointer to the head of the listint_t list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *current_node, *temp;

	if (h == NULL || *h == NULL)
		return (0);

	current_node = *h;

	while (current_node)
	{
	temp = current_node->next;
	free(current_node);
	current_node = temp;
	size++;
	}

	*h = NULL;

	return (size);
}

