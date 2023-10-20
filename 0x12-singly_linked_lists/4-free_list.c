#include <stdlib.h>
#include "lists.h"

/**
 * free_list - function that free a list_t list
 * @head: A pointer to the beginning of the list_t list
 */

void free_list(list_t *head)
{
	list_t *current_node;

	while (head != NULL)
	{
		current_node = head;
		head = head->next;
		free(current_node->str);
		free(current_node);
	}
}
