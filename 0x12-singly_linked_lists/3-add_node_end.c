#include "lists.h"

int _print_len(char *p);

/**
 * _print_len - a function that prints the length of a string
 * @p: the string
 *
 * Return: the length of the string
 */

int _print_len(char *p)
{
	if (*p == 0)
		return (0);

	return (1 + _print_len(p + 1));
}


/**
 * *add_node_end -  a function that adds a new node at
 *      the end of a list_t list.
 * @head: pointer to the head of the string
 * @str: the string
 *
 * Return:  the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp;

	if (head == NULL)
		return (0);

	temp = *head;
	new = malloc(sizeof(list_t));

	new->str = strdup(str);

	if (new == NULL)
	{
		free(new);
		return (0);
	}

	new->len = _print_len((char *)str);
	new->next = NULL; /*next will always be null*/

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	while (temp->next)
		temp = temp->next;
	temp->next = new;/*if next is already NULL*/

	return (*head);
}
