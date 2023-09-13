#include "main.h"

/**
 * times_table - a function that prints the 9 times table
 *
 */

void times_table(void)
{
	int m; /*this is the raw*/
	int n; /*this is the column*/
	int product;

	for (m = 0; m <= 9; m++)
	{
		for (n = 1; n <= 9; n++)
		{
			product = m * n;
			if (m <= 10)
			{
				_putchar(',');
				_putchar(' ');

				if (product <= 9)

					_putchar(' ');
			}

			_putchar((product / 10) + '0');
			_putchar((product % 10) + '0');
		}

		_putchar('\n');
	}
}


