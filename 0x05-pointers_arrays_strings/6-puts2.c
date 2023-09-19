#include "main.h"

/**
 * puts2 - function to print a character starting with the first character
 *
 *@str: the string
 */

void puts2(char *str)
{
	int m = 0;
	int n = 0;
	char *z = str;
	int num;

	while (*z != '\0')
	{
		z++;
		m++;
	}
	n = m - 1;

	for (num = 0; num <= n; num++)
	{
		if (num % 2 == 0)
			_putchar(str[num]);

	}
	_putchar('\n');
}
