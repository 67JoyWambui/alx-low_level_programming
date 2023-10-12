#include "variadic_functions.h"
#include <stdarg.h>


/**
 *  sum_them_all - function that returns the sum of all its parameters
 *  @n: number of arguments
 *  Return: sum af all parameters otherwise 0 if n is 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	int j;
	int i = 0;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(list, n);

	for (j = 0; j < (int)n; j++)
	{
		i = va_arg(list, int);
		sum = sum + i;
	}

	va_end(list);
	return (sum);
}
