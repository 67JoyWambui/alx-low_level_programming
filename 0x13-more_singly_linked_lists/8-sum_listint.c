#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the data
 *	(n) of a listint_t linked list.
 * @head: the head of the node
 *
 * Return: 0 on success
 */

int sum_listint(listint_t *head)
{
	int value;

	value = 0;

	while (head)
	{
		value += head->n;
		head = head->next;
	}

	return (value);
}
