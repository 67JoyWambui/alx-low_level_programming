#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - a function that executes a function given
 *	as a parameter on each element of an array
 * @size: is the size of the array
 * @action: pointer to the function
 * @array: the array containing the elements
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int m;

	for (m = 0; m < size; m++)
	{
		action(array[m]);
	}

	if (array == NULL || action == NULL)
		return;
}
