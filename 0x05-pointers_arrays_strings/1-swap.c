#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * @a: the first integer
 * @b: the second integer to be swapped
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int T; /* store the value of *a before the swap */

	T = *a;
	*a = *b;
	*b = T;
}
