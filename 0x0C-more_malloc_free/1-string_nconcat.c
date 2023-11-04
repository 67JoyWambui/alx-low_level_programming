#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 * @n: the number of bytes
 *
 * Return: a pointer, otherwise NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *dest;
	unsigned int m = 0;
	unsigned int num = 0;

/*cases where  NULL is passed, and is therefore treated as an empty string*/
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[num])
	{
		num++;
		m++;
	}

	for (; num < n && s2[num]; num++)
		m++;

	dest = malloc(sizeof(char) * (m + n + 1)); /*+1 for the null terminator*/

	if (dest == NULL)
		return (NULL);

	m = 0;

	for (num = 0; s1[num]; num++)
		dest[m++] = s1[num];

	for (num = 0; s2[num] && num < n; num++)
		dest[m++] = s2[num];

	dest[m] = '\0';

	return (dest);
}
