#include "lists.h"

int _print_len(char *p);

/*
 * _print_len - a function that prints the length of a string
 * @p: string
 * Return: the length of the string
 */

int _print_len(char *p)
{

	if (*p == 0)
		return (0);

	return (1 + _print_len(p + 1));
}


/**
 * *add_node - a function that adds a new node at the
 *	beginning of a list_t list.
 * @head: pointer to the  head of the list
 * @str: pointer to the new string
 *
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{

	list_t *n;

	if (head == NULL)
		return (0);

	n = malloc(sizeof(list_t));

	n->str = strdup(str);
	if (n == NULL)
	{
		free(n);
		return (NULL);
	}

	n->len = _print_len(n->str);
	n->next = *head;
	*head = n;

	return (n);
}
