#include "main.h"

/**
 * print_diagonal -  a function that draws a diagonal line on the terminal
 * @n: the number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	int j;
	int k;

	if (n <= 0)
	{
		_putchar('\n');
	}

	else
	{
		for (k = 0; k < n; k++)
		{
			for (j = 0; j < k; j++)
			{
				_putchar(' ');
			}
				_putchar('\\');
				_putchar('\n');

		}
	}
}
