#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node
 *	of a listint_t linked list.
 * @head: the head of the node
 * @index: the index of the node, starting at 0
 *
 * Return: 0 on success
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int num;

	num = 0;
	for (; num < index && head != NULL; num++)
	{
		head = head->next;
	}

	return (head);
}
