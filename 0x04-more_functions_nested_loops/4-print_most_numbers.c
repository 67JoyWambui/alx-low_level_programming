#include "main.h"

/**
 * print_most_numbers - a function that prints the numbers, from 0 to 9
 *	but not 2 and 4
 *
 */

void print_most_numbers(void)
{
	int m;

	m = 0;
	while (m <= 9)
	{
		if (m != 2 && m != 4)
		{
			_putchar(m + '0');
		}
			m++;
	}

	_putchar('\n');
}
