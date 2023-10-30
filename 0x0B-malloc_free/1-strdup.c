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
	int m = 0;
	int n = 0;


	if (str == NULL)
		return (NULL);
	if (str[m] != '\0')
		m++;

	duplicate = (char *)malloc(sizeof(char) * m);

	if (duplicate == NULL)
		return (NULL);

	for (n = 0; n < str[n]; n++)
	{
		duplicate[n] = str[n];
	}
	return (duplicate);
}
