#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers
 * @min: minimum number of elements in the array
 * @max: the maximum number of elements in the array
 *
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *new_array;
	int value;
	int n;

	if (min > max)
		return (NULL);

	value = max - min + 1;

	new_array = malloc(sizeof(int) * value);

	if (new_array == 0)
		return (NULL);

	for (n = 0; n < value; n++)
		new_array[n] = min++;

	return (new_array);
}
