#include "lists.h"

/**
 * add_nodeint - function that adds a new node
 * at the beginning of a listint_t list
 * @head: pointer to the first element of the list
 * @n: int to set in the new node
 * Return: address of the new element, otherwise NULL
 **/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_elemt;

	new_elemt = malloc(sizeof(listint_t));
	if (new_elemt == NULL)
		return (NULL);

	new_elemt->n = n;
	new_elemt->next = *head;
	*head = new_elemt;
	return (new_elemt);
}
