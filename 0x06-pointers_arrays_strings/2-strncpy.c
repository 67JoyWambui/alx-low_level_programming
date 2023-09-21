#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @dest: first string
 * @src: second string
 * @n: the number
 *
 * Return: 0 on success
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*src != '\0' && n > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}

	while (n > 0)
	{
		*ptr = '\0';
		ptr++;
		n--;
	}

	return (dest);
}
