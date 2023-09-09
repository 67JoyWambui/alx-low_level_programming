#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - this is the entry point
 *
 * Return: 0 on success
 *
 */
int main(void)
{
	int n;
	int Last_d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	Last_d = n % 10;

	if (Last_d > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, Last_d);
	}

	else if (Last_d == 0)
	{
		printf("Last digit of %d is %d and is zero\n", n, Last_d);
	}

	else
	{
		printf("Last digit of %d is %d and is less and not 0\n", n, Last_d);
	}
	return (0);
}
