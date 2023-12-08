#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes
 * the node at index of a dlistint_t list
 * @head: pointer to the list
 * @index: position of the node to delete
 * Return: 1 if it succeeded, otherwise -1
 **/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_node = *head;
	dlistint_t *targeted_node = *head;
	unsigned int i;
	unsigned int node_num = 0;

	/* border case for empty list */
	if (!(*head))
		return (-1);

	/* border case for delete at the beginning */
	if (index == 0)
	{
		*head = targeted_node->next;
		free(targeted_node);
		if (*head)
			(*head)->prev = NULL;
		return (1);
	}

	/* search of position to delete */
	i = index - 1;
	while (current_node && node_num != i)
	{
		node_num++;
		current_node = current_node->next;
	}

	/* general case */
	if (node_num == i && current_node)
	{
		targeted_node = current_node->next;
		if (targeted_node->next)
		targeted_node->next->prev = current_node;
		current_node->next = targeted_node->next;
		free(targeted_node);
		return (1);
	}

	return (-1);
}
