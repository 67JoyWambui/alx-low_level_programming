#include "lists.h"

/**
 * size_t print_list - a function that prints all the elements 
 *	of a list_t list
 * @h: head of the list
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t num = 0;
	const list_t *pointer = h;

	while (pointer != NULL)
	{
		if (pointer->str == NULL)
		{
			printf("(nil)");
		}
		
		else
		{
			printf ("[%d] %s\n", pointer->len, pointer->str);
			num++;
		}

		if (pointer->next != NULL)
		{
			printf(", ");
		}

		/*move to the next node*/
		pointer = pointer->next;
		printf("\n");
	}
	return (num);
}
