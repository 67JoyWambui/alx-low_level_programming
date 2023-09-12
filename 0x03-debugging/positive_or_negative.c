#include "main.h"

/*
 * positive_or_negative - this a function that prints number
 * in positive or negative
 * @i: the number
 *
 * Return: void (no return value)
 *
 */

void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}

	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}

	else
	{
		printf("%d is negative\n", i);
	}

}
