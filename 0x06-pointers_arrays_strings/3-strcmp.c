#include "main.h"

/**
 * _strcmp - a function that compares two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Rerurn: - 0 if s1 and s2 are equal
 *   - A positive value if s1 is greater than s2
 *   - A negative value if s1 is less than s2
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
