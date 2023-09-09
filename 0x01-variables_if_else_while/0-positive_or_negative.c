#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* betty style doc for function main goes there */

/**
 * main - the entry point
 *  Return: 0 on success
 *
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}

	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}

	else
	{
		printf("%d is negative\n", n);
	}

	return (0);
}