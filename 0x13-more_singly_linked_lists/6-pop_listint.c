#include "lists.h"

/**
 * pop_listint - Function that removes the first
 * node from listint_t list
 * @head: A pointer to the head of the linked list
 *
 * Return: The data of the removed head node, otherwise 0
 */

int pop_listint(listint_t **head)
{
	int rm_data;
	listint_t *first_node;

	if (head == NULL || *head == NULL)
		return (0);

	first_node = *head;
	rm_data = first_node->n;
	*head = first_node->next;
	free(first_node);

	return (rm_data);
}

