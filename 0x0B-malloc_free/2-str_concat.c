#include "main.h"
#include <stdlib.h>

/**
 * str_concat -  function that concatenates two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: NULL if unsuccessful
 */

char *str_concat(char *s1, char *s2)
{
	int m, n;
	char *str;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";

	m = 0;
	n = 0;

	while (s1[m] != '\0')
	{
		m++;
	}

	while (s2[n] != '\0')
	{
		n++;
	}
	
	str = malloc(sizeof(char) * (m + n + 1));

		if (str == NULL)
			return (NULL);

		m = 0;
		n = 0;

		while (s1[m] != '\0')
		{
			str[m] = s1[m];
			m++;
		}

		while (s2[n] != '\0')
		{
			str[m] = s2[n];
			m++;
			n++;
		}

		str[m] = '\0';
		return (str);
}
