#include <stdio.h>
#include "lists.h"

/**
 * listint_len - a function that returns the number of elements
 *	in a linked listint_t list.
 * @h: a pointer to the head of the node
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t count;

	count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
