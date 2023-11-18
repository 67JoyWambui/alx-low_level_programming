#include "lists.h"

/**
 * list_len - a function that returns the number of elements
 *	in a linked list_t list.
 * @h: the head of the list
 * Return: 0 on success
 */

size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;

	while (h != NULL)
	{
		/*move to the next node*/
		h = h->next;

		i++;
	}

	return (i);
}
