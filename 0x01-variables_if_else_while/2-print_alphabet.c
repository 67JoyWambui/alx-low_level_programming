#include <stdio.h>

/**
 * main - this is the entry point
 *
 * Return: 0 on success
 *
 */

int main(void)
{
	char letter;

	letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');
	return (0);
}
