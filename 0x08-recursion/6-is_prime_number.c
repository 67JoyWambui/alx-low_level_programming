#include "main.h"

/**
 * _isPrime - helper function that checks if a number is prime or not
 * @num1: the number to be checked
 * @num2: the iterator
 *
 * Return: 0 on success
 */
int _isPrime(int num1, int num2);

/**
 * is_prime_number - a function checking if a number is a prime number
 * @n: the number
 *
 * Return: 1 if the integer is a prime number, otherwise return 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{

		return (0);
	}
		return (_isPrime(n, n - 1));
}

/**
 * _isPrime - helper function that checks if a number is prime or not
 * @num1: the number to be checked
 * @num2: the iterator
 *
 * Return: 0 on success
 */

int _isPrime(int num1, int num2)
{
	if (num1 > num2)
	{
		return (1);
	}

	else if (num1 % num2 == 0)
	{
		return (0);
	}

	return (_isPrime(num1, num2 - 1)); /*-1 is for decrementation*/
}
