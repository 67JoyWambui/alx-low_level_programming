#include "main.h"

/**
 * _strstr -  a function that locates a substring
 * @haystack: the main string
 * @needle: the substring to be found
 *
 * Return: a pointer  to the beginning of the located substring
 *      otherwise 0
 *
 */

char *_strstr(char *haystack, char *needle)
{
	int h, n;

	if (*needle == 0)
	{
		return (haystack);
	}

	for (h = 0; haystack[h] != '\0'; h++)
	{
		for (n = 0; needle[n] != '\0'; n++)
		{
			if (haystack[h + n] != needle[n])
			{
				break;
			}
		}

	if (needle[n] == '\0')
	{
		return (&haystack[h]);
	}
	}

	return (0);
}
