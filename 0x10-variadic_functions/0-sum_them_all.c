#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: the number
 * @...: the variadic functions
 *
 * Return: the sum of all its parameters.
 */

int sum_them_all(const unsigned int n, ...)
{

	unsigned int num;
	int add = 0;

	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);

	for (num = 0; num < n; num++)
	{
		add += va_arg(args, int);
	}

	va_end(args);
	return (add);
}
