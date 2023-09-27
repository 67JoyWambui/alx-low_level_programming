#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number
 * @n: the number
 *
 * Return: 0 if n is lower, -1 if an erros occured
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
