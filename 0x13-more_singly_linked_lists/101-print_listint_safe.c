#include "lists.h"

/**
 * print_listint_safe - function that prints a
 * listint_t linked list and detects loops
 * @head: Pointer to the head of the linked list
 * Return: Number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current_node = head;
	size_t node_count = 0;

	while (current_node)
{
	printf("[%p] %d\n", (void *)current_node, current_node->n);
	node_count++;

	if (current_node <= current_node->next)
	{
		printf("Error: loop detected\n");
		exit(98);
	}

	current_node = current_node->next;
	}

	return (node_count);
}

