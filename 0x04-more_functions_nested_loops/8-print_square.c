#include "main.h"

/**
 * print_square - a function that prints a square
 * @size: this is the size of the square
 *
 */

void print_square(int size)
{
	int m, n;

	if (size <= 0)
		_putchar('\n');


	for (m = 0; m < size; m++)
	{
		for (n = 0; n < size; n++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
