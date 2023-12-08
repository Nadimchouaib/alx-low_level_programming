#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of
 * all the data (n) of a dlistint_t list
 * @head: pointer to the list
 * Return: sum of all data in the list, otherwise 0
 **/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;
	int data_sum = 0;

	while (node)
	{
		data_sum += node->n;
		node = node->next;
	}

	return (data_sum);
}
