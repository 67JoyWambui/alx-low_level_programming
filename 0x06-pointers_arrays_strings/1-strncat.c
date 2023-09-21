#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 * @dest: the first string
 * @src: the string to be concatenated
 * @n: number of bytes
 *
 * Return: the dest string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *ptr_d = dest;

	while (*ptr_d != '\0')
		ptr_d++;

	while (*src != '\0')
	{
		*ptr_d =  *src;
			src++;
			ptr_d++;
		{
				if (n > 0)

		n--;
		}
	}

	*ptr_d = '\0';

	return (dest);
}
