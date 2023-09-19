#include "main.h"
/**
 * _strlen - a function that returns the length of a string
 * @s: the string to be returned
 *
 * Return: the length of string
 */

int _strlen(char *s)
{
	int len;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
