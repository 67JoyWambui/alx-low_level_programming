#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal
 * @n: the number of times the character _ should be printed
 */

void print_line(int n)
{
	int j = 1;

	if (n <= 0)
	{
		_putchar('\n');
	}

	else
	{
		while (j <= n)
		{
			_putchar('_');
			j++;
		}
		_putchar('\n');
	}

}
