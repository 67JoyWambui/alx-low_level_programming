#include <stdio.h>

/**
 * main - this is the entry point
 * Return: Always 0 on success
 */

int main(void)
{
	int num;

	num = 0;

	while (num <= 9)
	{
		putchar(num + '0'); /*This is to convert num to char and print*/
		num++;
	}

	putchar('\n');
	return (0);
}
