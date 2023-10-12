#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - a function that prints numbers, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: number of integers passed to the function
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list c_list;
	int i;

	va_start(c_list, n);

	for (i = 0; i < (int)n; i++)
	{
		printf("%d", va_arg(c_list, int));

		if (separator != NULL && i < (int)n - 1)
		{
			printf("%s", separator);
		}

	}

	printf("\n");

	va_end(c_list);
}
