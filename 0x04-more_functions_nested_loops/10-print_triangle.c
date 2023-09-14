#include "main.h"

/**
 * print_triangle - a function that prints a triangle
 * @size: is the size of the triangle
 *
 */

void print_triangle(int size)
{
	int a, b, spaces;

	if (size <= 0)
		_putchar('\n');

	else
	{

	for (a = 1; a <= size; a++)
	{
		for (spaces = size - a; spaces > 0; spaces--)
		{
			_putchar(' ');
		}
		for (b = 1; b <= a; b++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
	}

}
