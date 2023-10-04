#include "main.h"
#include <stdlib.h>

/**
 * create_array -  function that creates an array of chars
 * @size: the size of the array
 * @c: char to be assigned to the array
 *
 * Return: pointer to the array otherwise NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int val;
	char *str;

	if (size == 0)
		return (NULL);

	str = (char *)malloc(sizeof(char) * size);

	if (str == 0)
		return (NULL);

	for (val = 0; val < size; val++)
	{
		str[val] = c;
	}

	return (str);
}
