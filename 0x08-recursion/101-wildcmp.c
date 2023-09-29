#include "main.h"

/**
 * wildcmp - a function that compares two strings with wilcard
 * @s1: the first string
 * @s2: the second string
 *
 * Return: 1  if the strings are identical otherwise 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 == *s2 || *s2 == '*')
		{
			return (wildcmp(s1 + 1, s2 + 1));

		}

		else
		{
			return (0);
		}
	}
	while (*s2 != '\0')
	{
		if (*s2 != '_')
		{
			return (0);
		}
		s2++;
	}
	return (1);
}
