#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: destination of memory area
 * @src: source of memory are
 * @n: number of bytes to be copied
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;

	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	return (ptr);
}

