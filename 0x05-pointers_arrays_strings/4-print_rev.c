#include "main.h"

/**
 * print_rev - function that prints a string in reverse
 * @s: the string
 */

void print_rev(char *s)
{
	int len;
	int num;

	for (num = 0; s[num] != '\0'; num++)
		len++;
			for (len = num - 1; num >= 0; num--)

				_putchar(s[num]);

	_putchar('\n');
}
