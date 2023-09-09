#include <stdio.h>

/**
 * main - entry point
 * Return: 0 on success
 */

int main(void)
{
	char letter;

	letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}

	putchar('\n');
	return (0);
}
