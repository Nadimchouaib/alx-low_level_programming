#include "lists.h"

/**
 * sum_listint - Function that returns the
 * sum of all the data of a listint_t list
 * @head: Pointer to the head of a list
 * Return: Sum of all the data, Otherwise 0
 */

int sum_listint(listint_t *head)
{
	int data_sum = 0;

	while (head != NULL)
	{
		data_sum += head->n;
		head = head->next;
	}

	return (data_sum);
}
