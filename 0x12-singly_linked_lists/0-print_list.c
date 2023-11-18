#include "lists.h"

/**
 * print_list - a function that prints all the elements
 *	of a list_t list
 * @h: head of the list
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t num;

	num = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}

		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
			h = h->next;/*move to the next node*/
			num++;
	}
	return (num);
}
