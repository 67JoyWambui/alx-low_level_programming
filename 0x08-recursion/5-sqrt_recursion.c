#include "main.h"

/**
 * _sqrt - a recursive function that calculates the square
 *      root of a number
 * @a: the number to be calculated
 * @b: the number to check
 * Return: squareroot of n
 */

int _sqrt(int a, int b);

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: the number
 * Return: the square root of n, -1 if n does not have a natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else
	{
		return (_sqrt(1, n));
	}
}


/**
 * _sqrt - a recursive function that calculates the square
 *	root of a number
 * @a: the number to be calculated
 * @b: the number to check
 * Return: squareroot of n
 */

int _sqrt(int a, int b)
{
	if (a * a > b)
	{
		return (-1);
	}
	else if (a * a == b)
	{
		return (a);
	}

	else
	{
		return (_sqrt(a + 1, b));
	}
}

