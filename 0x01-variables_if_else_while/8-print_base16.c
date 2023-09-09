#include <stdio.h>

/**
 * main - the entry point
 *
 * Return: 0 on success
 *
 */

int main(void)
{
	char letter;

	letter = '0';

	while (letter <= '9')
	{
		putchar(letter);
		letter++;
	}

	letter = 'a';

	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');
	return (0);
}
