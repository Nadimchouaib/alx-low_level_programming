#include "lists.h"

/**
 * reverse_listint - Function that everses a listing_t linked list
 * @head: A pointer to the head of the list
 * Return: A pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current_node = *head;
	listint_t *prev_node = NULL;
	listint_t *next_node = NULL;

	if (!head)
		return (NULL);

	while (current_node)
	{
		next_node = current_node->next;
		current_node->next = prev_node;
		prev_node = current_node;
		current_node = next_node;
	}

	*head = prev_node;
	return (*head);
}

