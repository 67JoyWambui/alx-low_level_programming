#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - this function that allocates memory using malloc
 * @b: size of the memory to allocate
 *
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *checked;

	checked = malloc(b);

	if (checked == NULL)

		exit(98);
	return (checked);
}
