#include "main.h"

/**
 * print_alphabet_x10 - a function that prints 10 times
 *	the alphabet in lowercase
 *
 */

void print_alphabet_x10(void)
{
	char m;
	int n = 0;

	for (n = 0; n <= 10; n++)
	{
		for (m = 'a'; m <= 'z'; m++)
		{
			_putchar(m);
		}
		_putchar('\n');
	}

}
