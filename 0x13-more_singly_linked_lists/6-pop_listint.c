#include "lists.h"

/**
 * pop_listint -  a function that deletes the head node of a listint_t
 *	linked list, and returns the head node’s data (n).
 * @head: a pointer to the head of the node
 *
 * Return: 0 on success
 */

int pop_listint(listint_t **head)
{
	int num;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);

	num = (*head)->n;/*save num in the head node*/
		/*saving the address of the head node*/
	temp = (*head)->next;/*moving the pointer to the next node*/
	free(*head);
	/*returning the num to the original node*/
	*head = temp;

	return (num);
}
