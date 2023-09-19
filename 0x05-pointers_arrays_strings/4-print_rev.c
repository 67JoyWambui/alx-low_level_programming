#include "main.h"

/**
 * print_rev - function that prints a string in reverse
 * @s: the string
 */

void print_rev(char *s)
{
	int len;
	int num = 0;

	for (len = 0; s[len] != '\0'; len++)
		num++;
			for (len = num - 1; len >= 0; len--)

				_putchar(s[len]);

	_putchar('\n');
}
