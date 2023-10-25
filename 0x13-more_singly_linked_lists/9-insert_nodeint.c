#include "lists.h"

/**
 * insert_nodeint_at_index - function that nserts
 * a new node at a given position in a listint_t linked list
 * @head: A pointer to the head of the list
 * @idx: The index at which the new node will be added
 * @n: The integer value for the new node
 * Return: the address of the new node, otherwise NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current_node = *head;
	listint_t *new_node;
	unsigned int index = 0;
	unsigned int count = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	index = idx - 1;
	while (current_node && count != index)
	{
		count++;
		current_node = current_node->next;
	}

	if (count == index && current_node)
	{
		new_node->next = current_node->next;
		current_node->next = new_node;
		return (new_node);
	}

	free(new_node);

	return (NULL);
}

