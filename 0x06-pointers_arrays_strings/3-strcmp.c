#include "main.h"

/**
 * _strcmp - a function that compares two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Rerurn: an integer
 */

int _strcmp(char *s1, char *s2)
{

	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
		return (*s1 - *s2);
}
