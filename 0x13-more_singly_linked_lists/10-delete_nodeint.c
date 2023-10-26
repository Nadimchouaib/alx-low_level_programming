#include "lists.h"

/**
 * delete_nodeint_at_index - Function that
 * deletes the node at a given index of a listint_t list
 * @head: A pointer to the head of the list
 * @index: The index of the node to be deleted
 * Return: 1  if the deletion succeeds, -1 if it fails
 **/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *prev_node = *head;
	listint_t *node_to_delete = *head;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(node_to_delete);
		return (1);
	}
	node_to_delete = prev_node->next;
	for (i = 1; i < index  && node_to_delete; i++)
	{
		prev_node = node_to_delete;
		node_to_delete = node_to_delete->next;
		return (1);
	}

	return (-1);
}
