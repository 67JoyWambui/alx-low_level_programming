#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer to a new
 *	string which is a duplicate of the string str
 *@str: the pointer to be returned
 * Return: a pointer to a new string, otherwise NULL
 */

char *_strdup(char *str)
{
	char *duplicate;
	unsigned int m, n;


	if (str == NULL)
		return (NULL);
	for (m = 0; str[m] != '\0'; m++)
		;

	duplicate = (char *)malloc(sizeof(char) * m + 1);

	if (duplicate == NULL)
		return (NULL);

	for (n = 0; n <= m; n++)
	{
		duplicate[n] = str[n];
	}
	return (duplicate);
}
