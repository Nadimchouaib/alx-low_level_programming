#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list
 * @head: A double pointer to the beginning of the list_t list
 * @str: A pointer to a const char containing the data to be added
 *
 * Return: The address of the new element, or NULL if it fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (str == NULL)
		return (NULL);

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;

	}
	else
	{
		list_t *current_node = *head;

		while (current_node->next != NULL)
			current_node = current_node->next;
		current_node->next = new_node;
	}
	return (new_node);
}
