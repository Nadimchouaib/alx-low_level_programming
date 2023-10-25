#include "lists.h"

/**
 * free_listint - Function that frees each node in listint_t list
 * @head: A pointer to the head of the list
 */

void free_listint(listint_t *head)
{
	listint_t *current_node;
	listint_t *next_node;

	while (head)
	{
		current_node = head;
		next_node = head->next;
		free(current_node);
		head = next_node;
	}
}
