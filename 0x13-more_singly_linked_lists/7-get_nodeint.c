#include "lists.h"

/**
 * get_nodeint_at_index - Function that returns
 * the nth node of a listint_t list
 * @head: pointer to the list
 * @index: The index of the desired node
 * Return:a pointer to the located node, otherwise NULL
 **/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node_index = 0;

	while (head && node_index != index)
	{
		node_index++;
		head = head->next;
	}
	if (head && node_index == index)
		return (head);
	return (NULL);
}
