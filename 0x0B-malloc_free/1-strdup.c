#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer which is
 *	a duplicate of the string str
 * @str: the pointer
 *
 * Return: a pointer to the string or NULL if memory isn't available
 */

char *_strdup(char *str)
{
	int m = 0;
	int n = 0;
	char *c;

	if (str == 0)
		return (NULL);

	if (str[m] != '\0')
	{
		m++;
	}

	c = (char *)malloc(sizeof(m + 1) * n);

	if (c == 0)
	{
		return (NULL);
	}

	/*copy str to c*/
	for (n = 0; str[n] != '\0'; n++)
		c[n] = str[n];
	return (c);
}
