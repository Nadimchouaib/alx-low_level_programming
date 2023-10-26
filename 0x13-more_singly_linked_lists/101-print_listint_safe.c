#include "lists.h"

/**
 * reverse_listint - Function that prints
 * the content of a listint_t linked list
 * @head: A pointer to the head of the list
 * Return: Number of nodes in the list
 **/
size_t print_listint_safe(const listint_t *head)
{
	size_t node_count = 0;
	const listint_t *current_node = head;

	if (!head)
		exit(98);

	while (current_node)
	{
		printf("[%p] %i\n", (void *) current_node, current_node->n);
		current_node = current_node->next;
		node_count++;
	}
	return (node_count);
}
