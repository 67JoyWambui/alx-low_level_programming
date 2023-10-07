#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function that reallocates a memory block
 * @ptr: a pointer to the memory previously allocated
 * @old_size: the size in bytes of the allocated space for ptr
 * @new_size: the new size in bytes of the new memory block
 *
 * Return: a pointer to the new block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_mem;
	char *old_ptr, *new_ptr;
	unsigned int x = 0;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_mem = malloc(new_size);

	if (new_mem == NULL)
		return (NULL);

	old_ptr = ptr;
	new_ptr = new_mem;

	while (x < old_size && x < new_size)
	{
		new_ptr[x] = old_ptr[x];
		x++;
	}

	free(ptr);

	return (new_mem);
}
