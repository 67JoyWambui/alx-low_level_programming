#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 * @s: the pointer
 * @b: constant
 * @n: number of bytes to be filed
 *
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *stored = s;

		while (n > 0)
		{
			*s = b;
			s++;
			n--; /*this is to decrease the remaining bytes to fill*/
		}

		return (stored);
}
