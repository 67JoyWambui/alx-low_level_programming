#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * @dest: the first string
 * @src: the string to be concatenated
 *
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	char *n = dest;

	while (*n != '\0')
		n++;

	while (*src != '\0')
	{
		*n = *src;
			src++;
			n++;
	}

	*n = '\0';
	return (dest);
}
