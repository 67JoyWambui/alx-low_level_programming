#include "lists.h"

/**
 * free_list - a function that frees a list_t list
 * @head: the head of the node
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
