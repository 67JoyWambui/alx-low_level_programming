#include <stdio.h>

/**
 * main - the entry point
 *
 * Return: Always 0 on success
 */

int main(void)
{
	int num;

	num = 0;

	while (num <= 9)
	{
		putchar(num + '0'); /*'0' converts num to char and */
					/*print cause of using putchar*/
		num++;
	}

	putchar('\n');
	return (0);
}
