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

	printf("Last digit of %d is %d", n, Last_d);

	if (Last_d > 5)
	{
		printf(" and is greater than 5\n");
	}

	else if (Last_d == 0)
	{
		printf("and is zero\n");
	}

	else
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}
