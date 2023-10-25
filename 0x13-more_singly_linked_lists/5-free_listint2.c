#include "lists.h"

/**
 * free_listint2 - Function thet frees a list
 * of listint_t nodes and sets the head to NULL
 * @head: A pointer to the address of
 * the head of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *current_node;
	listint_t *next_node;

	if (head == NULL)
		return;

	current_node = *head;
	next_node = (*head)->next;
	while (next_node)
	{
		free(current_node);
		current_node = next_node;
		next_node = next_node->next;
	}
	free(current_node);
	*head = NULL;
}

