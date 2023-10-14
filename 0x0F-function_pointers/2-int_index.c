#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - a function that searches for an integer
 * @array: the array containing the elements
 * @size: number of elements in the array
 * @cmp: pointer to function
 *
 * Return: -1 if no elements match, otherwise 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int num;

	if (size <= 0 || array == NULL)
		return (-1);

	for (num = 0; num < size; num++)
	{
		if (cmp(array[num]) != 0)
			return (num);
	}

	return (-1);
}
