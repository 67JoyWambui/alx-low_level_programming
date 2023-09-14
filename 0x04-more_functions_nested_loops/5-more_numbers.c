#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers from 0 to 14
 */

void more_numbers(void)
{
	int num;
	int m;

	for (m = 0; m <= 9; m++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
			{
				_putchar('0' + num / 10);
			}
			_putchar('0' + num % 10);
		}

		_putchar('\n');
	}
}
