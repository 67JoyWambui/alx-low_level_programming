#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 * @num: the number
 *
 * Return: the last digit
 *
 */

int print_last_digit(int num)
{
	int l_digit = num % 10;

	if (l_digit < 0)
	{
		l_digit = -l_digit; /*Ensure the last digit is non-negative*/
	}

	_putchar(l_digit + '0');
	return (l_digit);
}
