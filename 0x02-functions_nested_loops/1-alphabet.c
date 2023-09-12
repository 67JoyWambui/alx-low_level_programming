#include "main.h"

/**
 * print_alphabet - a function that prints the alphabet in lowercase
 *
 */

void print_alphabet(void)
{
	char m;

	m = 'a';

	while (m <= 'z')
	{
		_putchar(m);
		m++;
	}

	_putchar('\n');
}
