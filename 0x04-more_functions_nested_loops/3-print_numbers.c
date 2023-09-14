#include "main.h"

/**
 * print_numbers - function that prints the numbers, from 0 to 9
 *
 */

void print_numbers(void)
{
	int m;

	m = 0;
	while (m <= 9)
	{
		_putchar(m + '0');
		m++;
	}
	_putchar('\n');
}
