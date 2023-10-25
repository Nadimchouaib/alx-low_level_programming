#include "lists.h"

/**
 * add_nodeint_end - function that adds
 * a new node at the end of a listint_t list
 * @head: pointer to the  head of the list
 * @n: number to store in the new element of
 * the linked list
 * Return: address of the new element, otherwise NULL
 **/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_elemt;
	listint_t *current_node = *head;

	new_elemt = malloc(sizeof(listint_t));
	if (new_elemt == NULL)
		return (NULL);
	new_elemt->n = n;
	new_elemt->next = NULL;

	if (current_node)
	{
		while (current_node->next)
			current_node = current_node->next;
		current_node->next = new_elemt;
	}
	else
		*head = new_elemt;

	return (new_elemt);
}
