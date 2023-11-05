#include "main.h"
#include <stdlib.h>

/**
 * _realloc -  a function that reallocates a memory block using malloc and free
 * @ptr: a pointer to the  memory previously allocated with a
 *	call to malloc: malloc(old_size)
 * @old_size: the size in bytes of the allocated space for ptr
 * @new_size: the new size in bytes of the new memory block
 *
 * Return: a pointer to the newly allocated memory space
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	char *pointer;


	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	pointer = malloc(new_size);

	if (pointer == NULL)
		return (NULL);

	_memcopy(pointer, ptr, (new_size > old_size) ? old_size : new_size);

	free(ptr);
	return (pointer);
}

/**
 * _memcopy - this copies bytes from str1  to str2
 * @str1: the source memory area
 * @str2: the destination memory area
 * @n: the number of bytes to be copied
 *
 * Return: a pointer to str2
 */

void *_memcopy(void *str1, void *str2, unsigned int n)
{
	char *d = str2;
	char *c = str1;

	while (n--)
		*d++ = *c++;
	return (str2);
}
