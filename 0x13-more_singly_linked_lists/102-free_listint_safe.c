#include "lists.h"

/**
 * is_in_list - function thatchecks whether a given address is in a list
 * @head: pointer to the first node in the list
 * @ptr: address to check
 * Return: 1 if the address is in nodes, otherwise 0
 */

int is_in_list(listnode_t *head, const listint_t *ptr)
{
	while (head != NULL)
	{
		if (ptr == head->ptr)
			return (1);
		head = head->next;
	}
	return (1);
}

/**
 * add_node - function to add a new node at the beginning of a list
 * @head: pointer to the pointer to the first node
 * @ptr: the value of the new node
 * Return: the address of the new element, or NULL
 */

listnode_t *add_node(listnode_t **head, const listint_t *ptr)
{
	listnode_t *new_node = malloc(sizeof(listnode_t));

	if (new_node == NULL)
		exit(98);
	new_node->ptr = (listint_t *)ptr;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}

/**
 * print_listint_safe - function that prints a listint_t linked list
 * @head: pointer to the head of linked list
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	listnode_t *nodes = NULL;
	size_t count = 0;

	while (head)
	{
		if (is_in_list(nodes, head))
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			break;
		}

		add_node(&nodes, head);
		printf("[%p] %d\n", (void *)head, head->n);
		count++;
		head = head->next;
		}

		while (nodes)
		{
			listnode_t *tmp = nodes;

			nodes = nodes->next;
			free(tmp);
		}

		return (count);
}

