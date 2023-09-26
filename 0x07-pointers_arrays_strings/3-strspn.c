#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: the string
 * @accept: the string containing the bytes to be matched
 *
 * Return: 0 on success
 */

unsigned int _strspn(char *s, char *accept)
{
	int value = 0;
	int num, n;

	for (num = 0; s[num] != '\0'; num++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[num] == accept[n])
		{
			value++;
			break;
		}
		}

		if (accept[n] == '\0')
		{
			return (value);
		}

	}
	return (value);
}
