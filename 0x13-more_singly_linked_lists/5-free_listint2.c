#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: the head of the node
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *p;

	if (head == NULL)
		return;

	temp = *head;
	while (temp != NULL)
	{
		p = temp;
		temp = p->next;
		free(p);
	}

	*head = NULL;
	/*set head to null*/
	head = NULL;
}

